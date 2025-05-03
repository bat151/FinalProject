// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Character.h"
#include "BananaPickup.generated.h"

UCLASS()
class MYPROJECT_API ABananaPickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABananaPickup();

	// give one point when banana picked up
	UPROPERTY(EditAnywhere, Category = "Banana")
	float Score = 1;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// reference to mesh
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* _StaticMesh;

	UFUNCTION()
	void OnBananaBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
