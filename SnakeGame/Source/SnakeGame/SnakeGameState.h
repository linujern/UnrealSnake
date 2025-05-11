// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "SnakeGameState.generated.h"

UENUM(BlueprintType)
enum class ESnakeGameType : uint8 {
	Team,
	Battle
};

UENUM(BlueprintType)
enum class ESnakeAgent1 : uint8 {
	Player,
	Bot
};

UENUM(BlueprintType)
enum class ESnakeAgent2 : uint8 {
	None,
	Player,
	Bot
};

UCLASS()
class SNAKEGAME_API ASnakeGameState : public AGameState
{
	GENERATED_BODY()
private:
	UPROPERTY()
	ESnakeGameType SnakeGameType = ESnakeGameType::Team;
public:
	UFUNCTION(BlueprintCallable)
	FORCEINLINE ESnakeGameType GetSnakeGameType() const {return SnakeGameType;} 
};
