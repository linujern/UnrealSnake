// Fill out your copyright notice in the Description page of Project Settings.


#include "SnakeWorld.h"


// Sets default values
ASnakeWorld::ASnakeWorld() {
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = SceneComponent;

	InstancedWalls = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedWall"));
	InstancedWalls->SetupAttachment(RootComponent);

	InstancedFloors = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("InstancedFloor"));
	InstancedFloors->SetupAttachment(RootComponent);

}

void ASnakeWorld::OnConstruction(const FTransform& Transform) {
	InstancedWalls->ClearInstances();
	InstancedFloors->ClearInstances();

	TArray<FString> Lines;
	FString FilePath = FPaths::ProjectDir() + TEXT("Data/Level1.txt");

	if (FFileHelper::LoadFileToStringArray(Lines, *FilePath)) {
		int32 NumRows = Lines.Num();
		int32 NumCols = 0;

		// Find the maximum line length (in case some lines are shorter)
		for (const FString& Line : Lines) {
			if (Line.Len() > NumCols) {
				NumCols = Line.Len();
			}
		}

		// Calculate the center offset
		FVector CenterOffset = FVector((NumRows * TileSize) / 2.f, (NumCols * TileSize) / 2.f, 0.f);

		for (int32 y = 0; y < NumRows; y++) {
			const FString& Line = Lines[y];

			for (int32 x = 0; x < Line.Len(); x++) {
				FVector TileLocation = FVector((NumRows - y) * TileSize, x * TileSize, 0.f) - CenterOffset;

				FTransform InstancePosition = FTransform(FRotator::ZeroRotator, TileLocation);

				if (Line[x] == '#') {
					InstancedWalls->AddInstance(InstancePosition);
				} else {
					InstancedFloors->AddInstance(InstancePosition);
				}
			}
		}
	}
}


// Called when the game starts or when spawned
void ASnakeWorld::BeginPlay() {
	Super::BeginPlay();
	
}

// Called every frame
void ASnakeWorld::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASnakeWorld::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

