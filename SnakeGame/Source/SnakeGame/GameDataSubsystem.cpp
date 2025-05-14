// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDataSubsystem.h"

void UGameDataSubsystem::SaveGameData() {
	ASnakeGameState* SnakeGameState = WorldToGameState("SaveGameData");

	if(!IsValid(SnakeGameState))
		return;

	StoredGameData.SnakeGameType = SnakeGameState->GetSnakeGameType();
}

void UGameDataSubsystem::LoadGameData() {
	ASnakeGameState* SnakeGameState = WorldToGameState("LoadGameData");

	if(!IsValid(SnakeGameState))
		return;
	
	SnakeGameState->SetSnakeGameType(StoredGameData.SnakeGameType);
}

ASnakeGameState* UGameDataSubsystem::WorldToGameState(FString CallFunctionName) {
	UWorld* World = GetWorld();

	if (!IsValid(World)) {
		UE_LOG(LogTemp, Error, TEXT("UGameDataSubsystem::%s - World is a nullptr"), *CallFunctionName);
		return nullptr;
	}

	ASnakeGameState* SnakeGameState = Cast<ASnakeGameState>(World->GetGameState());
	
	if (!IsValid(SnakeGameState)) {
		UE_LOG(LogTemp, Error, TEXT("UGameDataSubsystem::%s - SnakeGameState is a nullptr"), *CallFunctionName);
		return nullptr;
	}
	
	return SnakeGameState;
}
