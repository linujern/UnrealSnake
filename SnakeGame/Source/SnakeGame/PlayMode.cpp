// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMode.h"
#include "SnakePlayerState.h"

void APlayMode::PostLogin(APlayerController* NewPlayer) {
	Super::PostLogin(NewPlayer);

	AddPlayerContoller(NewPlayer);
	UE_LOG(LogTemp, Log, TEXT("Player %s logged in"), *NewPlayer->GetName());
}


void APlayMode::AppleEaten(AController* NewController) {
	ASnakePlayerState* SnakePlayerState = NewController->GetPlayerState<ASnakePlayerState>();
}

APlayerController* APlayMode::GetPlayerController(uint8 Index) {
	if(Index > PlayerControllers.Num())
		return nullptr;

	return PlayerControllers[Index];
}

void APlayMode::AddPlayerContoller(APlayerController* PlayerController) {
	PlayerControllers.AddUnique(PlayerController);
}

void APlayMode::RemovePlayerContoller(APlayerController* PlayerController) {
	if(HasPlayerController(PlayerController))
		PlayerControllers.Remove(PlayerController);
}


