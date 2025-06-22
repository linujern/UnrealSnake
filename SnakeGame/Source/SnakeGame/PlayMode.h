// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SnakePlayerState.h"
#include "GameFramework/GameMode.h"
#include "PlayMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPointsReached);

/**
 * 
 */

UCLASS()
class SNAKEGAME_API APlayMode : public AGameMode {
	GENERATED_BODY()

private:
	UPROPERTY()
	int SpawnIncrementor = 0;
	
protected:
	UPROPERTY(BlueprintReadOnly)
	TArray<APlayerController*> PlayerControllers;

	UPROPERTY()
	int Agent1Points = 0;

	UPROPERTY()
	int Agent2Points = 0;
	
	UPROPERTY()
	int LivingAgentsCount = 0;

	UFUNCTION()
	void GameOver() const;
	
public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	virtual APlayerController* SpawnPlayerController(ENetRole InRemoteRole, const FString& Options) override; 

	UPROPERTY(BlueprintAssignable)
	FOnPointsReached OnPointsReached;
	
	UFUNCTION(BlueprintCallable)
	void AppleEaten(APlayerController* NewController);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool HasPlayerController(APlayerController* PlayerController) const { return PlayerControllers.Contains(PlayerController); }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int CountControllers() const { return PlayerControllers.Num(); }
	
	UFUNCTION(BlueprintCallable)
	APlayerController* GetPlayerController(uint8 Index);

	UFUNCTION(BlueprintCallable)
	void AddPlayerController(APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable)
	void RemovePlayerController(APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void AddLivingAgent() { LivingAgentsCount++; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void RemoveLivingAgent() { LivingAgentsCount--; if (LivingAgentsCount <= 0) GameOver(); }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetLivingAgentCount() const { return LivingAgentsCount; }

	UFUNCTION()
	ESnakeControllerType DetermineControllerTypeForNextPlayer() const;

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetAgent1Points() { return Agent1Points; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetAgent2Points() { return Agent2Points; }
};
