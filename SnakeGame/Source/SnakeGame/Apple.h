// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraSystem.h"
#include "Apple.generated.h"

UCLASS()
class SNAKEGAME_API AApple : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AApple();

	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UNiagaraSystem> VFX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USoundBase> SFX;

	UFUNCTION(BlueprintCallable)
	void SpawnVfx() const;
	UFUNCTION(BlueprintCallable)
	void SpawnSfx() const;
};
