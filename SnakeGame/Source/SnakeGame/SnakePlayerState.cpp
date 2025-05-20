// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakePlayerState.h"
#include "SnakeGameState.h"
#include "GameDataSubsystem.h"

void ASnakePlayerState::BeginPlay() {
	Super::BeginPlay();

	UWorld* World = GetWorld();
	UGameDataSubsystem* GameDataSubsystem = World->GetGameInstance()->GetSubsystem<UGameDataSubsystem>();
	
	if(GameDataSubsystem->GetAgent2() == ESnakeAgent2::None)
		SetControllerType(ESnakeControllerType::KeyboardSolo);
	
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("ControllerType is %x"), GetControllerType()));
}

