// Copyright Epic Games, Inc. All Rights Reserved.

#include "AquaAdventureGameMode.h"
#include "AquaAdventurePawn.h"

AAquaAdventureGameMode::AAquaAdventureGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AAquaAdventurePawn::StaticClass();
}
