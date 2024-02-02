// Copyright Epic Games, Inc. All Rights Reserved.

#include "Hunt_or_ProtectGameMode.h"
#include "Hunt_or_ProtectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AHunt_or_ProtectGameMode::AHunt_or_ProtectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_Assassin"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
