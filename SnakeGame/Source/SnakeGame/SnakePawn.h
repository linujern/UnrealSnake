// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SphereComponent.h"
#include "Definitions.h"
#include "SnakePawn.generated.h"

UCLASS()
class SNAKEGAME_API ASnakePawn : public APawn {
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnakePawn();

	// Root of the blueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;

	// Collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* CollisionComponent;

	// Head of the snake
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComponent;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip  = "Direction the snake will move in."))
	ESnakeDirection Direction = ESnakeDirection::None;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ToolTip  = "Speed of the snake in cm/second."))
	float Speed = 500.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ToolTip  = "The next Directions to use."))
	TArray<ESnakeDirection> DirectionQueue;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ToolTip = "Distance the snake has moved within a tile."))
	float MovedTileDistance = 0;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(meta = (ToolTip = "Changes the snake's direction in the center of tiles."))
	void UpdateDirection();

	UFUNCTION()
	void UpdateMovement(float DeltaTime);

	UFUNCTION(meta = (ToolTip = "Moves the snake based on UpdateMovement."))
	void MoveSnake(float Distance);

	UFUNCTION(meta = (ToolTip = "Rotates the snake visually."))
	void RotateSnake();

private:
	UPROPERTY(meta = (ToolTip = "Converts an ESnakeDirection to an FRotation."))
	TMap<ESnakeDirection, FRotator> RotationMap;

	UPROPERTY(meta = (ToolTip = "Converts an ESnakeDirection to an FVector3d."))
	TMap<ESnakeDirection, FVector3d> SpeedMap;

	UPROPERTY(meta = (ToolTip = "Finds the opposite Direction of an ESnakeDirection."))
	TMap<ESnakeDirection, ESnakeDirection> InverseMap;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void Jump();

	UFUNCTION(BlueprintCallable)
	void QueueNewDirection(ESnakeDirection InDirection);
};
