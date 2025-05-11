// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateSubsystem.h"

void UGameStateSubsystem::ChangeState(EGameState InNewState) {
	if(GameState == InNewState)
		return;

	EGameState OldState = GameState;
	GameState = InNewState;

	OnGameStateChanged.Broadcast(OldState, GameState);
}
