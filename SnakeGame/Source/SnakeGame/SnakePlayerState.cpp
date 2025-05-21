// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakePlayerState.h"
#include "SnakeGameState.h"
#include "GameDataSubsystem.h"

void ASnakePlayerState::BeginPlay() {
	Super::BeginPlay();
	
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("ControllerType is %x"), GetControllerType()));
}

