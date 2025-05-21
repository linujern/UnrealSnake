// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMode.h"
#include "SnakePlayerState.h"
#include "GameDataSubsystem.h"
#include "SnakeBotController.h"

void APlayMode::PostLogin(APlayerController* NewPlayer) {
	Super::PostLogin(NewPlayer);

	AddPlayerContoller(NewPlayer);
	AddLivingAgent();
	
	UE_LOG(LogTemp, Log, TEXT("Player %s logged in"), *NewPlayer->GetName());
}

APlayerController* APlayMode::SpawnPlayerController(ENetRole InRemoteRole, const FString& Options) {
	ESnakeControllerType ControllerType = DetermineControllerTypeForNextPlayer();

	// Log for sanity
	UE_LOG(LogTemp, Log, TEXT("Spawning Controller %d with type %d"), SpawnIncrementor, static_cast<uint8>(ControllerType));

	APlayerController* Result = nullptr;

	if (ControllerType == ESnakeControllerType::AI)
		Result = GetWorld()->SpawnActor<ASnakeBotController>(ASnakeBotController::StaticClass());
	else
		Result = Super::SpawnPlayerController(InRemoteRole, Options);

	SpawnIncrementor++;
	return Result;
}

ESnakeControllerType APlayMode::DetermineControllerTypeForNextPlayer() {
	UGameDataSubsystem* GameData = GetGameInstance()->GetSubsystem<UGameDataSubsystem>();
	if (!IsValid(GameData))
		return ESnakeControllerType::None;

	switch (SpawnIncrementor) {
	case 0:
		if (GameData->GetAgent1() == ESnakeAgent1::Player && GameData->GetAgent2() == ESnakeAgent2::Player)
			return ESnakeControllerType::Keyboard1;
		else if (GameData->GetAgent1() == ESnakeAgent1::Bot)
			return ESnakeControllerType::AI;
		else
			return ESnakeControllerType::KeyboardSolo;
			
	case 1:
		if (GameData->GetAgent1() == ESnakeAgent1::Player && GameData->GetAgent2() == ESnakeAgent2::Player)
			return ESnakeControllerType::Keyboard2;
		else if (GameData->GetAgent2() == ESnakeAgent2::Bot)
			return ESnakeControllerType::AI;
		else
			return ESnakeControllerType::KeyboardSolo;
	default:
		return ESnakeControllerType::None;
	}
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
