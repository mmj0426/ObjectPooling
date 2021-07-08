// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OBJECTPOOL_PC_PlayerCharacter_generated_h
#error "PC_PlayerCharacter.generated.h already included, missing '#pragma once' in PC_PlayerCharacter.h"
#endif
#define OBJECTPOOL_PC_PlayerCharacter_generated_h

#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_SPARSE_DATA
#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_RPC_WRAPPERS
#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPC_PlayerCharacter(); \
	friend struct Z_Construct_UClass_APC_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APC_PlayerCharacter, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(APC_PlayerCharacter)


#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPC_PlayerCharacter(); \
	friend struct Z_Construct_UClass_APC_PlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APC_PlayerCharacter, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObjectPool"), NO_API) \
	DECLARE_SERIALIZER(APC_PlayerCharacter)


#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APC_PlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_PlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_PlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_PlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APC_PlayerCharacter(APC_PlayerCharacter&&); \
	NO_API APC_PlayerCharacter(const APC_PlayerCharacter&); \
public:


#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APC_PlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APC_PlayerCharacter(APC_PlayerCharacter&&); \
	NO_API APC_PlayerCharacter(const APC_PlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APC_PlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APC_PlayerCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APC_PlayerCharacter)


#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_12_PROLOG
#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_RPC_WRAPPERS \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_INCLASS \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_SPARSE_DATA \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OBJECTPOOL_API UClass* StaticClass<class APC_PlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ObjectPool_Source_ObjectPool_PC_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
