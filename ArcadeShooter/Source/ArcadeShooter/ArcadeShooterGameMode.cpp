// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ArcadeShooterGameMode.h"
#include "ArcadeShooterHUD.h"
#include "ArcadeShooterCharacter.h"
#include "UObject/ConstructorHelpers.h"

AArcadeShooterGameMode::AArcadeShooterGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AArcadeShooterHUD::StaticClass();
}
