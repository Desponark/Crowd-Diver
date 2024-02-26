// Copyright (C) 2023 Gon�alo Marques - All Rights Reserved

#include "UINavGameViewportClient.h"
#include "UnrealClient.h"
#include "Engine/Console.h"
#include "Engine/GameInstance.h"

EMouseCursor::Type UUINavGameViewportClient::GetCursor(FViewport* InViewport, int32 X, int32 Y)
{
	if (!FSlateApplication::Get().IsActive())
	{
		return EMouseCursor::Default;
	}
	else if (ViewportConsole && ViewportConsole->ConsoleActive())
	{
		return EMouseCursor::Default;
	}
	else if (GameInstance && GameInstance->GetFirstLocalPlayerController())
	{
		return GameInstance->GetFirstLocalPlayerController()->GetMouseCursor();
	}

	return FViewportClient::GetCursor(InViewport, X, Y);
}
