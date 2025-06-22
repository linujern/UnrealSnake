// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/SphereComponent.h"
#include "Apple.h"
#include "Definitions.h"
#include "SnakePawn.generated.h"

class ASnakeBodyPart;
class ASnakePlayerState;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDeath, APawn*, DeadPawn);

UCLASS()
class SNAKEGAME_API ASnakePawn : public APawn {
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ASnakePawn();

	UPROPERTY(BlueprintAssignable)
	FOnDeath OnDeath;

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

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ASnakeBodyPart> BodyPartClass;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ToolTip  = "The next Directions to use."))
	TArray<ESnakeDirection> DirectionQueue;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ToolTip = "Distance the snake has moved within a tile."))
	float MovedTileDistance = 0;

	UPROPERTY()
	ASnakeBodyPart* ChildBodyPart = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	ASnakePlayerState* SnakePlayerState;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(meta = (ToolTip = "Changes the snake's direction in the center of tiles."))
	void UpdateDirection();

	UFUNCTION()
	void UpdateMovement(float DeltaTime);

	UFUNCTION(meta = (ToolTip = "Moves the snake based on UpdateMovement."))
	void MoveSnake(float Distance);

	UFUNCTION(meta = (ToolTip = "Rotates the snake visually."))
	void RotateSnake(ESnakeDirection InDirection);

	UFUNCTION()
	void AteApple();

private:
	UPROPERTY(meta = (ToolTip = "Converts an ESnakeDirection to an FRotation."))
	TMap<ESnakeDirection, FRotator> RotationMap;

	UPROPERTY(meta = (ToolTip = "Converts an ESnakeDirection to an FVector3d."))
	TMap<ESnakeDirection, FVector3d> SpeedMap;

	UPROPERTY(meta = (ToolTip = "Finds the opposite Direction of an ESnakeDirection."))
	TMap<ESnakeDirection, ESnakeDirection> InverseMap;

	UPROPERTY()
	FIntPoint OccupiedSpace;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCenterTileSignature);

	UFUNCTION()
	void UpdateOccupancy();

	UFUNCTION()
	void Death();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PossessedBy(AController* NewController) override;

	UFUNCTION(BlueprintCallable)
	void QueueNewDirection(ESnakeDirection InDirection);

	UFUNCTION(blueprintCallable)
	void OnCollision(AActor* OtherActor);

	UPROPERTY(BlueprintAssignable)
	FCenterTileSignature OnCenterTileReached;
};
