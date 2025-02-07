// Fill out your copyright notice in the Description page of Project Settings.


#include "DroneComponent.h"


// Sets default values for this component's properties
UDroneComponent::UDroneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	UDroneComponent::DroneSpeed = 100.0f;
	
	// ...
}


// Called when the game starts
void UDroneComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UDroneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDroneComponent::SetDroneSpeed(float speed)
{
	DroneSpeed = speed;
}