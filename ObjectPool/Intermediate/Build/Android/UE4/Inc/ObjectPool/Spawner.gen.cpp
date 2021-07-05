// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPool/Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner() {}
// Cross Module References
	OBJECTPOOL_API UClass* Z_Construct_UClass_ASpawner_NoRegister();
	OBJECTPOOL_API UClass* Z_Construct_UClass_ASpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObjectPool();
	OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolerComponent_NoRegister();
// End Cross Module References
	void ASpawner::StaticRegisterNativesASpawner()
	{
	}
	UClass* Z_Construct_UClass_ASpawner_NoRegister()
	{
		return ASpawner::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SparklesVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SparklesVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SparkingMode_MetaData[];
#endif
		static void NewProp_SparkingMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SparkingMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifespanMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifespanMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LifespanMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LifespanMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectPooler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectPooler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spawner.h" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SparklesVelocity_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SparklesVelocity = { "SparklesVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, SparklesVelocity), METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_SparklesVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SparklesVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	void Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode_SetBit(void* Obj)
	{
		((ASpawner*)Obj)->SparkingMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode = { "SparkingMode", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawner), &Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldown_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldown = { "SpawnCooldown", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, SpawnCooldown), METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMax_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMax = { "LifespanMax", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, LifespanMax), METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMin_MetaData[] = {
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMin = { "LifespanMin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, LifespanMin), METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_Statics::NewProp_ObjectPooler_MetaData[] = {
		{ "Category", "Spawner" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawner_Statics::NewProp_ObjectPooler = { "ObjectPooler", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawner, ObjectPooler), Z_Construct_UClass_UObjectPoolerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::NewProp_ObjectPooler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::NewProp_ObjectPooler_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SparklesVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SparkingMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_SpawnCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_LifespanMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_Statics::NewProp_ObjectPooler,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_Statics::ClassParams = {
		&ASpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawner, 2536487982);
	template<> OBJECTPOOL_API UClass* StaticClass<ASpawner>()
	{
		return ASpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawner(Z_Construct_UClass_ASpawner, &ASpawner::StaticClass, TEXT("/Script/ObjectPool"), TEXT("ASpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
