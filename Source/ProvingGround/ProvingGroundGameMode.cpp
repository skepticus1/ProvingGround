// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ProvingGroundGameMode.h"
#include "ProvingGroundHUD.h"
#include "ProvingGroundCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProvingGroundGameMode::AProvingGroundGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProvingGroundHUD::StaticClass();
}
