// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "SnakeGameState.h"
#include "GameDataSubsystem.generated.h"

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
public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumPlayers() const { return NumPlayers; }

	UFUNCTION(BlueprintCallable)
	void SetNumPlayers(int InNumPlayers);

	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumBots() const { return NumBots; }

	UFUNCTION(BlueprintCallable)
	void SetNumBots(int InNumBots);

	UFUNCTION(BlueprintPure)
	FORCEINLINE int GetNumActors() const { return NumPlayers + NumBots; }
};
