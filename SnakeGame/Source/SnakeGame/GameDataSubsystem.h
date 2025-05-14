// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SnakeGameState.h"
#include "GameDataSubsystem.generated.h"

USTRUCT()
struct FStoredGameData {
	GENERATED_BODY()

	UPROPERTY()
	ESnakeGameType SnakeGameType;

	UPROPERTY()
	int NumPlayers = 1;

	UPROPERTY()
	int NumBots = 0;
};

/**
 * 
 */
UCLASS()
class SNAKEGAME_API UGameDataSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
private:
	UPROPERTY()
	int NumPlayers = 1;

	UPROPERTY()
	int NumBots = 0;

	UPROPERTY()
	FStoredGameData StoredGameData;
	
public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumPlayers() const { return NumPlayers; }
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetNumPlayers(int InNumPlayers) { NumPlayers = InNumPlayers; }
	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumBots() const { return NumBots; }
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetNumBots(int InNumBots) { NumBots = InNumBots; }
	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumActors() const { return NumPlayers + NumBots; }
	
	UFUNCTION(BlueprintCallable)
	void SaveGameData();

	UFUNCTION(BlueprintCallable)
	void LoadGameData();

	UFUNCTION(BlueprintCallable)
	ASnakeGameState* WorldToGameState(FString CallFunctionName);
};
