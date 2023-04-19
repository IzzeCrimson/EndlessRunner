// Fill out your copyright notice in the Description page of Project Settings.


#include "PlatformSpawner.h"

// Sets default values
APlatformSpawner::APlatformSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BoxCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollider"));
	BoxCollider->SetupAttachment(RootComponent);
	BoxCollider->SetGenerateOverlapEvents(true);

}

// Called when the game starts or when spawned
void APlatformSpawner::BeginPlay()
{
	Super::BeginPlay();

	Location = GetActorLocation();
	Rotation = GetActorRotation();
	GetWorld()->SpawnActor(Platform, &Location, &Rotation);
	
	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &APlatformSpawner::OnOverlapEnd);
}

// Called every frame
void APlatformSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlatformSpawner::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("End of overlap"));
	GetWorld()->SpawnActor(Platform, &Location, &Rotation);
}

