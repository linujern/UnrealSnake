// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SnakeBotController.generated.h"

class ASnakePawn;
/**
 * 
 */
UCLASS()
class SNAKEGAME_API ASnakeBotController : public APlayerController
{
	GENERATED_BODY()

	TObjectPtr<ASnakePawn> SnakePawn;

protected:
	virtual void OnPossess(APawn* InPawn) override;

	virtual void Tick(float DeltaSeconds) override;
};
