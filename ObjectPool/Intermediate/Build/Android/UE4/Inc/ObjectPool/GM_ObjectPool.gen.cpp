// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPool/GM_ObjectPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_ObjectPool() {}
// Cross Module References
	OBJECTPOOL_API UClass* Z_Construct_UClass_AGM_ObjectPool_NoRegister();
	OBJECTPOOL_API UClass* Z_Construct_UClass_AGM_ObjectPool();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_ObjectPool();
// End Cross Module References
	void AGM_ObjectPool::StaticRegisterNativesAGM_ObjectPool()
	{
	}
	UClass* Z_Construct_UClass_AGM_ObjectPool_NoRegister()
	{
		return AGM_ObjectPool::StaticClass();
	}
	struct Z_Construct_UClass_AGM_ObjectPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_ObjectPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_ObjectPool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GM_ObjectPool.h" },
		{ "ModuleRelativePath", "GM_ObjectPool.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_ObjectPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_ObjectPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGM_ObjectPool_Statics::ClassParams = {
		&AGM_ObjectPool::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGM_ObjectPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGM_ObjectPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGM_ObjectPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGM_ObjectPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGM_ObjectPool, 2622823477);
	template<> OBJECTPOOL_API UClass* StaticClass<AGM_ObjectPool>()
	{
		return AGM_ObjectPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGM_ObjectPool(Z_Construct_UClass_AGM_ObjectPool, &AGM_ObjectPool::StaticClass, TEXT("/Script/ObjectPool"), TEXT("AGM_ObjectPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_ObjectPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
