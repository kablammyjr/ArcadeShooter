// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ArcadeShooterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcadeShooterHUD() {}
// Cross Module References
	ARCADESHOOTER_API UClass* Z_Construct_UClass_AArcadeShooterHUD_NoRegister();
	ARCADESHOOTER_API UClass* Z_Construct_UClass_AArcadeShooterHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ArcadeShooter();
// End Cross Module References
	void AArcadeShooterHUD::StaticRegisterNativesAArcadeShooterHUD()
	{
	}
	UClass* Z_Construct_UClass_AArcadeShooterHUD_NoRegister()
	{
		return AArcadeShooterHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AArcadeShooterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_ArcadeShooter,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "ArcadeShooterHUD.h" },
				{ "ModuleRelativePath", "ArcadeShooterHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AArcadeShooterHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AArcadeShooterHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcadeShooterHUD, 2791713669);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcadeShooterHUD(Z_Construct_UClass_AArcadeShooterHUD, &AArcadeShooterHUD::StaticClass, TEXT("/Script/ArcadeShooter"), TEXT("AArcadeShooterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcadeShooterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
