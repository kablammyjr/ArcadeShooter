// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ArcadeShooterGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeShooterGameMode() {}
// Cross Module References
	ARCADESHOOTER_API UClass* Z_Construct_UClass_AArcadeShooterGameMode_NoRegister();
	ARCADESHOOTER_API UClass* Z_Construct_UClass_AArcadeShooterGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArcadeShooter();
// End Cross Module References
	void AArcadeShooterGameMode::StaticRegisterNativesAArcadeShooterGameMode()
	{
	}
	UClass* Z_Construct_UClass_AArcadeShooterGameMode_NoRegister()
	{
		return AArcadeShooterGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AArcadeShooterGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ArcadeShooter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ArcadeShooterGameMode.h" },
				{ "ModuleRelativePath", "ArcadeShooterGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AArcadeShooterGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AArcadeShooterGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcadeShooterGameMode, 2485280313);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcadeShooterGameMode(Z_Construct_UClass_AArcadeShooterGameMode, &AArcadeShooterGameMode::StaticClass, TEXT("/Script/ArcadeShooter"), TEXT("AArcadeShooterGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcadeShooterGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
