// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDataSubsystem.h"

void UGameDataSubsystem::StoreGameData() {
	ASnakeGameState* SnakeGameState = WorldToGameState("SaveGameData");

	if(!IsValid(SnakeGameState))
		return;

	StoredGameData.GameType			= SnakeGameState->GetSnakeGameType();
	StoredGameData.Agent1			= SnakeGameState->GetSnakeAgent1();
	StoredGameData.Agent2			= SnakeGameState->GetSnakeAgent2();
	StoredGameData.ActiveApples		= SnakeGameState->GetActiveApples();
	StoredGameData.ApplesPerLevel	= SnakeGameState->GetApplesPerLevel();
	StoredGameData.LevelNumber		= SnakeGameState->GetLevelNumber();
}

void UGameDataSubsystem::LoadGameData() {
	ASnakeGameState* SnakeGameState = WorldToGameState("LoadGameData");

	if(!IsValid(SnakeGameState))
		return;
	
	SnakeGameState->SetSnakeGameType	(StoredGameData.GameType);
	SnakeGameState->SetSnakeAgent1		(StoredGameData.Agent1);
	SnakeGameState->SetSnakeAgent2		(StoredGameData.Agent2);
	SnakeGameState->SetActiveApples		(StoredGameData.ActiveApples);
	SnakeGameState->SetApplesPerLevel	(StoredGameData.ApplesPerLevel);
	SnakeGameState->SetLevelNumber		(StoredGameData.LevelNumber);
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
