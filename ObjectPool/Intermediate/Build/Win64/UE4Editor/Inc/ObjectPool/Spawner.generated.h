// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTPOOL_Spawner_generated_h
#error "Spawner.generated.h already included, missing '#pragma once' in Spawner.h"
#endif
#define OBJECTPOOL_Spawner_generated_h

#define ObjectPool_Source_ObjectPool_Spawner_h_12_SPARSE_DATA
#define ObjectPool_Source_ObjectPool_Spawner_h_12_RPC_WRAPPERS
#define ObjectPool_Source_ObjectPool_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectPool_Source_ObjectPool_Spawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define ObjectPool_Source_ObjectPool_Spawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpawner(); \
	friend struct Z_Construct_UClass_ASpawner_Statics; \
public: \
	DECLARE_CLASS(ASpawner, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(ASpawner)


#define ObjectPool_Source_ObjectPool_Spawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public:


#define ObjectPool_Source_ObjectPool_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpawner(ASpawner&&); \
	NO_API ASpawner(const ASpawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpawner)


#define ObjectPool_Source_ObjectPool_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectPooler() { return STRUCT_OFFSET(ASpawner, ObjectPooler); } \
	FORCEINLINE static uint32 __PPO__LifespanMin() { return STRUCT_OFFSET(ASpawner, LifespanMin); } \
	FORCEINLINE static uint32 __PPO__LifespanMax() { return STRUCT_OFFSET(ASpawner, LifespanMax); } \
	FORCEINLINE static uint32 __PPO__SpawnCooldown() { return STRUCT_OFFSET(ASpawner, SpawnCooldown); } \
	FORCEINLINE static uint32 __PPO__SparkingMode() { return STRUCT_OFFSET(ASpawner, SparkingMode); } \
	FORCEINLINE static uint32 __PPO__SparklesVelocity() { return STRUCT_OFFSET(ASpawner, SparklesVelocity); }


#define ObjectPool_Source_ObjectPool_Spawner_h_9_PROLOG
#define ObjectPool_Source_ObjectPool_Spawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_Spawner_h_12_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_Spawner_h_12_RPC_WRAPPERS \
	ObjectPool_Source_ObjectPool_Spawner_h_12_INCLASS \
	ObjectPool_Source_ObjectPool_Spawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectPool_Source_ObjectPool_Spawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_Spawner_h_12_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_Spawner_h_12_INCLASS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTPOOL_API UClass* StaticClass<class ASpawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectPool_Source_ObjectPool_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
