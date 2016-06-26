// Fill out your copyright notice in the Description page of Project Settings.


#include "Section_03.h"
#include "PositionReporter.h"
#include <sstream>

// Sets default values for this component's properties
UPositionReporter::UPositionReporter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	bWantsBeginPlay = true;
	PrimaryComponentTick.bCanEverTick = true;

	// ...
	
}


// Called when the game starts
void UPositionReporter::BeginPlay()
{
	Super::BeginPlay();

	// ...
	AActor* owner = GetOwner();
	FString name = owner->GetName();
	FVector vec = owner->GetActorLocation();
	FVector translate = owner->GetTransform().GetTranslation();
	 
	std::stringstream ss;
	ss << "vector " << vec.X << "," << vec.Y << "," << vec.Z 
		<< " translate " << translate.X << "," << translate.Y << "," << translate.Z;
	FString fs(ss.str().c_str());
	UE_LOG(LogTemp, Warning, TEXT("%s is at %s"), *name, *fs );
}


// Called every frame
void UPositionReporter::TickComponent( float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction )
{
	Super::TickComponent( DeltaTime, TickType, ThisTickFunction );

	// ...
}

