#pragma once

#include "PoolableObject.h"

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ObjectPoolerComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class OBJECTPOOL_API UObjectPoolerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UObjectPoolerComponent();

	virtual void BeginPlay() override;

	APoolableObject* GetPooledObject();

private : 

	UPROPERTY(EditAnywhere, Category = ObjectPooler)
	TSubclassOf<class APoolableObject> PooledObjectSubClass;

	UPROPERTY(EditAnywhere, Category = ObjectPooler)
	int PoolSize;

	TArray<APoolableObject*> Pool;
		
};
