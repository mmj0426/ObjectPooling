
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
			// 처음 생성될 때 PoolSize만큼의 오브젝트를 생성
			// 처음 생성된 오브젝트는 비활성으로 설정한 뒤 Pool에 넣음
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
