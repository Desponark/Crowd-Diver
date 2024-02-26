// Copyright (C) 2023 Gon�alo Marques - All Rights Reserved

#pragma once

#include "Blueprint/UserWidget.h"
#include "InputAction.h"
#include "Data/InputType.h"
#include "Data/InputDisplayType.h"
#include "Data/AxisType.h"
#include "Data/InputContainerEnhancedActionData.h"
#include "Math/Vector2D.h"
#include "UINavInputDisplay.generated.h"

class UImage;
class UTextBlock;
class URichTextBlock;
class UUINavPCComponent;

/**
 * 
 */
UCLASS()
class UINAVIGATION_API UUINavInputDisplay : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	virtual void NativePreConstruct() override;

	UFUNCTION(BlueprintCallable, Category = "InputDisplay")
	void UpdateInputVisuals();

	UFUNCTION(BlueprintCallable, Category = "InputDisplay")
	void SetInputAction(UInputAction* NewAction, const EInputAxis NewAxis, const EAxisType NewScale);

public:

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget), Category = "InputDisplay")
	UImage* InputImage = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "InputDisplay")
	UTextBlock* InputText = nullptr;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional), Category = "InputDisplay")
	URichTextBlock* InputRichText = nullptr;

protected:

	UPROPERTY(EditAnywhere, Category = "InputDisplay")
	UInputAction* InputAction = nullptr;

	UPROPERTY(EditAnywhere, Category = "InputDisplay")
	EInputAxis Axis = EInputAxis::X;
	
	UPROPERTY(EditAnywhere, Category = "InputDisplay")
	EAxisType Scale = EAxisType::None;

	UPROPERTY(EditAnywhere, Category = "InputDisplay")
	EInputDisplayType DisplayType = EInputDisplayType::Icon;

	UPROPERTY(EditAnywhere, Category = "InputDisplay")
	bool bMatchIconSize = false;

	UPROPERTY(EditAnywhere, Category = "InputDisplay", meta = (editcondition = "!bMatchIconSize"))
	FVector2D IconSize = FVector2D(24.0f, 24.0f);

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InputDisplay", meta = (editcondition = "bOverride_TextColor"))
	FSlateColor TextColorOverride;

	UPROPERTY(EditAnywhere, Category = "InputDisplay", meta = (InlineEditConditionToggle))
	uint8 bOverride_TextColor : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InputDisplay", meta = (editcondition = "bOverride_Font"))
	FSlateFontInfo FontOverride;

	UPROPERTY(EditAnywhere, Category = "InputDisplay", meta = (InlineEditConditionToggle))
	uint8 bOverride_Font : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "InputDisplay")
	FString StyleRowName;

private:

	UUINavPCComponent* UINavPC = nullptr;
	
};
 