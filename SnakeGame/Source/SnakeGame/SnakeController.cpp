// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakeController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "GameDataSubsystem.h"
#include "SnakePlayerState.h"

void ASnakeController::BeginPlay() {
	Super::BeginPlay();

	PlayMode = static_cast<APlayMode*>(GetWorld()->GetAuthGameMode());
	if(!IsValid(PlayMode)) {
		UE_LOG(LogTemp, Error, TEXT("PlayMode is Invalid!"))
		return;
	}
	if(PlayMode->GetPlayerController(0) != this) {
		UE_LOG(LogTemp, Log, TEXT("\"%s\" is not player 1"), *GetPawn()->GetName())
		return;
	}
	
	ASnakePlayerState* SnakePlayerState = GetPlayerState<ASnakePlayerState>();
	if(!IsValid(SnakePlayerState)) {
		UE_LOG(LogTemp, Error, TEXT("SnakePlayerState Invalid!"))
		return;
	}
	IsSolo = GetWorld()->GetGameInstance()->GetSubsystem<UGameDataSubsystem>()->GetAgent2() != ESnakeAgent2::Player;
	
	if(GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, FString::Printf(TEXT("Is Solo is %s"), IsSolo ? TEXT("true") : TEXT("false")));

	GetPlayerPawns();
	InitializeInput();
}

void ASnakeController::InitializeInput() const {
	UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());

	if(!SubSystem) {
		UE_LOG(LogTemp, Error, TEXT("SnakeContoller: Invalid Subsystem!"))
		return;
	}

	if(!Keyboard1IMC || !Keyboard2IMC) {
		UE_LOG(LogTemp, Error, TEXT("MappingContext(s) not set!"))
		return;
	}
	SubSystem -> AddMappingContext(Keyboard1IMC, 0);
	SubSystem -> AddMappingContext(Keyboard2IMC, 0);
}

void ASnakeController::GetPlayerPawns() {
	SnakePlayer1 = GetPawn<ASnakePawn>();
	if(!IsValid(SnakePlayer1)) {
		UE_LOG(LogTemp, Error, TEXT("SnakePlayer1 not valid!"))
		return;
	}

	if(IsSolo) {
		SnakePlayer2 = SnakePlayer1;
		return;
	}

	if(PlayMode->CountControllers() < 2) {
		UE_LOG(LogTemp, Error, TEXT("Expected two controllers but only found one."))
		return;
	}
	
	SnakePlayer2 = PlayMode->GetPlayerController(1)->GetPawn<ASnakePawn>();
	if(!IsValid(SnakePlayer2))
		UE_LOG(LogTemp, Error, TEXT("SnakePlayer2 not valid!"))
}

void ASnakeController::SetupInputComponent() {
	Super::SetupInputComponent();

	UEnhancedInputComponent* Input = Cast<UEnhancedInputComponent>(InputComponent);
	if(!IsValid(Input)) {
		UE_LOG(LogTemp, Error, TEXT("Input not set!"))
		return;
	}

	// Set up keyboard 1 actions
	if(!IsValid(KB1LeftAction) || !IsValid(KB1UpAction) || !IsValid(KB1DownAction) || !IsValid(KB1RightAction)) {
		UE_LOG(LogTemp, Error, TEXT("KB1 Action(s) not set!"))
		return;
	}
	
	TMap<UInputAction*, ESnakeDirection> KB1Mappings = {
		{KB1LeftAction, ESnakeDirection::Left},
		{KB1DownAction, ESnakeDirection::Down},
		{KB1UpAction, ESnakeDirection::Up},
		{KB1RightAction, ESnakeDirection::Right}
	};
	BindKeyboardActions(Input, KB1Mappings, KeyboardContext::Keyboard1);

	// Set up keyboard 2 actions
	if(!IsValid(KB2LeftAction) || !IsValid(KB2UpAction) || !IsValid(KB2DownAction) || !IsValid(KB2RightAction)) {
		UE_LOG(LogTemp, Error, TEXT("KB2 Action(s) not set!"))
		return;
	}
	
	TMap<UInputAction*, ESnakeDirection> KB2Mappings = {
		{KB2LeftAction, ESnakeDirection::Left},
		{KB2DownAction, ESnakeDirection::Down},
		{KB2UpAction, ESnakeDirection::Up},
		{KB2RightAction, ESnakeDirection::Right}
	};
	
	if(IsSolo)
		BindKeyboardActions(Input, KB2Mappings, KeyboardContext::Keyboard1);
	
	else
		BindKeyboardActions(Input, KB2Mappings, KeyboardContext::Keyboard2);
}


void ASnakeController::BindKeyboardActions(UEnhancedInputComponent* Input, const TMap<UInputAction*, ESnakeDirection>& ActionMappings, KeyboardContext Keyboard) {
	for (const auto& Entry : ActionMappings) {
		if (IsValid(Entry.Key)) {
			
			if(Keyboard == KeyboardContext::Keyboard1)
				Input->BindAction(Entry.Key, ETriggerEvent::Triggered, this, &ASnakeController::HandlePlayer1DirectionInput, Entry.Value);
			
			else if(Keyboard == KeyboardContext::Keyboard2)
				Input->BindAction(Entry.Key, ETriggerEvent::Triggered, this, &ASnakeController::HandlePlayer2DirectionInput, Entry.Value);
		}
		
		else
			UE_LOG(LogTemp, Error, TEXT("Action not set!"));
	}
}

// Unified handlers
void ASnakeController::HandlePlayer1DirectionInput(const FInputActionValue& Value, ESnakeDirection Direction) {
	SnakePlayer1->QueueNewDirection(Direction);
}
void ASnakeController::HandlePlayer2DirectionInput(const FInputActionValue& Value, ESnakeDirection Direction) {
	SnakePlayer2->QueueNewDirection(Direction);
}
