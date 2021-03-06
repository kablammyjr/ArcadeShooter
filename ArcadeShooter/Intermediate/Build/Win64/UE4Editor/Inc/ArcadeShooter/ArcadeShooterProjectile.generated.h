// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ARCADESHOOTER_ArcadeShooterProjectile_generated_h
#error "ArcadeShooterProjectile.generated.h already included, missing '#pragma once' in ArcadeShooterProjectile.h"
#endif
#define ARCADESHOOTER_ArcadeShooterProjectile_generated_h

#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAArcadeShooterProjectile(); \
	friend ARCADESHOOTER_API class UClass* Z_Construct_UClass_AArcadeShooterProjectile(); \
public: \
	DECLARE_CLASS(AArcadeShooterProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArcadeShooter"), NO_API) \
	DECLARE_SERIALIZER(AArcadeShooterProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAArcadeShooterProjectile(); \
	friend ARCADESHOOTER_API class UClass* Z_Construct_UClass_AArcadeShooterProjectile(); \
public: \
	DECLARE_CLASS(AArcadeShooterProjectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/ArcadeShooter"), NO_API) \
	DECLARE_SERIALIZER(AArcadeShooterProjectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AArcadeShooterProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AArcadeShooterProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcadeShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcadeShooterProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcadeShooterProjectile(AArcadeShooterProjectile&&); \
	NO_API AArcadeShooterProjectile(const AArcadeShooterProjectile&); \
public:


#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AArcadeShooterProjectile(AArcadeShooterProjectile&&); \
	NO_API AArcadeShooterProjectile(const AArcadeShooterProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AArcadeShooterProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AArcadeShooterProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AArcadeShooterProjectile)


#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AArcadeShooterProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AArcadeShooterProjectile, ProjectileMovement); }


#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_9_PROLOG
#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_RPC_WRAPPERS \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_INCLASS \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_INCLASS_NO_PURE_DECLS \
	ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ArcadeShooter_Source_ArcadeShooter_ArcadeShooterProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
