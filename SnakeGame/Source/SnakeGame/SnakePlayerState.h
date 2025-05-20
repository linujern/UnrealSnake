// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "SnakePlayerState.generated.h"

UENUM(BlueprintType)
enum class ESnakeControllerType : uint8 {
	KeyboardSolo,
	Keyboard1,
	Keyboard2,
	AI,
	None
};

/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASnakePlayerState : public APlayerState
{
	GENERATED_BODY()

private:
	UPROPERTY()
	ESnakeControllerType SnakeControllerType = ESnakeControllerType::None;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float SnakeSpeed = 500.0f;

	virtual void BeginPlay() override;

public:
	UFUNCTION()
	FORCEINLINE float GetSnakeSpeed() const { return SnakeSpeed; } 

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ESnakeControllerType GetControllerType() const { return SnakeControllerType; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetControllerType(ESnakeControllerType InSnakeControllerType) { SnakeControllerType = InSnakeControllerType; }
};
