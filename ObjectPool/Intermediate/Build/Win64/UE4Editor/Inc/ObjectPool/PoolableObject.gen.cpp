// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectPool/PoolableObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolableObject() {}
// Cross Module References
	OBJECTPOOL_API UClass* Z_Construct_UClass_APoolableObject_NoRegister();
	OBJECTPOOL_API UClass* Z_Construct_UClass_APoolableObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObjectPool();
// End Cross Module References
	void APoolableObject::StaticRegisterNativesAPoolableObject()
	{
	}
	UClass* Z_Construct_UClass_APoolableObject_NoRegister()
	{
		return APoolableObject::StaticClass();
	}
	struct Z_Construct_UClass_APoolableObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APoolableObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectPool,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APoolableObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PoolableObject.h" },
		{ "ModuleRelativePath", "PoolableObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APoolableObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APoolableObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APoolableObject_Statics::ClassParams = {
		&APoolableObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APoolableObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APoolableObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APoolableObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APoolableObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APoolableObject, 3571683354);
	template<> OBJECTPOOL_API UClass* StaticClass<APoolableObject>()
	{
		return APoolableObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APoolableObject(Z_Construct_UClass_APoolableObject, &APoolableObject::StaticClass, TEXT("/Script/ObjectPool"), TEXT("APoolableObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APoolableObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
