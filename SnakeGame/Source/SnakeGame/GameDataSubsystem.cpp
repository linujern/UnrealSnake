// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDataSubsystem.h"

void UGameDataSubsystem::SetNumPlayers(int InNumPlayers) {
	NumPlayers = InNumPlayers;
}

void UGameDataSubsystem::SetNumBots(int InNumBots) {
	NumBots = InNumBots;
}
