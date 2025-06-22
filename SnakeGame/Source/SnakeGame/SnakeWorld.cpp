// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeWorld.h"
#include "Apple.h"
#include "EngineUtils.h"
#include "SnakeGameState.h"
#include "Kismet/GameplayStatics.h"

ASnakeWorld* ASnakeWorld::Get(UWorld* World) {
	if (!IsValid(World)) return nullptr;

	for (TActorIterator<ASnakeWorld> It(World); It; ++It) {
		return *It; // Return the first (and only) SnakeWorld
	}
	return nullptr;
}

// Sets default values
ASnakeWorld::ASnakeWorld() {
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	InstancedWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedWall"));
	InstancedWalls->SetupAttachment(RootComponent);

	InstancedFloors = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedFloor"));
	InstancedFloors->SetupAttachment(RootComponent);

}

void ASnakeWorld::OnConstruction(const FTransform& Transform) {
	MakeWorld(1);
}

void ASnakeWorld::BeginPlay() {
	Super::BeginPlay();

	ASnakeGameState* SnakeGameState = Cast<ASnakeGameState>(UGameplayStatics::GetGameState(GetWorld()));

	MakeWorld(SnakeGameState->GetLevelNumber());
	
	int Limit = SnakeGameState->GetActiveApples();
	for (int i = 0; i < Limit; i++)
		SpawnApple();
}


void ASnakeWorld::MakeWorld(int LevelNumber) {
	InstancedWalls->ClearInstances();
	InstancedFloors->ClearInstances();
	WorldTiles.Empty();

	TArray<FString> Lines;
	FString Num = FString::FromInt(LevelNumber);
	FString FilePath = FPaths::ProjectDir() + TEXT("Data/Level") + Num + TEXT(".txt");

	if (FFileHelper::LoadFileToStringArray(Lines, *FilePath)) {
		int32 NumRows = Lines.Num();
		int32 NumCols = 0;

		// Find the maximum line length (in case some lines are shorter)
		for (const FString& Line : Lines) {
			if (Line.Len() > NumCols) {
				NumCols = Line.Len();
			}
		}

		// Calculate the center offset
		FVector CenterOffset = FVector((NumRows * TileSize) / 2.f, (NumCols * TileSize) / 2.f, 0.f);

		WorldTiles.Reserve(NumCols * NumRows);
		GridWidth = NumCols;
		GridHeight = NumRows;
		
		for (int32 y = 0; y < NumRows; y++) {
			const FString& Line = Lines[y];

			for (int32 x = 0; x < Line.Len(); x++) {
				FVector TileLocation = FVector((NumRows - y) * TileSize, x * TileSize, 0.f) - CenterOffset;
				FTransform InstanceTransform = FTransform(FRotator::ZeroRotator, TileLocation);
				
				if (Line[x] == '#') {
					InstancedWalls->AddInstance(InstanceTransform);
				}
				else {
					InstancedFloors->AddInstance(InstanceTransform);
				}
				bool bIsWall = Line[x] == '#';
				WorldTiles.Add(FTile(bIsWall, FIntPoint(x, y), TileLocation));
			}
		}
	}
}


void ASnakeWorld::SpawnApple() {
	TArray<FTile*> ValidTiles;

	for (FTile& Tile : WorldTiles) {
		if (!Tile.bIsWall && !SnakeOccupiedTiles.Contains(Tile.GridCoords)) {
			ValidTiles.Add(&Tile);
		}
	}

	if (ValidTiles.Num() == 0) {
		UE_LOG(LogTemp, Warning, TEXT("No valid tiles to spawn apple!"));
		return;
	}

	int32 Index = FMath::RandRange(0, ValidTiles.Num() - 1);
	FTile* ChosenTile = ValidTiles[Index];

	// Spawn actor
	FActorSpawnParameters Params;
	Params.Owner = this;
	AActor* SpawnedApple = GetWorld()->SpawnActor<AApple>(AppleClass, ChosenTile->WorldLocation, FRotator::ZeroRotator, Params);
	
	if (SpawnedApple) {
		SpawnedApples.Add(SpawnedApple);
	}
}

void ASnakeWorld::MarkTileAsOccupied(const FIntPoint& Coord) {
	if (!SnakeOccupiedTiles.Contains(Coord)) {
		SnakeOccupiedTiles.Add(Coord);
	}
}

void ASnakeWorld::UnmarkTileAsOccupied(const FIntPoint& Coord) {
	SnakeOccupiedTiles.Remove(Coord);
}

// ===== Tile Getters =====

FTile* ASnakeWorld::GetTileByAddress(const int32 X, const int32 Y) {
	if (X < 0 || X >= GridWidth || Y < 0 || Y >= GridHeight)
		return nullptr;
	return &WorldTiles[Y * GridWidth + X];
}

FTile* ASnakeWorld::GetTileAtIndex(const int Index) {
	if(WorldTiles.Num() > Index)
		return nullptr;
	return &WorldTiles[Index];
}

FTile* ASnakeWorld::GetTileFromWorldPoint(const FVector& WorldLocation) {
	FIntPoint Coords = GetGridCoordsFromWorldLocation(WorldLocation);
	return GetTileByAddress(Coords.X, Coords.Y);
}

FIntPoint ASnakeWorld::GetGridCoordsFromWorldLocation(const FVector& WorldLocation) const {
	FVector LocalPos = WorldLocation - GetActorLocation();

	int32 X = FMath::FloorToInt(LocalPos.Y / TileSize); // Y is horizontal in this system
	int32 Y = GridHeight - 1 - FMath::FloorToInt(LocalPos.X / TileSize); // X is vertical down in world

	return FIntPoint(X, Y);
}

TArray<FTile*> ASnakeWorld::GetNeighbours(FTile* Tile) {
	TArray<FTile*> Neighbours;
	if (!Tile) return Neighbours;

	FIntPoint Coord = Tile->GridCoords;
	constexpr int32 Offsets[4][2] = {
		{1, 0}, {-1, 0}, {0, 1}, {0, -1}
	};

	for (auto& Offset : Offsets) {
		FTile* Neighbor = GetTileByAddress(Coord.X + Offset[0], Coord.Y + Offset[1]);
		if (Neighbor && !Neighbor->bIsWall && !SnakeOccupiedTiles.Contains(Neighbor->GridCoords))
			Neighbours.Add(Neighbor);
	}
	return Neighbours;
}

ESnakeDirection ASnakeWorld::GetDirectionBetweenTiles(const FTile* From, const FTile* To) {
	FIntPoint Delta = To->GridCoords - From->GridCoords;

	if (Delta == FIntPoint(1, 0)) return ESnakeDirection::Right;
	if (Delta == FIntPoint(-1, 0)) return ESnakeDirection::Left;
	if (Delta == FIntPoint(0, 1)) return ESnakeDirection::Down;
	if (Delta == FIntPoint(0, -1)) return ESnakeDirection::Up;

	return ESnakeDirection::None;
}

TArray<FTile*> ASnakeWorld::GetAppleTiles() {
	TArray<FTile*> Result;
	for (AActor* Apple : SpawnedApples) {
		if (Apple) {
			const FVector WorldLoc = Apple->GetActorLocation();
			if (FTile* Tile = GetTileFromWorldPoint(WorldLoc)) {
				Tile->WorldLocation = Apple->GetActorLocation();
				Result.Add(Tile);
			}
		}
	}
	return Result;
}
