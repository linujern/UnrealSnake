// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBotController.h"
#include "SnakePawn.h"

void ASnakeBotController::OnPossess(APawn* InPawn) {
	Super::OnPossess(InPawn);

	SnakePawn = Cast<ASnakePawn>(InPawn);
}

void ASnakeBotController::Tick(float DeltaSeconds) {
	Super::Tick(DeltaSeconds);
	if(!IsValid(SnakePawn))
		return;
	
	SnakePawn->QueueNewDirection(ESnakeDirection::Right);
}

