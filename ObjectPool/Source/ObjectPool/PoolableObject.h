// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PoolableObject.generated.h"

UCLASS()
class OBJECTPOOL_API APoolableObject : public AActor
{
	GENERATED_BODY()
	
public:

	APoolableObject();

protected:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetLifeSpan(float newLifeSpan) override;

	FORCEINLINE class UStaticMeshComponent* GetMesh() const { return StaticMesh; }

	void SetActive(bool newActive);
	bool IsActive();

	void SetVelocity(float newVelocity);
	void SetDirection(FVector newDirection);

protected:

	class UStaticMeshComponent* StaticMesh;
	float Lifespan;
	FTimerHandle LifespanTimer;
	bool Active;
	float Velocity;
	FVector Direction;

	void Deactivate();


};
