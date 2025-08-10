 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class GADE7222_ICE_TASK_1_API APickup : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APickup();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//to be able to edit mesh in editor
	UPROPERTY(EditAnywhere)
	//root component
	USceneComponent* PickupRoot;

	//to be able to edit mesh in editor
	UPROPERTY(EditAnywhere)
	//static mesh for the pickup
	UStaticMeshComponent* MyMesh;

	//pickup box. enter box, pickup will be picked up
	//to be able to edit mesh in editor
	UPROPERTY(EditAnywhere)
	UShapeComponent* PickupBox;

	//function called when player enters the box
	UFUNCTION()
		void OnPlayerEnterPIckupBox(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

};
