// Fill out your copyright notice in the Description page of Project Settings.


#include "BananaPickup.h"

// Sets default values
ABananaPickup::ABananaPickup()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABananaPickup::BeginPlay()
{
	Super::BeginPlay();
	
	// registar overlap
	if (HasAuthority()) {
		OnActorBeginOverlap.AddDynamic(this, &ABananaPickup::OnBananaBeginOverlap);
	}
	
}

// Called every frame and make banana rotate
void ABananaPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FQuat rotQuat = FQuat(FRotator(0.0f, 300.0f * DeltaTime, 0.0f));
	AddActorLocalRotation(rotQuat);

}

// disable collsion and hide banana
void ABananaPickup::OnBananaBeginOverlap(AActor* OverlappedActor, AActor* OtherActor) {
	SetActorEnableCollision(false);
	SetActorHiddenInGame(true);
}

