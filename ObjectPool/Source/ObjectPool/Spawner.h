#pragma once

#include "ObjectPoolerComponent.h"

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

UCLASS()
class OBJECTPOOL_API ASpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	
	ASpawner();
	virtual void BeginPlay() override;

private : 
	FVector GetRandomPointInVolume();
	float GetLifespanVal();

	class UBoxComponent* SpawnVolume;

	UPROPERTY(EditAnywhere, Category = Spawner)
	UObjectPoolerComponent* ObjectPooler;

	UPROPERTY(EditAnywhere, Category = Spawner)
	float LifespanMin;

	UPROPERTY(EditAnywhere, Category = Spawner)
	float LifespanMax;

	UPROPERTY(EditAnywhere, Category = Spawner)
	float SpawnCooldown;

	UPROPERTY(EditAnywhere, Category = Spawner)
	bool SparkingMode;

	UPROPERTY(EditAnywhere, Category = Spawner)
	float SparklesVelocity;

	FTimerHandle SpawnCooldownTimer;

	void Spawn();


};
