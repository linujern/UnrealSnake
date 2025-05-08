// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMode.h"

#include "SnakePlayerState.h"

void APlayMode::AppleEaten(AController* NewController) {
	ASnakePlayerState* SnakePlayerState = NewController->GetPlayerState<ASnakePlayerState>();
}
