// Fill out your copyright notice in the Description page of Project Settings.


#include "GM_ObjectPool.h"
#include "PlayerCharacter.h"
#include "PC_PlayerCharacter.h"

AGM_ObjectPool::AGM_ObjectPool()
{
	static ConstructorHelpers::FClassFinder<ACharacter>
	PlayerCharacter(TEXT("/Game/Blueprints/BP_PlayerCharacter.BP_PlayerCharacter_C"));

	DefaultPawnClass = PlayerCharacter.Class;

	PlayerControllerClass = APC_PlayerCharacter::StaticClass();

}
