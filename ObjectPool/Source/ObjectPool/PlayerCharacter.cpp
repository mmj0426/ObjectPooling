// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "Math/UnrealMathUtility.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("%f"), MoveDirection.X));

	if (FMath::Abs(DesiredLocation.Y - GetActorLocation().Y) > 50.f)
	{
		if (MoveDirection.X < 0.f)
		{
			AddMovementInput(FRotationMatrix(FRotator(0.f, GetControlRotation().Yaw, 0.f)).GetUnitAxis(EAxis::Y), -1.f);
		}
		else if (MoveDirection.X > 0.f)
		{
			AddMovementInput(FRotationMatrix(FRotator(0.f, GetControlRotation().Yaw, 0.f)).GetUnitAxis(EAxis::Y), 1.f);
		}
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	
	InputComponent->BindTouch(IE_Pressed, this, &APlayerCharacter::OnTouchBegin);
	InputComponent->BindTouch(IE_Repeat, this, &APlayerCharacter::OnTouchTick);
	InputComponent->BindTouch(IE_Released, this, &APlayerCharacter::OnTouchEnd);
}

void APlayerCharacter::OnTouchBegin(ETouchIndex::Type TouchIndex, FVector TouchLocation)
{
	FirstLocation = TouchLocation;

	DistanceFromBall = FMath::Abs(FirstLocation.Y - GetActorLocation().Y);
}

void APlayerCharacter::OnTouchTick(ETouchIndex::Type TouchIndex, FVector TouchLocation)
{
	CurrentLocation = TouchLocation;

	DistanceFromTouch = FMath::Abs(FirstLocation.Y - CurrentLocation.Y);

	MoveDirection = (CurrentLocation - FirstLocation).GetSafeNormal();

	DesiredLocation = FVector(GetActorLocation().X, GetActorLocation().Y + DistanceFromBall, GetActorLocation().Z);

	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("%f"), FMath::Abs(GetActorLocation().Y - DesiredLocation.Y)));
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Yellow, FString::Printf(TEXT("%f"), GetActorLocation().Y));


	
	// GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, FString::Printf(TEXT("%f"), Direction.X));

	//AddMovementInput(FRotationMatrix(FRotator(0.f, GetControlRotation().Yaw, 0.f)).GetUnitAxis(EAxis::Y), 1.f);
}

void APlayerCharacter::OnTouchEnd(ETouchIndex::Type TouchIndex, FVector TouchLocation)
{
	FirstLocation = FVector::ZeroVector;
	CurrentLocation = FVector::ZeroVector;
	MoveDirection = FVector::ZeroVector;
}

