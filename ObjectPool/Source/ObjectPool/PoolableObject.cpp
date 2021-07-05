// Fill out your copyright notice in the Description page of Project Settings.


#include "PoolableObject.h"


APoolableObject::APoolableObject()
{
	PrimaryActorTick.bCanEverTick = true;

	Lifespan = 5.f;
	Velocity = 100.f;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh>
		SphereMesh(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereMesh.Succeeded())
	{
		StaticMesh->SetStaticMesh(SphereMesh.Object);
		StaticMesh->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
		StaticMesh->SetWorldScale3D(FVector(0.5f));
		StaticMesh->SetSimulatePhysics(false);
	}

	RootComponent = StaticMesh;
	SetActorEnableCollision(false);

}

void APoolableObject::BeginPlay()
{
	Super::BeginPlay();

}

void APoolableObject::Tick(float DeltaTime)
{
	SetActorLocation(GetActorLocation() * Velocity * Direction * DeltaTime);
	Super::Tick(DeltaTime);

}

void APoolableObject::SetLifeSpan(float newLifeSpan)
{
	Lifespan = newLifeSpan;
}

void APoolableObject::SetActive(bool newActive)
{
	Active = newActive;
	SetActorHiddenInGame(!newActive);
}

bool APoolableObject::IsActive()
{
	return Active;
}

void APoolableObject::SetVelocity(float newVelocity)
{
	Velocity = newVelocity;
}

void APoolableObject::SetDirection(FVector newDirection)
{
	Direction = newDirection;
}

void APoolableObject::Deactivate()
{
	SetActive(false);
}

