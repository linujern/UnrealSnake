// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "SnakeBodyPart.generated.h"

class ASnakePlayerState;

UCLASS()
class SNAKEGAME_API ASnakeBodyPart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnakeBodyPart();

	// Root of the blueprint
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* SceneComponent;

	// Collision
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USphereComponent* CollisionComponent;

	// Head of the snake
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMeshComponent* MeshComponent;
	
protected:
	UPROPERTY()
    ASnakeBodyPart* ChildBodyPart = nullptr;
  
    UPROPERTY()
    FVector NextPosition = FVector::ZeroVector;

	UPROPERTY()
	ASnakePlayerState* PlayerState = nullptr;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
private:
	UPROPERTY()
	FIntPoint OccupiedSpace;

	UFUNCTION()
	void UpdateOccupancy();
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void AddChildBodyPart(ASnakeBodyPart* InChildBodyPart);

	UFUNCTION()
	void Death();
	
	UFUNCTION()
	void SetNextPosition(const FVector& InPosition);
};
