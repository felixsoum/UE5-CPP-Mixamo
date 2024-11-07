// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5CppMixamoGameMode.h"
#include "UE5CppMixamoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5CppMixamoGameMode::AUE5CppMixamoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
