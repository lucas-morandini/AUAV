// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DroneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class AUAV_UE5_API UDroneComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDroneComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	// Speed of the drone
	UPROPERTY(EditAnywhere, Category = "Drone") float DroneSpeed;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// Sets the speed of the drone
	void SetDroneSpeed(float speed);
};
