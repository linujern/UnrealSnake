// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SnakeGameState.h"
#include "GameDataSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FStoredGameData {
	GENERATED_BODY()

	UPROPERTY()
	ESnakeGameType GameType;

	UPROPERTY()
	ESnakeAgent1 Agent1;

	UPROPERTY()
	ESnakeAgent2 Agent2;

	UPROPERTY()
	int ActiveApples = 1;

	UPROPERTY()
	int ApplesPerLevel = 1;

	UPROPERTY()
	int LevelNumber = 1;
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
	FStoredGameData StoredGameData;
	
public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE ESnakeAgent1 GetAgent1() const { return StoredGameData.Agent1; }
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetAgent1(ESnakeAgent1 InAgent1) { StoredGameData.Agent1 = InAgent1; }
	UFUNCTION(BlueprintPure)
	FORCEINLINE ESnakeAgent2 GetAgent2() const { return StoredGameData.Agent2; }
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetAgent2(ESnakeAgent2 InAgent2) { StoredGameData.Agent2 = InAgent2; }
	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumAgents() const { return StoredGameData.Agent2 == ESnakeAgent2::None ? 1 : 2; }
	
	UFUNCTION(BlueprintCallable)
	void StoreGameData();

	UFUNCTION(BlueprintCallable)
	void LoadGameData();

	UFUNCTION(BlueprintCallable)
	ASnakeGameState* WorldToGameState(FString CallFunctionName);
};
