// Fill out your copyright notice in the Description page of Project Settings.


#include "UINavLocalPlayerSubsystem.h"
#include "EnhancedInputSubsystems.h"
#include "UINavSavedInputSettings.h"
#include "InputMappingContext.h"

void UUINavLocalPlayerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	Collection.InitializeDependency<UEnhancedInputLocalPlayerSubsystem>();
}

void UUINavLocalPlayerSubsystem::SaveInputContextState(UInputMappingContext* InputContext)
{
	UUINavSavedInputSettings* SavedUINavInputSettings = GetMutableDefault<UUINavSavedInputSettings>();
	SavedUINavInputSettings->SavedEnhancedInputMappings.FindOrAdd(TSoftObjectPtr<UInputMappingContext>(FAssetData(InputContext).ToSoftObjectPath())) = InputContext->GetMappings();
	SavedUINavInputSettings->SaveConfig();
}

void UUINavLocalPlayerSubsystem::ApplySavedInputContexts()
{
	UWorld* const World = GetWorld();
	if (!IsValid(World))
	{
		return;
	}

	UEnhancedInputLocalPlayerSubsystem* EnhancedInputSubsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer());;
	if (!IsValid(EnhancedInputSubsystem))
	{
		return;
	}

	const UUINavSavedInputSettings* SavedUINavInputSettings = GetDefault<UUINavSavedInputSettings>();
	for (const TPair<TSoftObjectPtr<UInputMappingContext>, FInputMappingArray>& Entry : SavedUINavInputSettings->SavedEnhancedInputMappings)
	{
		UInputMappingContext* InputContext = Entry.Key.LoadSynchronous();

		if (InputContext == nullptr)
		{
			continue;
		}

		const FInputMappingArray& SavedMappings = Entry.Value;
		if (SavedMappings.InputMappings.Num() == 0) continue;

		InputContext->UnmapAll();

		for (const FUINavEnhancedActionKeyMapping& SavedInputMapping : SavedMappings.InputMappings)
		{
			FEnhancedActionKeyMapping& NewMapping = InputContext->MapKey(SavedInputMapping.Action.LoadSynchronous(), SavedInputMapping.Key);

			TArray<UInputModifier*> InputModifiers;
			for (const TSoftObjectPtr<UInputModifier>& Modifier : SavedInputMapping.Modifiers)
			{
				InputModifiers.Add(Modifier.LoadSynchronous());
			}
			NewMapping.Modifiers = InputModifiers;

			TArray<UInputTrigger*> InputTriggers;
			for (const TSoftObjectPtr<UInputTrigger>& Trigger : SavedInputMapping.Triggers)
			{
				InputTriggers.Add(Trigger.LoadSynchronous());
			}
			NewMapping.Triggers = InputTriggers;
		}
	}

	EnhancedInputSubsystem->RequestRebuildControlMappings();
}
