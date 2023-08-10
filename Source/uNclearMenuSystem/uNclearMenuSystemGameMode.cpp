// Copyright Epic Games, Inc. All Rights Reserved.

#include "uNclearMenuSystemGameMode.h"
#include "uNclearMenuSystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AuNclearMenuSystemGameMode::AuNclearMenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
