// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPool/ObjectPoolGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectPoolGameModeBase() {}
// Cross Module References
	OBJECTPOOL_API UClass* Z_Construct_UClass_AObjectPoolGameModeBase_NoRegister();
	OBJECTPOOL_API UClass* Z_Construct_UClass_AObjectPoolGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ObjectPool();
// End Cross Module References
	void AObjectPoolGameModeBase::StaticRegisterNativesAObjectPoolGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AObjectPoolGameModeBase_NoRegister()
	{
		return AObjectPoolGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AObjectPoolGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObjectPoolGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObjectPoolGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ObjectPoolGameModeBase.h" },
		{ "ModuleRelativePath", "ObjectPoolGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObjectPoolGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObjectPoolGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObjectPoolGameModeBase_Statics::ClassParams = {
		&AObjectPoolGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AObjectPoolGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObjectPoolGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObjectPoolGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObjectPoolGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObjectPoolGameModeBase, 1561494833);
	template<> OBJECTPOOL_API UClass* StaticClass<AObjectPoolGameModeBase>()
	{
		return AObjectPoolGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObjectPoolGameModeBase(Z_Construct_UClass_AObjectPoolGameModeBase, &AObjectPoolGameModeBase::StaticClass, TEXT("/Script/ObjectPool"), TEXT("AObjectPoolGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObjectPoolGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
