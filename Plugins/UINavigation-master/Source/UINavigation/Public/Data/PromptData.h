// Copyright (C) 2023 Gonçalo Marques - All Rights Reserved

#pragma once
#include "UObject/Object.h"
#include "PromptData.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UINAVIGATION_API UPromptDataBase : public UObject
{
	GENERATED_BODY()

public:
	UPromptDataBase() {}
};

UCLASS(BlueprintType, Blueprintable)
class UPromptDataBinary : public UPromptDataBase
{
	GENERATED_BODY()

public:
	UPromptDataBinary() {}

	UPromptDataBinary(const bool bInAccept) : bAccept(bInAccept) {}

	UPROPERTY(BlueprintReadWrite, Category = "Prompt Data")
	bool bAccept = true;

};