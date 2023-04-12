// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "EnhancedInputSubsystems.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorComponent"));
	

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	CurrentLocation = this->GetActorLocation();
	MovementSpeed = 200;
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	CurrentLocation.Y -= MovementSpeed * DeltaTime;
	SetActorLocation(CurrentLocation);
	
}

