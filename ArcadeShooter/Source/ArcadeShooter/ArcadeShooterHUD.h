// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "ArcadeShooterHUD.generated.h"

UCLASS()
class AArcadeShooterHUD : public AHUD
{
	GENERATED_BODY()

public:
	AArcadeShooterHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

