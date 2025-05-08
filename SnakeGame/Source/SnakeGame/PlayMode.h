// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "PlayMode.generated.h"

/**
 * 
 */
UCLASS()
class SNAKEGAME_API APlayMode : public AGameMode
{
	GENERATED_BODY()
public:
	void AppleEaten(AController* NewController);
};
