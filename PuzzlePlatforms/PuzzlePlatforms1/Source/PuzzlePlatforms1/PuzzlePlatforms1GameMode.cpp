// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "PuzzlePlatforms1GameMode.h"
#include "PuzzlePlatforms1Character.h"
#include "UObject/ConstructorHelpers.h"

APuzzlePlatforms1GameMode::APuzzlePlatforms1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
