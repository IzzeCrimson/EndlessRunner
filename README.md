# EndlessRunner
## Part 1
 
void APlatformSpawner::BeginPlay()
{
	Super::BeginPlay();

	Location = GetActorLocation();
	Rotation = GetActorRotation();
	SpawnPlatform();

	BoxCollider->OnComponentEndOverlap.AddDynamic(this, &APlatformSpawner::OnOverlapEnd);
}
