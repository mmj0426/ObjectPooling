
#include "ObjectPoolerComponent.h"


UObjectPoolerComponent::UObjectPoolerComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	PoolSize = 200.f;
}

void UObjectPoolerComponent::BeginPlay()
{
	if (PooledObjectSubClass != nullptr)
	{
		UWorld* const World = GetWorld();
		if (World)
		{
			// ó�� ������ �� PoolSize��ŭ�� ������Ʈ�� ����
			// ó�� ������ ������Ʈ�� ��Ȱ������ ������ �� Pool�� ����
			for (int i = 0; i < PoolSize; i++)
			{
				APoolableObject* PoolableActor = World->SpawnActor<APoolableObject>(PooledObjectSubClass, FVector().ZeroVector, FRotator().ZeroRotator);
				PoolableActor->SetActive(false);
				Pool.Add(PoolableActor);
			}
		}
	}

	Super::BeginPlay();	
}

APoolableObject* UObjectPoolerComponent::GetPooledObject()
{
	for (APoolableObject* PoolableActor : Pool)
	{
		if (!PoolableActor->IsActive())
		{
			return PoolableActor;
		}
	}

	return nullptr;
}
