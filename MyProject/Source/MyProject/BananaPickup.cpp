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
	
}

// Called every frame
void ABananaPickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

