// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"
#include "Engine/StaticMesh.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Floor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FloorComponent"));
	SetRootComponent(Floor);
	
	MovementSpeed = 200;
	CurrentLocation = this->GetActorLocation();

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	if (CurrentLocation != this->GetActorLocation())
	{
		CurrentLocation = this->GetActorLocation();
	}
	Bounds = AActor::GetComponentsBoundingBox();
	MaxVector = Bounds.Max;
	MinVector = Bounds.Min;

	UE_LOG(LogTemp, Warning, TEXT("The vector max value is: %s, The vector min value is: %s"), *MaxVector.ToString(), *MinVector.ToString());

}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	CurrentLocation.Y -= MovementSpeed * DeltaTime;
	SetActorLocation(CurrentLocation);

	
	
}

