// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDataSubsystem.h"

void UGameDataSubsystem::SaveGameData() {
	UWorld* World = GetWorld();
	if (!IsValid(World)) {
		UE_LOG(LogTemp, Error, "WORLD IS NOT VALID")
		return;
	}
	
	ASnakeGameState* SnakeGameState = Cast<ASnakeGameState>(World->GetGameState());
	if (!IsValid(SnakeGameState)) {
	    UE_LOG(LogTemp, Error, "SNAKEGAMESTATE IS NOT VALID");
	    return;
	}
}
