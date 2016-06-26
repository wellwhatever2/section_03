// Fill out your copyright notice in the Description page of Project Settings.

#include "Section_03.h"
#include "OpenDoor.h"
#include <iostream>
#include <sstream>

// Sets default values for this component's properties
UOpenDoor::UOpenDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	AActor* owner = GetOwner();

#if 0
	if (owner)
	{
		auto rotation = owner->GetTransform().GetRotation().X;

		std::stringstream ss;
		ss << rotation;
		FString fs(ss.str().c_str());
		UE_LOG(LogTemp, Verbose, TEXT("rotation is %s"), *fs);
		UE_LOG(LogTemp, Verbose, TEXT("rotation is %f"), rotation);
	
	}
#endif 
}


// Called when the game starts
void UOpenDoor::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UOpenDoor::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

