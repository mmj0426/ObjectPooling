// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTPOOL_GM_ObjectPool_generated_h
#error "GM_ObjectPool.generated.h already included, missing '#pragma once' in GM_ObjectPool.h"
#endif
#define OBJECTPOOL_GM_ObjectPool_generated_h

#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_SPARSE_DATA
#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_RPC_WRAPPERS
#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGM_ObjectPool(); \
	friend struct Z_Construct_UClass_AGM_ObjectPool_Statics; \
public: \
	DECLARE_CLASS(AGM_ObjectPool, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(AGM_ObjectPool)


#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGM_ObjectPool(); \
	friend struct Z_Construct_UClass_AGM_ObjectPool_Statics; \
public: \
	DECLARE_CLASS(AGM_ObjectPool, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(AGM_ObjectPool)


#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGM_ObjectPool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGM_ObjectPool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_ObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_ObjectPool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_ObjectPool(AGM_ObjectPool&&); \
	NO_API AGM_ObjectPool(const AGM_ObjectPool&); \
public:


#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGM_ObjectPool(AGM_ObjectPool&&); \
	NO_API AGM_ObjectPool(const AGM_ObjectPool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGM_ObjectPool); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGM_ObjectPool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGM_ObjectPool)


#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_PRIVATE_PROPERTY_OFFSET
#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_12_PROLOG
#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_RPC_WRAPPERS \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_INCLASS \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_INCLASS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_GM_ObjectPool_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTPOOL_API UClass* StaticClass<class AGM_ObjectPool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectPool_Source_ObjectPool_GM_ObjectPool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
