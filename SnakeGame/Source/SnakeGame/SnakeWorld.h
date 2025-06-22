// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Apple.h"
#include "GameFramework/Pawn.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Definitions.h"
#include "FTile.h"
#include "SnakeWorld.generated.h"

UCLASS()
class SNAKEGAME_API ASnakeWorld : public APawn {
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnakeWorld();
	
	virtual void OnConstruction(const FTransform& Transform) override;
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInstancedStaticMeshComponent* InstancedWalls;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UInstancedStaticMeshComponent* InstancedFloors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AApple> AppleClass;

	UPROPERTY()
	TArray<AActor*> SpawnedApples;

	UPROPERTY()
	TArray<FIntPoint> SnakeOccupiedTiles;

private:
	UPROPERTY()
	TArray<FTile> WorldTiles;

	int32 GridWidth = 0;
	int32 GridHeight = 0;

protected:
	UFUNCTION()
	void MakeWorld(int LevelNumber);
	
public:
	static ASnakeWorld* Get(UWorld* World);
	
	FTile*          GetTileByAddress(const int32 X, const int32 Y);
	FTile*          GetTileAtIndex(const int Index);
	FTile*          GetTileFromWorldPoint(const FVector& WorldLocation);
	FIntPoint       GetGridCoordsFromWorldLocation(const FVector& WorldLocation) const;
	TArray<FTile*>  GetAppleTiles();

	FORCEINLINE TArray<FTile> GetWorldTiles() { return WorldTiles; }
	TArray<FTile*> GetNeighbours(FTile* Tile);
	
	UFUNCTION()
	FORCEINLINE int32 GetGridWidth() const { return GridWidth; }
	UFUNCTION()
	FORCEINLINE int32 GetGridHeight() const { return GridHeight; }

	static ESnakeDirection GetDirectionBetweenTiles(const FTile* From, const FTile* To);

	void SpawnApple();

	void MarkTileAsOccupied(const FIntPoint& Coord);
	void UnmarkTileAsOccupied(const FIntPoint& Coord);
};
