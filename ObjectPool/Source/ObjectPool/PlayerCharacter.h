// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class OBJECTPOOL_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnTouchBegin(ETouchIndex::Type TouchIndex, FVector TouchLocation);
	void OnTouchTick(ETouchIndex::Type TouchIndex, FVector TouchLocation);
	void OnTouchEnd(ETouchIndex::Type TouchIndex, FVector TouchLocation);
	 
	FVector FirstLocation;
	FVector CurrentLocation;
	FVector DesiredLocation;

	FVector MoveDirection;


	float DistanceFromBall;
	float DistanceFromTouch;

};
