// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeBodyPart.h"

// Sets default values
ASnakeBodyPart::ASnakeBodyPart() {
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionComponent"));
	CollisionComponent->SetupAttachment(RootComponent);

	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Head"));
	MeshComponent->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void ASnakeBodyPart::BeginPlay() {
	Super::BeginPlay();
	
}

// Called every frame
void ASnakeBodyPart::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	if (NextPosition != FVector::ZeroVector) {
		FVector Position = GetActorLocation();
		FVector Forward = (NextPosition - Position).GetSafeNormal();

		Position += Forward * DeltaTime * Speed;

		SetActorLocation(Position);
	}
}

void ASnakeBodyPart::AddChildBodyPart(ASnakeBodyPart* InChildBodyPart) {
	if (IsValid(ChildBodyPart))
		ChildBodyPart->AddChildBodyPart(InChildBodyPart);
	else {
		ChildBodyPart = InChildBodyPart;
		ChildBodyPart->SetActorLocation(GetActorLocation());
	}
		
}


void ASnakeBodyPart::SetNextPosition(const FVector& InPosition) {
	if (IsValid(ChildBodyPart))
		ChildBodyPart->SetNextPosition(NextPosition);
	
	NextPosition = InPosition;
}

