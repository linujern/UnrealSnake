// Fill out your copyright notice in the Description page of Project Settings.

#include "SnakePawn.h"

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

// Called every frame
void ASnakePawn::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	
	UpdateMovement(DeltaTime);
}

void ASnakePawn::UpdateMovement(float DeltaTime) {

	float TotalMoveDistance = Speed * DeltaTime;
	float MoveDistance = TotalMoveDistance;

	while (MovedTileDistance + MoveDistance >= TileSize) {
		MoveDistance = TileSize - MovedTileDistance;

		MoveSnake(MoveDistance);
		UpdateDirection();

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

void ASnakePawn::RotateSnake() {
	const FRotator Rotation = RotationMap[Direction];
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
	
	RotateSnake();
}

void ASnakePawn::QueueNewDirection(ESnakeDirection InDirection) {
	if(DirectionQueue.Num() > 3) // to prevent overload of inputs
		return;
	
	DirectionQueue.Add(InDirection);
}

void ASnakePawn::Jump() {
	
}


// Called to bind functionality to input
void ASnakePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

