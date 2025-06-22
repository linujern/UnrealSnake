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

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPointsUpdated, int, InPoints);

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

	UPROPERTY()
	int Points = 0;

public:
	UPROPERTY(BlueprintAssignable)
	FOnPointsUpdated OnPointsUpdated;
	
	UFUNCTION()
	FORCEINLINE float GetSnakeSpeed() const { return SnakeSpeed; } 

	UFUNCTION(BlueprintCallable)
	FORCEINLINE ESnakeControllerType GetControllerType() const { return SnakeControllerType; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void SetControllerType(ESnakeControllerType InSnakeControllerType) { SnakeControllerType = InSnakeControllerType; }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void AddPoints(int InPoints) { Points += InPoints; OnPointsUpdated.Broadcast(Points); }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE void ResetPoints() { Points = 0; OnPointsUpdated.Broadcast(Points); }

	UFUNCTION(BlueprintCallable)
	FORCEINLINE int GetPoints() const { return Points; }
	
};
