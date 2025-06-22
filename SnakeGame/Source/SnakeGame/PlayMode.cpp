// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMode.h"
#include "SnakePlayerState.h"
#include "GameDataSubsystem.h"
#include "SnakeBotController.h"
#include "SnakePawn.h"
#include "StateMachineSubsystem.h"

void APlayMode::PostLogin(APlayerController* NewPlayer) {
	Super::PostLogin(NewPlayer);

	AddPlayerController(NewPlayer);
	AddLivingAgent();
	
	UE_LOG(LogTemp, Log, TEXT("PlayMode: Player %s logged in"), *NewPlayer->GetName());
}

APlayerController* APlayMode::SpawnPlayerController(ENetRole InRemoteRole, const FString& Options) {
	ESnakeControllerType ControllerType = DetermineControllerTypeForNextPlayer();

	// Log for sanity
	UE_LOG(LogTemp, Log, TEXT("Spawning Controller %d with type %d"), SpawnIncrementor, static_cast<uint8>(ControllerType));

	APlayerController* Result;

	if (ControllerType == ESnakeControllerType::AI)
		Result = GetWorld()->SpawnActor<ASnakeBotController>(ASnakeBotController::StaticClass());
	else
		Result = Super::SpawnPlayerController(InRemoteRole, Options);

	ASnakePlayerState* PlayerState = Result->GetPlayerState<ASnakePlayerState>();
	if(IsValid(PlayerState))
		PlayerState->SetControllerType(ControllerType);
	
	SpawnIncrementor++;
	return Result;
}

ESnakeControllerType APlayMode::DetermineControllerTypeForNextPlayer() const {
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

void APlayMode::AppleEaten(APlayerController* NewController) {
	ASnakePlayerState* SnakePlayerState = NewController->GetPlayerState<ASnakePlayerState>();
	SnakePlayerState->AddPoints(1);
	ASnakeWorld::Get(GetWorld())->SpawnApple();

	int Agent = PlayerControllers.Find(NewController) + 1;
	if (Agent == 1)
		Agent1Points++;
	else if(Agent == 2)
		Agent2Points++;

	UE_LOG(LogTemp, Log, TEXT("PlayMode: total points = %i"), Agent1Points + Agent2Points);

	
	ASnakeGameState* SnakeGameState = GetGameState<ASnakeGameState>();
	if(SnakeGameState->GetSnakeGameType() == ESnakeGameType::Team && Agent1Points + Agent2Points >= SnakeGameState->GetApplesPerLevel()) {
		OnPointsReached.Broadcast();
		GameOver();
	}
	else if(SnakeGameState->GetSnakeGameType() == ESnakeGameType::Battle && ( Agent1Points >= SnakeGameState->GetApplesPerLevel() || Agent2Points >= SnakeGameState->GetApplesPerLevel())) {
		OnPointsReached.Broadcast();
		GameOver();
	}
}

APlayerController* APlayMode::GetPlayerController(uint8 Index) {
	if(Index > PlayerControllers.Num())
		return nullptr;

	return PlayerControllers[Index];
}

void APlayMode::AddPlayerController(APlayerController* PlayerController) {
	PlayerControllers.AddUnique(PlayerController);
}

void APlayMode::RemovePlayerController(APlayerController* PlayerController) {
	if(HasPlayerController(PlayerController))
		PlayerControllers.Remove(PlayerController);
}

void APlayMode::GameOver() const {
	UStateMachineSubsystem* StateMachine = GetGameInstance()->GetSubsystem<UStateMachineSubsystem>();
	StateMachine->ChangeState(EGlobalState::Outro);
}
