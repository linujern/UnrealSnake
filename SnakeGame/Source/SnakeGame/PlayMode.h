// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PlayMode.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API APlayMode : public AGameMode {
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	TArray<APlayerController*> PlayerControllers;

	UPROPERTY()
	int LivingAgentsCount = 0;
	
public:
	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	UFUNCTION()
	void AppleEaten(AController* NewController);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE bool HasPlayerController(APlayerController* PlayerController) const { return PlayerControllers.Contains(PlayerController); }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int CountControllers() const { return PlayerControllers.Num(); }
	
	UFUNCTION(BlueprintCallable)
	APlayerController* GetPlayerController(uint8 Index);

	UFUNCTION(BlueprintCallable)
	void AddPlayerContoller(APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable)
	void RemovePlayerContoller(APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void AddLivingAgent() { LivingAgentsCount++; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetLivingAgentCount() const { return LivingAgentsCount; }
};
