#pragma once
#include "FTile.generated.h"

USTRUCT(BlueprintType)
struct SNAKEGAME_API FTile {
	GENERATED_BODY()

public:
	UPROPERTY()
	bool bIsWall;

	UPROPERTY()
	bool bOccupied;

	UPROPERTY()
	FIntPoint GridCoords;

	UPROPERTY()
	FVector WorldLocation;

	FTile(): bIsWall(false), GridCoords(), WorldLocation() {}

	FTile(bool bWall, FIntPoint Coords, FVector Loc) {
		bIsWall = bWall;
		GridCoords = Coords;
		WorldLocation = Loc;
	}

	FORCEINLINE bool operator==(const FTile& Other) const {
		return GridCoords == Other.GridCoords;
	}
	FORCEINLINE bool operator!=(const FTile& Other) const {
		return !(*this == Other);
	}
};