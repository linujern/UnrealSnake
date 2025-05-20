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
class SNAKEGAME_API ASnakeGameState : public AGameState {
	GENERATED_BODY()
private:
	UPROPERTY()
	ESnakeGameType SnakeGameType = ESnakeGameType::Team;
	UPROPERTY()
	ESnakeAgent1 SnakeAgent1 = ESnakeAgent1::Player;
	UPROPERTY()
	ESnakeAgent2 SnakeAgent2 = ESnakeAgent2::None;
public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE ESnakeGameType GetSnakeGameType() const {return SnakeGameType;}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetSnakeGameType(ESnakeGameType InSnakeGameType) { SnakeGameType = InSnakeGameType; }
	UFUNCTION(BlueprintPure)
	FORCEINLINE ESnakeAgent1 GetSnakeAgent1() const {return SnakeAgent1;}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetSnakeAgent1(ESnakeAgent1 InSnakeAgent) { SnakeAgent1 = InSnakeAgent; }
	UFUNCTION(BlueprintPure)
	FORCEINLINE ESnakeAgent2 GetSnakeAgent2() const {return SnakeAgent2;}
	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetSnakeAgent2(ESnakeAgent2 InSnakeAgent) { SnakeAgent2 = InSnakeAgent; }
	
};
