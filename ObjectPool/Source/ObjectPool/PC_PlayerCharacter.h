// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PC_PlayerCharacter.generated.h"

/**
 * 
 */
UCLASS()
class OBJECTPOOL_API APC_PlayerCharacter : public APlayerController
{
	GENERATED_BODY()

public : 
	APC_PlayerCharacter();
	virtual void BeginPlay() override;
	
};
