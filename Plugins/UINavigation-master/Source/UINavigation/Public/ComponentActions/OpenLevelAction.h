// Copyright (C) 2023 Gon�alo Marques - All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "ComponentActions/UINavComponentAction.h"
#include "Templates/SubclassOf.h"
#include "OpenLevelAction.generated.h"

class UUINavWidget;

/**
 * 
 */
UCLASS()
class UINAVIGATION_API UOpenLevelAction : public UUINavComponentAction
{
	GENERATED_BODY()

public:

	void ExecuteAction_Implementation(UUINavComponent* Component) override;

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OpenLevelAction")
	FName LevelName;
	
};
