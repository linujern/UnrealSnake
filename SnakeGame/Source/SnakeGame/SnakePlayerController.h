// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Definitions.h"
#include "InputActionValue.h"
#include "SnakePawn.h"
#include "PlayMode.h"
#include "GameFramework/PlayerController.h"
#include "SnakePlayerController.generated.h"

class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UENUM()
enum class KeyboardContext {
	Keyboard1,
	Keyboard2
};

/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASnakePlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void InitializeInput() const;

	UFUNCTION()
	void GetPlayerPawns();

	UPROPERTY()
	TObjectPtr<ASnakePawn> SnakePlayer1;

	UPROPERTY()
	TObjectPtr<ASnakePawn> SnakePlayer2;

	UPROPERTY()
	APlayMode* PlayMode;

	UPROPERTY()
	bool IsSolo;
	
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> Keyboard1IMC;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputMappingContext> Keyboard2IMC;

	
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB1LeftAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB1DownAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB1UpAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB1RightAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB1PauseAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB2LeftAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB2DownAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB2UpAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB2RightAction;
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	TObjectPtr<UInputAction> KB2PauseAction;

	UFUNCTION()
	void BindKeyboardActions(UEnhancedInputComponent* Input, const TMap<UInputAction*, ESnakeDirection>& ActionMappings, KeyboardContext Keyboard);
	UFUNCTION()
	void HandlePlayer1DirectionInput(const FInputActionValue& Value, ESnakeDirection Direction);
	UFUNCTION()
	void HandlePlayer2DirectionInput(const FInputActionValue& Value, ESnakeDirection Direction);

	UFUNCTION()
	void HandlePause(const FInputActionValue& Value);
};
