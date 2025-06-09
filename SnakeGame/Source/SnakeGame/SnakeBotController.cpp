// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBotController.h"

#include "AssetTypeCategories.h"
#include "SnakePawn.h"
#include "SnakeWorld.h"

void ASnakeBotController::BeginPlay() {
	Super::BeginPlay();
	
	SnakeWorld = ASnakeWorld::Get(GetWorld());
	if (!IsValid(SnakeWorld))
		return;

	GridWidth = SnakeWorld->GetGridWidth();
	GridHeight = SnakeWorld->GetGridHeight();

	AllNodes.SetNum(GridWidth * GridHeight);
	for (int32 i = 0; i < AllNodes.Num(); i++) {
		AllNodes[i] = FPathNode(SnakeWorld->GetTileAtIndex(i));
	}
	//SnakePawn->QueueNewDirection(ESnakeDirection::Right);
}

void ASnakeBotController::OnPossess(APawn* InPawn) {
	Super::OnPossess(InPawn);

	SnakePawn = Cast<ASnakePawn>(InPawn);
	SnakePawn->OnCenterTileReached.AddDynamic(this, &ASnakeBotController::HandleReachedCenterTile);
}

void ASnakeBotController::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	if(!IsValid(SnakePawn))
		return;
}

void ASnakeBotController::HandleReachedCenterTile() {
	if (!IsValid(SnakePawn) || !IsValid(SnakeWorld))
		return;

	const FVector StartLocation = SnakePawn->GetActorLocation();
	const FVector TargetLocation = TargetTile()->WorldLocation;

	// Run A*
	TArray<FTile*> CurrentPath = FindPath(StartLocation, TargetLocation);

	// If we found a path, move
	if (CurrentPath.Num() >= 2) {
		FTile* CurrentTile = CurrentPath[0];
		FTile* NextTile = CurrentPath[1];

		ESnakeDirection MoveDir = SnakeWorld->GetDirectionBetweenTiles(CurrentTile, NextTile);
		SnakePawn->QueueNewDirection(MoveDir);
	}
	
}

FTile* ASnakeBotController::TargetTile() const {
	FTile* StartTile = SnakeWorld->GetTileFromWorldPoint(SnakePawn->GetActorLocation());
	TArray<FTile*> AppleTiles = SnakeWorld->GetAppleTiles();

	FTile* ClosestAppleTile = nullptr;
	float ClosestDistance = TNumericLimits<float>::Max();

	for (FTile* AppleTile : AppleTiles) {
		if (!AppleTile || AppleTile->bIsWall)
			continue;

		float Distance = FVector::Dist(AppleTile->WorldLocation, StartTile->WorldLocation);
		if (Distance < ClosestDistance) {
			ClosestDistance = Distance;
			ClosestAppleTile = AppleTile;
		}
	}
	return ClosestAppleTile;
}


TArray<FTile*> ASnakeBotController::FindPath(FVector StartLocation, FVector TargetLocation) {
	if (!IsValid(SnakeWorld))
		return TArray<FTile*>();

	// Convert to tile
	FTile* StartTile = SnakeWorld->GetTileFromWorldPoint(StartLocation);
	FTile* GoalTile  = SnakeWorld->GetTileFromWorldPoint(TargetLocation);
	if (!StartTile || !GoalTile || StartTile->bIsWall || GoalTile->bIsWall)
		return TArray<FTile*>();

	// Reset state
	OpenList.Empty();
	ClosedSet.Empty();
	for (FPathNode& Node : AllNodes) {
		Node.G = TNumericLimits<float>::Max();
		Node.H = 0;
		Node.S = 0;
		Node.F = 0;
		Node.Parent = nullptr;
	}

	// Start Node
	FPathNode* StartNode = GetNodeByTile(StartTile);
	FPathNode* GoalNode  = GetNodeByTile(GoalTile);

	StartNode->G = 0.f;
	StartNode->H = FVector::Dist(StartTile->WorldLocation, GoalTile->WorldLocation);
	StartNode->S = 0.f; // Could add threat penalty here
	StartNode->F = StartNode->G + StartNode->H;

	OpenList.Add(StartNode);

	// Search Loop
	while (OpenList.Num() > 0) {
		// Sort lowest F first (heapify)
		Algo::Heapify(OpenList, [](const FPathNode* A, const FPathNode* B) {
			return A->F < B->F;
		});

		FPathNode* Current = OpenList[0];
		OpenList.RemoveAt(0);
		ClosedSet.Add(Current->Tile->GridCoords);

		// Reached goal
		if (Current == GoalNode) {
			// Reconstruct and use path
			TArray<FTile*> FinalPath;
			FPathNode* Walk = GoalNode;
			while (Walk) {
				FinalPath.Insert(Walk->Tile, 0);
				Walk = Walk->Parent;
			}
			// For now: debug print
			for (FTile* Tile : FinalPath) {
				DrawDebugBox(GetWorld(), Tile->WorldLocation, FVector(25.f), FColor::Green, false, 2.0f);
			}
			return FinalPath;
		}

		// Neighbours
		TArray<FTile*> Neighbours = SnakeWorld->GetNeighbours(Current->Tile);

		for (FTile* Tile : Neighbours) {
			FPathNode* Neighbour = GetNodeByTile(Tile);
			if (!Neighbour || ClosedSet.Contains(Neighbour->Tile->GridCoords))
				continue;

			float TentativeG = Current->G + FVector::Dist(Current->Tile->WorldLocation, Tile->WorldLocation);

			if (TentativeG < Neighbour->G) {
				Neighbour->Parent = Current;
				Neighbour->G = TentativeG;
				Neighbour->H = FVector::Dist(Tile->WorldLocation, GoalTile->WorldLocation);
				Neighbour->S = 0.f; // Optional: custom weight/penalty
				Neighbour->F = Neighbour->G + Neighbour->H + Neighbour->S;

				if (!OpenList.Contains(Neighbour))
					OpenList.Add(Neighbour);
			}
		}
	}
	return TArray<FTile*>();
}

// ===== NODE GETTERS =====

FPathNode* ASnakeBotController::GetNodeByAddress(const int32 X, const int32 Y) {
	if (X < 0 || X >= GridWidth || Y < 0 || Y >= GridHeight)
		return nullptr;
	return &AllNodes[Y * GridWidth + X];
}

FPathNode* ASnakeBotController::GetNodeAtIndex(const int Index) {
	if(AllNodes.Num() < Index)
		return nullptr;
	return &AllNodes[Index];
}

FPathNode* ASnakeBotController::GetNodeByTile(const FTile* Tile) {
	if (!SnakeWorld->GetWorldTiles().Contains(*Tile))
		return nullptr;

	int FoundAtIndex = SnakeWorld->GetWorldTiles().Find(*Tile);
	return GetNodeAtIndex(FoundAtIndex);
}



