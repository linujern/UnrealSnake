// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPathNode.h"
#include "GameFramework/PlayerController.h"
#include "SnakeBotController.generated.h"

struct FPathNode;

class ASnakePawn;
/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASnakeBotController : public APlayerController
{
	GENERATED_BODY()

	TObjectPtr<ASnakePawn> SnakePawn;

protected:
	virtual void BeginPlay() override;
	
	virtual void OnPossess(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;

	TArray<FPathNode> AllNodes; // Pre-sized per search
	TArray<FPathNode*> OpenList; // Heap
	TSet<FIntPoint> ClosedSet;

	int32 GridWidth;
	int32 GridHeight;

	FPathNode* GetNodeByAddress(const int32 X, const int32 Y);
	FPathNode* GetNodeAtIndex(const int Index);
	FPathNode* GetNodeByTile(const FTile* Tile);
	FTile* TargetTile() const;
	
	TArray<FTile*> FindPath(FVector StartLocation, FVector TargetLocation);

	UFUNCTION()
	void HandleReachedCenterTile();

private:
	UPROPERTY()
	TObjectPtr<ASnakeWorld> SnakeWorld;
};
