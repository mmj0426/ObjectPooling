// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTPOOL_ObjectPoolerComponent_generated_h
#error "ObjectPoolerComponent.generated.h already included, missing '#pragma once' in ObjectPoolerComponent.h"
#endif
#define OBJECTPOOL_ObjectPoolerComponent_generated_h

#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_SPARSE_DATA
#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_RPC_WRAPPERS
#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUObjectPoolerComponent(); \
	friend struct Z_Construct_UClass_UObjectPoolerComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolerComponent)


#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUObjectPoolerComponent(); \
	friend struct Z_Construct_UClass_UObjectPoolerComponent_Statics; \
public: \
	DECLARE_CLASS(UObjectPoolerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(UObjectPoolerComponent)


#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectPoolerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectPoolerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPoolerComponent(UObjectPoolerComponent&&); \
	NO_API UObjectPoolerComponent(const UObjectPoolerComponent&); \
public:


#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectPoolerComponent(UObjectPoolerComponent&&); \
	NO_API UObjectPoolerComponent(const UObjectPoolerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectPoolerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectPoolerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UObjectPoolerComponent)


#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PooledObjectSubClass() { return STRUCT_OFFSET(UObjectPoolerComponent, PooledObjectSubClass); } \
	FORCEINLINE static uint32 __PPO__PoolSize() { return STRUCT_OFFSET(UObjectPoolerComponent, PoolSize); }


#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_10_PROLOG
#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_RPC_WRAPPERS \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_INCLASS \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_INCLASS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTPOOL_API UClass* StaticClass<class UObjectPoolerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectPool_Source_ObjectPool_ObjectPoolerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
