// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeWorld.h"


// Sets default values
ASnakeWorld::ASnakeWorld()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	InstancedWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedWall"));
	InstancedWalls->SetupAttachment(RootComponent);

}

void ASnakeWorld::OnConstruction(const FTransform& Transform) {
	InstancedWalls->ClearInstances();

	TArray<FString> Lines;
	FString FilePath = FPaths::ProjectDir() + TEXT("Data/Level1.txt");

	if (FFileHelper::LoadFileToStringArray(Lines, *FilePath)) {
		int y = 0;
		for (const FString& line : Lines) {
			for (int x = 0; x < line.Len(); x++) {
				if (line[x] == '#') {
					InstancedWalls->AddInstance(FTransform(FRotator::ZeroRotator, FVector(x * 100, y * 100, 0.f)));
				}
			}
			y++;
		} 
	}
}


// Called when the game starts or when spawned
void ASnakeWorld::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnakeWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASnakeWorld::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

