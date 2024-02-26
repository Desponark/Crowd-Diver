// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavSlider.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavSlider() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavHorizontalComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSlider();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USpinBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(UUINavSlider::execGetSliderValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSliderValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavSlider::execSetValueClamped)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValueClamped(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavSlider::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavSlider::execHandleOnSpinBoxValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_GET_PROPERTY(FByteProperty,Z_Param_CommitMethod);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnSpinBoxValueChanged(Z_Param_InValue,ETextCommit::Type(Z_Param_CommitMethod));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavSlider::execHandleOnMouseCaptureEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnMouseCaptureEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavSlider::execHandleOnSliderValueChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnSliderValueChanged(Z_Param_InValue);
		P_NATIVE_END;
	}
	void UUINavSlider::StaticRegisterNativesUUINavSlider()
	{
		UClass* Class = UUINavSlider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentValue", &UUINavSlider::execGetCurrentValue },
			{ "GetSliderValue", &UUINavSlider::execGetSliderValue },
			{ "HandleOnMouseCaptureEnd", &UUINavSlider::execHandleOnMouseCaptureEnd },
			{ "HandleOnSliderValueChanged", &UUINavSlider::execHandleOnSliderValueChanged },
			{ "HandleOnSpinBoxValueChanged", &UUINavSlider::execHandleOnSpinBoxValueChanged },
			{ "SetValueClamped", &UUINavSlider::execSetValueClamped },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics
	{
		struct UINavSlider_eventGetCurrentValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSlider_eventGetCurrentValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavSlider" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Current Value inserted in the specified number range (not 0 to 1)\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Current Value inserted in the specified number range (not 0 to 1)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSlider, nullptr, "GetCurrentValue", nullptr, nullptr, Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::UINavSlider_eventGetCurrentValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::UINavSlider_eventGetCurrentValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavSlider_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSlider_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics
	{
		struct UINavSlider_eventGetSliderValue_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSlider_eventGetSliderValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavSlider" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get Current Slider value (0 to 1)\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Current Slider value (0 to 1)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSlider, nullptr, "GetSliderValue", nullptr, nullptr, Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::UINavSlider_eventGetSliderValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::UINavSlider_eventGetSliderValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavSlider_GetSliderValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSlider_GetSliderValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSlider, nullptr, "HandleOnMouseCaptureEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics
	{
		struct UINavSlider_eventHandleOnSliderValueChanged_Parms
		{
			float InValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSlider_eventHandleOnSliderValueChanged_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::NewProp_InValue_MetaData), Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::NewProp_InValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSlider, nullptr, "HandleOnSliderValueChanged", nullptr, nullptr, Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::UINavSlider_eventHandleOnSliderValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::UINavSlider_eventHandleOnSliderValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics
	{
		struct UINavSlider_eventHandleOnSpinBoxValueChanged_Parms
		{
			float InValue;
			TEnumAsByte<ETextCommit::Type> CommitMethod;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommitMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSlider_eventHandleOnSpinBoxValueChanged_Parms, InValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::NewProp_CommitMethod = { "CommitMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSlider_eventHandleOnSpinBoxValueChanged_Parms, CommitMethod), Z_Construct_UEnum_SlateCore_ETextCommit, METADATA_PARAMS(0, nullptr) }; // 3724737095
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::NewProp_InValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::NewProp_CommitMethod,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSlider, nullptr, "HandleOnSpinBoxValueChanged", nullptr, nullptr, Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::UINavSlider_eventHandleOnSpinBoxValueChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::UINavSlider_eventHandleOnSpinBoxValueChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics
	{
		struct UINavSlider_eventSetValueClamped_Parms
		{
			float Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSlider_eventSetValueClamped_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::NewProp_Value_MetaData), Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::NewProp_Value_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavSlider" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSlider, nullptr, "SetValueClamped", nullptr, nullptr, Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::UINavSlider_eventSetValueClamped_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::UINavSlider_eventSetValueClamped_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavSlider_SetValueClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSlider_SetValueClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavSlider);
	UClass* Z_Construct_UClass_UUINavSlider_NoRegister()
	{
		return UUINavSlider::StaticClass();
	}
	struct Z_Construct_UClass_UUINavSlider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Slider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavSpinBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavSpinBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDecimalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxDecimalDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDecimalDigits_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinDecimalDigits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComma_MetaData[];
#endif
		static void NewProp_bUseComma_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComma;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleHoverColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandleHoverColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BarHoverColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BarHoverColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavSlider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavHorizontalComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavSlider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavSlider_GetCurrentValue, "GetCurrentValue" }, // 3639296104
		{ &Z_Construct_UFunction_UUINavSlider_GetSliderValue, "GetSliderValue" }, // 3557274155
		{ &Z_Construct_UFunction_UUINavSlider_HandleOnMouseCaptureEnd, "HandleOnMouseCaptureEnd" }, // 2965344405
		{ &Z_Construct_UFunction_UUINavSlider_HandleOnSliderValueChanged, "HandleOnSliderValueChanged" }, // 4258588818
		{ &Z_Construct_UFunction_UUINavSlider_HandleOnSpinBoxValueChanged, "HandleOnSpinBoxValueChanged" }, // 1154160683
		{ &Z_Construct_UFunction_UUINavSlider_SetValueClamped, "SetValueClamped" }, // 2907333605
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavSlider.h" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_Slider_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavSlider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_Slider = { "Slider", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, Slider), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_Slider_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_Slider_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_NavSpinBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavSlider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
		{ "OptionalWidget", "TRUE" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_NavSpinBox = { "NavSpinBox", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, NavSpinBox), Z_Construct_UClass_USpinBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_NavSpinBox_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_NavSpinBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, MinValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinValue_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxValue_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_Interval_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_Interval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxDecimalDigits_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxDecimalDigits = { "MaxDecimalDigits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, MaxDecimalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxDecimalDigits_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxDecimalDigits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinDecimalDigits_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinDecimalDigits = { "MinDecimalDigits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, MinDecimalDigits), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinDecimalDigits_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinDecimalDigits_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	void Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma_SetBit(void* Obj)
	{
		((UUINavSlider*)Obj)->bUseComma = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma = { "bUseComma", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSlider), &Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_HandleHoverColor_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_HandleHoverColor = { "HandleHoverColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, HandleHoverColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_HandleHoverColor_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_HandleHoverColor_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSlider_Statics::NewProp_BarHoverColor_MetaData[] = {
		{ "Category", "UINavSlider" },
		{ "ModuleRelativePath", "Public/UINavSlider.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavSlider_Statics::NewProp_BarHoverColor = { "BarHoverColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSlider, BarHoverColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::NewProp_BarHoverColor_MetaData), Z_Construct_UClass_UUINavSlider_Statics::NewProp_BarHoverColor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavSlider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_Slider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_NavSpinBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_MaxDecimalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_MinDecimalDigits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_bUseComma,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_HandleHoverColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSlider_Statics::NewProp_BarHoverColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavSlider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavSlider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavSlider_Statics::ClassParams = {
		&UUINavSlider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavSlider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavSlider_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSlider_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavSlider()
	{
		if (!Z_Registration_Info_UClass_UUINavSlider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavSlider.OuterSingleton, Z_Construct_UClass_UUINavSlider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavSlider.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavSlider>()
	{
		return UUINavSlider::StaticClass();
	}
	UUINavSlider::UUINavSlider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavSlider);
	UUINavSlider::~UUINavSlider() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavSlider, UUINavSlider::StaticClass, TEXT("UUINavSlider"), &Z_Registration_Info_UClass_UUINavSlider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavSlider), 730767444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_1717362690(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
