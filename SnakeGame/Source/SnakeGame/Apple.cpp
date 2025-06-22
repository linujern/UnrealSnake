// Fill out your copyright notice in the Description page of Project Settings.


#include "Apple.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AApple::AApple()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

void AApple::NotifyActorBeginOverlap(AActor* OtherActor) {
	Super::NotifyActorBeginOverlap(OtherActor);

	SpawnVfx();
	SpawnSfx();
}


void AApple::SpawnVfx() const {
	if(!IsValid(VFX)) {
		UE_LOG(LogVisual, Warning, TEXT("APPLE: VFX is not set"));
		return;
	}
	
	UNiagaraFunctionLibrary::SpawnSystemAtLocation(
		GetWorld(), VFX, GetActorLocation(), FRotator(0, 0, 0),
		FVector(1, 1, 1), true, true, ENCPoolMethod::AutoRelease, true);
}

void AApple::SpawnSfx() const {
	if (!IsValid(SFX))
	{
		UE_LOG(LogAudioDebug, Warning, TEXT("APPLE: SFX is not set"));
		return;
	}
	UGameplayStatics::PlaySoundAtLocation(
		GetWorld(), SFX, GetActorLocation(), FRotator::ZeroRotator,
		1.f, 1.f, 0);
}
