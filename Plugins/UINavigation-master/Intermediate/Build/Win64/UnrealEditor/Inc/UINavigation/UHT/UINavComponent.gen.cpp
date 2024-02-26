// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavComponent.h"
#include "ComponentActions/UINavComponentAction.h"
#include "Fonts/SlateFontInfo.h"
#include "Sound/SlateSound.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FButtonStyle();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateSound();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidget_NoRegister();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EButtonStyle();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EComponentAction();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentActions();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "OnClickedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnClickedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnClickedEvent)
{
	OnClickedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "OnPressedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPressedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnPressedEvent)
{
	OnPressedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "OnReleasedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnReleasedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnReleasedEvent)
{
	OnReleasedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "OnNavigatedToEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNavigatedToEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavigatedToEvent)
{
	OnNavigatedToEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	struct Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "OnNavigatedFromEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnNavigatedFromEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavigatedFromEvent)
{
	OnNavigatedFromEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonStyle;
	static UEnum* EButtonStyle_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EButtonStyle.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EButtonStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EButtonStyle, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EButtonStyle"));
		}
		return Z_Registration_Info_UEnum_EButtonStyle.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EButtonStyle>()
	{
		return EButtonStyle_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EButtonStyle_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::Enumerators[] = {
		{ "EButtonStyle::None", (int64)EButtonStyle::None },
		{ "EButtonStyle::Normal", (int64)EButtonStyle::Normal },
		{ "EButtonStyle::Hovered", (int64)EButtonStyle::Hovered },
		{ "EButtonStyle::Pressed", (int64)EButtonStyle::Pressed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hovered.DisplayName", "Hovered" },
		{ "Hovered.Name", "EButtonStyle::Hovered" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EButtonStyle::None" },
		{ "Normal.DisplayName", "Normal" },
		{ "Normal.Name", "EButtonStyle::Normal" },
		{ "Pressed.DisplayName", "Pressed" },
		{ "Pressed.Name", "EButtonStyle::Pressed" },
		{ "ScriptName", "UINavButtonStyle" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EButtonStyle",
		"EButtonStyle",
		Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EButtonStyle()
	{
		if (!Z_Registration_Info_UEnum_EButtonStyle.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonStyle.InnerSingleton, Z_Construct_UEnum_UINavigation_EButtonStyle_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EButtonStyle.InnerSingleton;
	}
	DEFINE_FUNCTION(UUINavComponent::execGetParentScrollBox)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScrollBox**)Z_Param__Result=P_THIS->GetParentScrollBox();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execIsBeingNavigated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsBeingNavigated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execCanBeNavigated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeNavigated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execSwitchTextColorToNavigated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTextColorToNavigated();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execSwitchTextColorToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTextColorToDefault();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execSwitchTextColorTo)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchTextColorTo(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execSwitchButtonStyle)
	{
		P_GET_ENUM(EButtonStyle,Z_Param_NewStyle);
		P_GET_UBOOL(Z_Param_bRevertStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchButtonStyle(EButtonStyle(Z_Param_NewStyle),Z_Param_bRevertStyle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execSetText)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Text);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_Out_Text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnButtonUnhovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonUnhovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnButtonHovered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonHovered();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnButtonReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnNavigatedFrom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavigatedFrom_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavComponent::execOnNavigatedTo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavigatedTo_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UUINavComponent_OnNavigatedFrom = FName(TEXT("OnNavigatedFrom"));
	void UUINavComponent::OnNavigatedFrom()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavComponent_OnNavigatedFrom),NULL);
	}
	static FName NAME_UUINavComponent_OnNavigatedTo = FName(TEXT("OnNavigatedTo"));
	void UUINavComponent::OnNavigatedTo()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavComponent_OnNavigatedTo),NULL);
	}
	void UUINavComponent::StaticRegisterNativesUUINavComponent()
	{
		UClass* Class = UUINavComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBeNavigated", &UUINavComponent::execCanBeNavigated },
			{ "GetParentScrollBox", &UUINavComponent::execGetParentScrollBox },
			{ "IsBeingNavigated", &UUINavComponent::execIsBeingNavigated },
			{ "OnButtonClicked", &UUINavComponent::execOnButtonClicked },
			{ "OnButtonHovered", &UUINavComponent::execOnButtonHovered },
			{ "OnButtonPressed", &UUINavComponent::execOnButtonPressed },
			{ "OnButtonReleased", &UUINavComponent::execOnButtonReleased },
			{ "OnButtonUnhovered", &UUINavComponent::execOnButtonUnhovered },
			{ "OnNavigatedFrom", &UUINavComponent::execOnNavigatedFrom },
			{ "OnNavigatedTo", &UUINavComponent::execOnNavigatedTo },
			{ "SetText", &UUINavComponent::execSetText },
			{ "SwitchButtonStyle", &UUINavComponent::execSwitchButtonStyle },
			{ "SwitchTextColorTo", &UUINavComponent::execSwitchTextColorTo },
			{ "SwitchTextColorToDefault", &UUINavComponent::execSwitchTextColorToDefault },
			{ "SwitchTextColorToNavigated", &UUINavComponent::execSwitchTextColorToNavigated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics
	{
		struct UINavComponent_eventCanBeNavigated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavComponent_eventCanBeNavigated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavComponent_eventCanBeNavigated_Parms), &Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "CanBeNavigated", nullptr, nullptr, Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::UINavComponent_eventCanBeNavigated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::UINavComponent_eventCanBeNavigated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponent_CanBeNavigated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_CanBeNavigated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics
	{
		struct UINavComponent_eventGetParentScrollBox_Parms
		{
			UScrollBox* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavComponent_eventGetParentScrollBox_Parms, ReturnValue), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "GetParentScrollBox", nullptr, nullptr, Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::UINavComponent_eventGetParentScrollBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::UINavComponent_eventGetParentScrollBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponent_GetParentScrollBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_GetParentScrollBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics
	{
		struct UINavComponent_eventIsBeingNavigated_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavComponent_eventIsBeingNavigated_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavComponent_eventIsBeingNavigated_Parms), &Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "IsBeingNavigated", nullptr, nullptr, Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::UINavComponent_eventIsBeingNavigated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::UINavComponent_eventIsBeingNavigated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponent_IsBeingNavigated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_IsBeingNavigated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnButtonClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnButtonClicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnButtonHovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnButtonHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnButtonHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnButtonHovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnButtonHovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnButtonHovered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnButtonHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnButtonHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnButtonPressed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnButtonPressed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnButtonPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnButtonPressed_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnButtonReleased_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnButtonReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnButtonReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnButtonReleased", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnButtonReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnButtonReleased_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnButtonReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnButtonReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnButtonUnhovered", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnNavigatedFrom", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_OnNavigatedTo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_OnNavigatedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_OnNavigatedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "OnNavigatedTo", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_OnNavigatedTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_OnNavigatedTo_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_OnNavigatedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_OnNavigatedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_SetText_Statics
	{
		struct UINavComponent_eventSetText_Parms
		{
			FText Text;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Text;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SetText_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUINavComponent_SetText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavComponent_eventSetText_Parms, Text), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SetText_Statics::NewProp_Text_MetaData), Z_Construct_UFunction_UUINavComponent_SetText_Statics::NewProp_Text_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponent_SetText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_SetText_Statics::NewProp_Text,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "SetText", nullptr, nullptr, Z_Construct_UFunction_UUINavComponent_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SetText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponent_SetText_Statics::UINavComponent_eventSetText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SetText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_SetText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SetText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponent_SetText_Statics::UINavComponent_eventSetText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponent_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics
	{
		struct UINavComponent_eventSwitchButtonStyle_Parms
		{
			EButtonStyle NewStyle;
			bool bRevertStyle;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewStyle_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewStyle_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRevertStyle_MetaData[];
#endif
		static void NewProp_bRevertStyle_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRevertStyle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle = { "NewStyle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavComponent_eventSwitchButtonStyle_Parms, NewStyle), Z_Construct_UEnum_UINavigation_EButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle_MetaData), Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle_MetaData) }; // 3601456234
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle_SetBit(void* Obj)
	{
		((UINavComponent_eventSwitchButtonStyle_Parms*)Obj)->bRevertStyle = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle = { "bRevertStyle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavComponent_eventSwitchButtonStyle_Parms), &Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle_MetaData), Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_NewStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::NewProp_bRevertStyle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "CPP_Default_bRevertStyle", "true" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "SwitchButtonStyle", nullptr, nullptr, Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::UINavComponent_eventSwitchButtonStyle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::UINavComponent_eventSwitchButtonStyle_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics
	{
		struct UINavComponent_eventSwitchTextColorTo_Parms
		{
			FLinearColor Color;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavComponent_eventSwitchTextColorTo_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Changes the color of the text with the specified index to the specified color\n\x09*\n\x09*\x09@param\x09Index  The new button's index in the Button's array\n\x09*\x09@param\x09""Color  The text's new color\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the color of the text with the specified index to the specified color\n\n@param  Index  The new button's index in the Button's array\n@param  Color  The text's new color" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "SwitchTextColorTo", nullptr, nullptr, Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::UINavComponent_eventSwitchTextColorTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::UINavComponent_eventSwitchTextColorTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "SwitchTextColorToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponent, nullptr, "SwitchTextColorToNavigated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavComponent);
	UClass* Z_Construct_UClass_UUINavComponent_NoRegister()
	{
		return UUINavComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUINavComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavRichText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavRichText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnClicked_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClicked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPressed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPressed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReleased_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReleased;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNavigatedToEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavigatedToEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnNavigatedFromEvent_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNavigatedFromEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ComponentText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTextColor_MetaData[];
#endif
		static void NewProp_bUseTextColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextDefaultColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextDefaultColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextNavigatedColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextNavigatedColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComponentAnimation_MetaData[];
#endif
		static void NewProp_bUseComponentAnimation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComponentAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalStyleRowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NormalStyleRowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigatedStyleRowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NavigatedStyleRowName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseNavigatedStyleRow_MetaData[];
#endif
		static void NewProp_bUseNavigatedStyleRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNavigatedStyleRow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentScrollBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentScrollBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigatedSlateSound_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NavigatedSlateSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FontOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Font_MetaData[];
#endif
		static void NewProp_bOverride_Font_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Font;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StyleOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_Style_MetaData[];
#endif
		static void NewProp_bOverride_Style_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_Style;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ComponentActions_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ComponentActions_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ComponentActions_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentActions_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ComponentActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavComponent_CanBeNavigated, "CanBeNavigated" }, // 1427192861
		{ &Z_Construct_UFunction_UUINavComponent_GetParentScrollBox, "GetParentScrollBox" }, // 2287064009
		{ &Z_Construct_UFunction_UUINavComponent_IsBeingNavigated, "IsBeingNavigated" }, // 1484439644
		{ &Z_Construct_UFunction_UUINavComponent_OnButtonClicked, "OnButtonClicked" }, // 1434786381
		{ &Z_Construct_UFunction_UUINavComponent_OnButtonHovered, "OnButtonHovered" }, // 878637255
		{ &Z_Construct_UFunction_UUINavComponent_OnButtonPressed, "OnButtonPressed" }, // 1889277598
		{ &Z_Construct_UFunction_UUINavComponent_OnButtonReleased, "OnButtonReleased" }, // 2402297890
		{ &Z_Construct_UFunction_UUINavComponent_OnButtonUnhovered, "OnButtonUnhovered" }, // 1857399619
		{ &Z_Construct_UFunction_UUINavComponent_OnNavigatedFrom, "OnNavigatedFrom" }, // 2115908922
		{ &Z_Construct_UFunction_UUINavComponent_OnNavigatedTo, "OnNavigatedTo" }, // 2427733681
		{ &Z_Construct_UFunction_UUINavComponent_SetText, "SetText" }, // 3099371856
		{ &Z_Construct_UFunction_UUINavComponent_SwitchButtonStyle, "SwitchButtonStyle" }, // 2151326173
		{ &Z_Construct_UFunction_UUINavComponent_SwitchTextColorTo, "SwitchTextColorTo" }, // 3841118941
		{ &Z_Construct_UFunction_UUINavComponent_SwitchTextColorToDefault, "SwitchTextColorToDefault" }, // 378953219
		{ &Z_Construct_UFunction_UUINavComponent_SwitchTextColorToNavigated, "SwitchTextColorToNavigated" }, // 4235728319
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavComponent.h" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavButton = { "NavButton", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, NavButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavButton_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavText = { "NavText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, NavText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavText_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavRichText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavRichText = { "NavRichText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, NavRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavRichText_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavRichText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, ParentWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentWidget_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnClicked_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnClicked = { "OnClicked", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, OnClicked), Z_Construct_UDelegateFunction_UINavigation_OnClickedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnClicked_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnClicked_MetaData) }; // 3071694506
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnPressed_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnPressed = { "OnPressed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, OnPressed), Z_Construct_UDelegateFunction_UINavigation_OnPressedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnPressed_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnPressed_MetaData) }; // 2740198245
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnReleased_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnReleased = { "OnReleased", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, OnReleased), Z_Construct_UDelegateFunction_UINavigation_OnReleasedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnReleased_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnReleased_MetaData) }; // 32768685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedToEvent_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedToEvent = { "OnNavigatedToEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, OnNavigatedToEvent), Z_Construct_UDelegateFunction_UINavigation_OnNavigatedToEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedToEvent_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedToEvent_MetaData) }; // 3511512847
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedFromEvent_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedFromEvent = { "OnNavigatedFromEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, OnNavigatedFromEvent), Z_Construct_UDelegateFunction_UINavigation_OnNavigatedFromEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedFromEvent_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedFromEvent_MetaData) }; // 1453964237
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentText_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentText = { "ComponentText", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, ComponentText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentText_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor_SetBit(void* Obj)
	{
		((UUINavComponent*)Obj)->bUseTextColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor = { "bUseTextColor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavComponent), &Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextDefaultColor_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "editcondition", "bUseTextColor" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextDefaultColor = { "TextDefaultColor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, TextDefaultColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextDefaultColor_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextDefaultColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextNavigatedColor_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "editcondition", "bUseTextColor" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextNavigatedColor = { "TextNavigatedColor", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, TextNavigatedColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextNavigatedColor_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextNavigatedColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation_SetBit(void* Obj)
	{
		((UUINavComponent*)Obj)->bUseComponentAnimation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation = { "bUseComponentAnimation", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavComponent), &Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_NormalStyleRowName_MetaData[] = {
		{ "Category", "UINavComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Applied to the optional NavRichText text block if it exists and if this string isn't empty\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applied to the optional NavRichText text block if it exists and if this string isn't empty" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_NormalStyleRowName = { "NormalStyleRowName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, NormalStyleRowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_NormalStyleRowName_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_NormalStyleRowName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedStyleRowName_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "editcondition", "bUseNavigatedStyleRow" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedStyleRowName = { "NavigatedStyleRowName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, NavigatedStyleRowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedStyleRowName_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedStyleRowName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow_SetBit(void* Obj)
	{
		((UUINavComponent*)Obj)->bUseNavigatedStyleRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow = { "bUseNavigatedStyleRow", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUINavComponent), &Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentAnimation_MetaData[] = {
		{ "BindWidgetAnimOptional", "" },
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentAnimation = { "ComponentAnimation", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, ComponentAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentAnimation_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentAnimation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentScrollBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentScrollBox = { "ParentScrollBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, ParentScrollBox), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentScrollBox_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentScrollBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedSlateSound_MetaData[] = {
		{ "Category", "UINavComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The sound the button should play when initially Navigated over\n\x09 */" },
#endif
		{ "DisplayName", "Navigated Sound" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sound the button should play when initially Navigated over" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedSlateSound = { "NavigatedSlateSound", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, NavigatedSlateSound), Z_Construct_UScriptStruct_FSlateSound, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedSlateSound_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedSlateSound_MetaData) }; // 71556389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_FontOverride_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "editcondition", "bOverride_Font" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_FontOverride = { "FontOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, FontOverride), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_FontOverride_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_FontOverride_MetaData) }; // 2074891513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font_SetBit(void* Obj)
	{
		((UUINavComponent*)Obj)->bOverride_Font = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font = { "bOverride_Font", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUINavComponent), &Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_StyleOverride_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "editcondition", "bOverride_Style" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_StyleOverride = { "StyleOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, StyleOverride), Z_Construct_UScriptStruct_FButtonStyle, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_StyleOverride_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_StyleOverride_MetaData) }; // 1902661672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	void Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style_SetBit(void* Obj)
	{
		((UUINavComponent*)Obj)->bOverride_Style = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style = { "bOverride_Style", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUINavComponent), &Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_ValueProp = { "ComponentActions", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FComponentActions, METADATA_PARAMS(0, nullptr) }; // 1359910958
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_Key_KeyProp = { "ComponentActions_Key", nullptr, (EPropertyFlags)0x0000008000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UINavigation_EComponentAction, METADATA_PARAMS(0, nullptr) }; // 3846460985
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_MetaData[] = {
		{ "Category", "UINavComponent" },
		{ "ModuleRelativePath", "Public/UINavComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions = { "ComponentActions", nullptr, (EPropertyFlags)0x0020088000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponent, ComponentActions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_MetaData), Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_MetaData) }; // 3846460985 1359910958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavRichText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnClicked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnPressed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnReleased,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedToEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_OnNavigatedFromEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseTextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextDefaultColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_TextNavigatedColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseComponentAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_NormalStyleRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedStyleRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_bUseNavigatedStyleRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ParentScrollBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_NavigatedSlateSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_FontOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_StyleOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_bOverride_Style,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponent_Statics::NewProp_ComponentActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavComponent_Statics::ClassParams = {
		&UUINavComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavComponent()
	{
		if (!Z_Registration_Info_UClass_UUINavComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavComponent.OuterSingleton, Z_Construct_UClass_UUINavComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavComponent.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavComponent>()
	{
		return UUINavComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavComponent);
	UUINavComponent::~UUINavComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics::EnumInfo[] = {
		{ EButtonStyle_StaticEnum, TEXT("EButtonStyle"), &Z_Registration_Info_UEnum_EButtonStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3601456234U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavComponent, UUINavComponent::StaticClass, TEXT("UUINavComponent"), &Z_Registration_Info_UClass_UUINavComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavComponent), 1197558319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_3078988308(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponent_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
