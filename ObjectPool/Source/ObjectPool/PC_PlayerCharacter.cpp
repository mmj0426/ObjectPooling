// Fill out your copyright notice in the Description page of Project Settings.


#include "PC_PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraActor.h"

APC_PlayerCharacter::APC_PlayerCharacter()
{

}

void APC_PlayerCharacter::BeginPlay()
{
	//TArray<AActor*> cameraActors;

	//UGameplayStatics::GetAllActorsWithTag(GetWorld(), (TEXT("MainCamera")), cameraActors);

	//if (cameraActors.Num() > 0)
	//{
	//	auto mainCamera = Cast<ACameraActor>(cameraActors[0]);
	//	SetViewTargetWithBlend(mainCamera, 0.f);
	//}
}
