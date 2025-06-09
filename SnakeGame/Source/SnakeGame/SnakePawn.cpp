// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakePawn.h"

#include "PlayMode.h"
#include "SnakePlayerState.h"
#include "SnakeBodyPart.h"
#include "SnakeWorld.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASnakePawn::ASnakePawn() {
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
	MeshComponent->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ASnakePawn::BeginPlay() {
	Super::BeginPlay();
	
	RotationMap = CreateRotationMap();
	SpeedMap = CreateSpeedMap();
	InverseMap = CreateInverseMap();
}

void ASnakePawn::PossessedBy(AController* NewController) {
	SnakePlayerState = NewController->GetPlayerState<ASnakePlayerState>();

	if (!IsValid(SnakePlayerState))
		UE_LOG(LogTemp, Error, TEXT("ASnakePawn::PossessedBy - SnakePlayerState not valid! \n"));
}

// Called every frame
void ASnakePawn::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if(!IsValid(SnakePlayerState))
		return;
	
	UpdateMovement(DeltaTime);
}

void ASnakePawn::UpdateMovement(float DeltaTime) {
	float Speed = SnakePlayerState->GetSnakeSpeed();
	
	float TotalMoveDistance = Speed * DeltaTime;
	float MoveDistance = TotalMoveDistance;

	while (MovedTileDistance + MoveDistance >= TileSize) {
		MoveDistance = TileSize - MovedTileDistance;

		MoveSnake(MoveDistance);
		OnCenterTileReached.Broadcast();
		UpdateOccupancy();
		UpdateDirection();
		
		if (IsValid(ChildBodyPart))
			ChildBodyPart->SetNextPosition(GetActorLocation());

		TotalMoveDistance -= MoveDistance;
		MoveDistance = TotalMoveDistance;

		MovedTileDistance -= TileSize;
	}
	if (MoveDistance > 0.0f)
		MoveSnake(MoveDistance);
}

void ASnakePawn::MoveSnake(float Distance) {
	const FVector Position = GetActorLocation();

	const FVector3d MoveVector = Distance * SpeedMap[Direction];
	
	SetActorLocation(Position + MoveVector);
	MovedTileDistance += Distance;
}

void ASnakePawn::RotateSnake(ESnakeDirection InDirection) {
	const FRotator Rotation = RotationMap[InDirection];
	MeshComponent->SetWorldRotation(Rotation);
}

void ASnakePawn::UpdateDirection() {
	if(DirectionQueue.IsEmpty())
		return;

	// if an illegal input was made, remove it and try the next one.
	if (Direction == DirectionQueue[0] || InverseMap[DirectionQueue[0]] == Direction) {
		DirectionQueue.RemoveAt(0);
		UpdateDirection();
		return;
	}

	// update to the new direction
	Direction = DirectionQueue[0];
	DirectionQueue.RemoveAt(0);
	
	RotateSnake(Direction);
}

void ASnakePawn::QueueNewDirection(ESnakeDirection InDirection) {
	if(DirectionQueue.Num() > 3) // to prevent overload of inputs
		return;
	
	DirectionQueue.Add(InDirection);
}

void ASnakePawn::OnCollision(AActor* OtherActor) {
	if (Cast<AApple>(OtherActor) != nullptr) {
		AteApple();
		OtherActor->Destroy();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("COLLISION with %s at %f seconds. \n"), *OtherActor->GetName(), GetWorld()->GetTimeSeconds());
	}
}

void ASnakePawn::UpdateOccupancy() {
	ASnakeWorld* SnakeWorld = ASnakeWorld::Get(GetWorld());
	FIntPoint NewGridCoords = SnakeWorld->GetGridCoordsFromWorldLocation(GetActorLocation());

	if (NewGridCoords != OccupiedSpace) {
		SnakeWorld->UnmarkTileAsOccupied(OccupiedSpace);	// Unmark old
		SnakeWorld->MarkTileAsOccupied(NewGridCoords);		// Mark new
		OccupiedSpace = NewGridCoords;						// Update cache
	}
}

void ASnakePawn::AteApple() {
	const APlayMode* PlayMode = Cast<APlayMode>(UGameplayStatics::GetGameMode(GetWorld()));
	PlayMode->AppleEaten(GetController());
	
	FActorSpawnParameters SpawnParameters;
	SpawnParameters.Instigator = GetInstigator();

	bool HasChild = IsValid(ChildBodyPart);

	AActor* Target = this;
	if(HasChild)
		Target = ChildBodyPart;
	
	ASnakeBodyPart* BodyPart = GetWorld()->SpawnActor<ASnakeBodyPart>(BodyPartClass, Target->GetActorLocation(), GetActorRotation(), SpawnParameters);
	
	if(HasChild) 
		ChildBodyPart->AddChildBodyPart(BodyPart);
	else {
		ChildBodyPart = BodyPart;
		BodyPart->CollisionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);	
	}
}

// Called to bind functionality to input
void ASnakePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
