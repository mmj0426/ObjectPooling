// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPool/ObjectPoolerComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolerComponent() {}
// Cross Module References
	OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolerComponent_NoRegister();
	OBJECTPOOL_API UClass* Z_Construct_UClass_UObjectPoolerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ObjectPool();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	OBJECTPOOL_API UClass* Z_Construct_UClass_APoolableObject_NoRegister();
// End Cross Module References
	void UObjectPoolerComponent::StaticRegisterNativesUObjectPoolerComponent()
	{
	}
	UClass* Z_Construct_UClass_UObjectPoolerComponent_NoRegister()
	{
		return UObjectPoolerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UObjectPoolerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PoolSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PoolSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PooledObjectSubClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PooledObjectSubClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectPoolerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ObjectPoolerComponent.h" },
		{ "ModuleRelativePath", "ObjectPoolerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PoolSize_MetaData[] = {
		{ "Category", "ObjectPooler" },
		{ "ModuleRelativePath", "ObjectPoolerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PoolSize = { "PoolSize", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolerComponent, PoolSize), METADATA_PARAMS(Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PoolSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PoolSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PooledObjectSubClass_MetaData[] = {
		{ "Category", "ObjectPooler" },
		{ "ModuleRelativePath", "ObjectPoolerComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PooledObjectSubClass = { "PooledObjectSubClass", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UObjectPoolerComponent, PooledObjectSubClass), Z_Construct_UClass_APoolableObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PooledObjectSubClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PooledObjectSubClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectPoolerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PoolSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectPoolerComponent_Statics::NewProp_PooledObjectSubClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectPoolerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectPoolerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectPoolerComponent_Statics::ClassParams = {
		&UObjectPoolerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectPoolerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectPoolerComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectPoolerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectPoolerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectPoolerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectPoolerComponent, 36477372);
	template<> OBJECTPOOL_API UClass* StaticClass<UObjectPoolerComponent>()
	{
		return UObjectPoolerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectPoolerComponent(Z_Construct_UClass_UObjectPoolerComponent, &UObjectPoolerComponent::StaticClass, TEXT("/Script/ObjectPool"), TEXT("UObjectPoolerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectPoolerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
