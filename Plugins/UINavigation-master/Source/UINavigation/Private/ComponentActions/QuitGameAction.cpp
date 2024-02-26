// Copyright (C) 2023 Gon�alo Marques - All Rights Reserved

#include "ComponentActions/QuitGameAction.h"
#include "UINavComponent.h"
#include "UINavWidget.h"
#include "Kismet/KismetSystemLibrary.h"

void UQuitGameAction::ExecuteAction_Implementation(UUINavComponent* Component)
{
	if (!IsValid(Component))
	{
		return;
	}

	UKismetSystemLibrary::QuitGame(Component, nullptr, EQuitPreference::Quit, true);
}
