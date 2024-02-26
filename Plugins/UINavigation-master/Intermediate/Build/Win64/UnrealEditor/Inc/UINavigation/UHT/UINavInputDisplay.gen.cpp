// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavInputDisplay.h"
#include "Fonts/SlateFontInfo.h"
#include "Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavInputDisplay() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputDisplay();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputDisplay_NoRegister();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EAxisType();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputAxis();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputDisplayType();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(UUINavInputDisplay::execSetInputAction)
	{
		P_GET_OBJECT(UInputAction,Z_Param_NewAction);
		P_GET_ENUM(EInputAxis,Z_Param_NewAxis);
		P_GET_ENUM(EAxisType,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInputAction(Z_Param_NewAction,EInputAxis(Z_Param_NewAxis),EAxisType(Z_Param_NewScale));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputDisplay::execUpdateInputVisuals)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateInputVisuals();
		P_NATIVE_END;
	}
	void UUINavInputDisplay::StaticRegisterNativesUUINavInputDisplay()
	{
		UClass* Class = UUINavInputDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInputAction", &UUINavInputDisplay::execSetInputAction },
			{ "UpdateInputVisuals", &UUINavInputDisplay::execUpdateInputVisuals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics
	{
		struct UINavInputDisplay_eventSetInputAction_Parms
		{
			UInputAction* NewAction;
			EInputAxis NewAxis;
			EAxisType NewScale;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NewScale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewScale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NewScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputDisplay_eventSetInputAction_Parms, NewAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis = { "NewAxis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputDisplay_eventSetInputAction_Parms, NewAxis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis_MetaData), Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis_MetaData) }; // 764495711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputDisplay_eventSetInputAction_Parms, NewScale), Z_Construct_UEnum_UINavigation_EAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale_MetaData), Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale_MetaData) }; // 3329478307
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputDisplay, nullptr, "SetInputAction", nullptr, nullptr, Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::UINavInputDisplay_eventSetInputAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::UINavInputDisplay_eventSetInputAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputDisplay_SetInputAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputDisplay_SetInputAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputDisplay, nullptr, "UpdateInputVisuals", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavInputDisplay);
	UClass* Z_Construct_UClass_UUINavInputDisplay_NoRegister()
	{
		return UUINavInputDisplay::StaticClass();
	}
	struct Z_Construct_UClass_UUINavInputDisplay_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRichText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRichText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Scale_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Scale;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMatchIconSize_MetaData[];
#endif
		static void NewProp_bMatchIconSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchIconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IconSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_IconSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextColorOverride_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextColorOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_TextColor_MetaData[];
#endif
		static void NewProp_bOverride_TextColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_TextColor;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StyleRowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StyleRowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavInputDisplay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavInputDisplay_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavInputDisplay_SetInputAction, "SetInputAction" }, // 2893230870
		{ &Z_Construct_UFunction_UUINavInputDisplay_UpdateInputVisuals, "UpdateInputVisuals" }, // 423658861
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavInputDisplay.h" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputImage = { "InputImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, InputImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputImage_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputImage_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "InputDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, InputText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputText_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputRichText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "InputDisplay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputRichText = { "InputRichText", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, InputRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputRichText_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputRichText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputAction_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputAction_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputAction_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis_MetaData) }; // 764495711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, Scale), Z_Construct_UEnum_UINavigation_EAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale_MetaData) }; // 3329478307
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType = { "DisplayType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, DisplayType), Z_Construct_UEnum_UINavigation_EInputDisplayType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType_MetaData) }; // 4101048975
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	void Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize_SetBit(void* Obj)
	{
		((UUINavInputDisplay*)Obj)->bMatchIconSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize = { "bMatchIconSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavInputDisplay), &Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_IconSize_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "editcondition", "!bMatchIconSize" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_IconSize = { "IconSize", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, IconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_IconSize_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_IconSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_TextColorOverride_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "editcondition", "bOverride_TextColor" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_TextColorOverride = { "TextColorOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, TextColorOverride), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_TextColorOverride_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_TextColorOverride_MetaData) }; // 3485079585
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	void Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor_SetBit(void* Obj)
	{
		((UUINavInputDisplay*)Obj)->bOverride_TextColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor = { "bOverride_TextColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUINavInputDisplay), &Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_FontOverride_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "editcondition", "bOverride_Font" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_FontOverride = { "FontOverride", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, FontOverride), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_FontOverride_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_FontOverride_MetaData) }; // 2074891513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	void Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font_SetBit(void* Obj)
	{
		((UUINavInputDisplay*)Obj)->bOverride_Font = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font = { "bOverride_Font", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UUINavInputDisplay), &Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_StyleRowName_MetaData[] = {
		{ "Category", "InputDisplay" },
		{ "ModuleRelativePath", "Public/UINavInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_StyleRowName = { "StyleRowName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputDisplay, StyleRowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_StyleRowName_MetaData), Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_StyleRowName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavInputDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputRichText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_InputAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_DisplayType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bMatchIconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_IconSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_TextColorOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_TextColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_FontOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_bOverride_Font,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputDisplay_Statics::NewProp_StyleRowName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavInputDisplay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavInputDisplay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavInputDisplay_Statics::ClassParams = {
		&UUINavInputDisplay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavInputDisplay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavInputDisplay_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputDisplay_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavInputDisplay()
	{
		if (!Z_Registration_Info_UClass_UUINavInputDisplay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavInputDisplay.OuterSingleton, Z_Construct_UClass_UUINavInputDisplay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavInputDisplay.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavInputDisplay>()
	{
		return UUINavInputDisplay::StaticClass();
	}
	UUINavInputDisplay::UUINavInputDisplay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavInputDisplay);
	UUINavInputDisplay::~UUINavInputDisplay() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavInputDisplay, UUINavInputDisplay::StaticClass, TEXT("UUINavInputDisplay"), &Z_Registration_Info_UClass_UUINavInputDisplay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavInputDisplay), 977097433U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_2519786680(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
