// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavPCComponent.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavPCComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputBox_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPCComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPCComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidget_NoRegister();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EAutoHideMouse();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EAxisType();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputAxis();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputMode();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputRestriction();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputType();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EThumbstickAsMouse();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FAxis2D_Keys();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics
	{
		struct _Script_UINavigation_eventInputTypeChangedDelegate_Parms
		{
			EInputType InputType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::NewProp_InputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UINavigation_eventInputTypeChangedDelegate_Parms, InputType), Z_Construct_UEnum_UINavigation_EInputType, METADATA_PARAMS(0, nullptr) }; // 431819982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::NewProp_InputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::NewProp_InputType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "InputTypeChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::_Script_UINavigation_eventInputTypeChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::_Script_UINavigation_eventInputTypeChangedDelegate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FInputTypeChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& InputTypeChangedDelegate, EInputType InputType)
{
	struct _Script_UINavigation_eventInputTypeChangedDelegate_Parms
	{
		EInputType InputType;
	};
	_Script_UINavigation_eventInputTypeChangedDelegate_Parms Parms;
	Parms.InputType=InputType;
	InputTypeChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "UpdateInputIconsDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FUpdateInputIconsDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateInputIconsDelegate)
{
	UpdateInputIconsDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Axis2D_Keys;
class UScriptStruct* FAxis2D_Keys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Axis2D_Keys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Axis2D_Keys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAxis2D_Keys, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("Axis2D_Keys"));
	}
	return Z_Registration_Info_UScriptStruct_Axis2D_Keys.OuterSingleton;
}
template<> UINAVIGATION_API UScriptStruct* StaticStruct<FAxis2D_Keys>()
{
	return FAxis2D_Keys::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAxis2D_Keys_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAxis2D_Keys>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		&NewStructOps,
		"Axis2D_Keys",
		nullptr,
		0,
		sizeof(FAxis2D_Keys),
		alignof(FAxis2D_Keys),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::Struct_MetaDataParams)
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAxis2D_Keys()
	{
		if (!Z_Registration_Info_UScriptStruct_Axis2D_Keys.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Axis2D_Keys.InnerSingleton, Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Axis2D_Keys.InnerSingleton;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsMovingThumbstick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMovingThumbstick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetThumbstickDelta)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetThumbstickDelta();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsWidgetActive)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_UINavWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsWidgetActive(Z_Param_UINavWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetActiveSubWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GetActiveSubWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetActiveWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GetActiveWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsUsingGamepad)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingGamepad();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsUsingKeyboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingKeyboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsUsingMouse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingMouse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetCurrentInputType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputType*)Z_Param__Result=P_THIS->GetCurrentInputType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlayerController**)Z_Param__Result=P_THIS->GetPC();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execNavigateInDirection)
	{
		P_GET_ENUM(EUINavigation,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateInDirection(EUINavigation(Z_Param_Direction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGoToBuiltWidget)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_NewWidget);
		P_GET_UBOOL(Z_Param_bRemoveParent);
		P_GET_UBOOL(Z_Param_bDestroyParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GoToBuiltWidget(Z_Param_NewWidget,Z_Param_bRemoveParent,Z_Param_bDestroyParent,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGoToWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_GET_UBOOL(Z_Param_bRemoveParent);
		P_GET_UBOOL(Z_Param_bDestroyParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GoToWidget(Z_Param_NewWidgetClass,Z_Param_bRemoveParent,Z_Param_bDestroyParent,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execNotifyNavigatedTo)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_NavigatedWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyNavigatedTo(Z_Param_NavigatedWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetActiveWidget)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_NewActiveWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActiveWidget(Z_Param_NewActiveWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetEnhancedInputComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEnhancedInputComponent**)Z_Param__Result=P_THIS->GetEnhancedInputComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetEnhancedInputKeys)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_TARRAY_REF(FKey,Z_Param_Out_OutKeys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEnhancedInputKeys(Z_Param_Action,Z_Param_Out_OutKeys);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetKeyText)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetKeyText(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetEnhancedInputText)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_ENUM(EInputAxis,Z_Param_Axis);
		P_GET_ENUM(EAxisType,Z_Param_Scale);
		P_GET_ENUM(EInputRestriction,Z_Param_InputRestriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetEnhancedInputText(Z_Param_Action,EInputAxis(Z_Param_Axis),EAxisType(Z_Param_Scale),EInputRestriction(Z_Param_InputRestriction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetSoftEnhancedInputIcon)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_ENUM(EInputAxis,Z_Param_Axis);
		P_GET_ENUM(EAxisType,Z_Param_Scale);
		P_GET_ENUM(EInputRestriction,Z_Param_InputRestriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UTexture2D>*)Z_Param__Result=P_THIS->GetSoftEnhancedInputIcon(Z_Param_Action,EInputAxis(Z_Param_Axis),EAxisType(Z_Param_Scale),EInputRestriction(Z_Param_InputRestriction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetEnhancedInputIcon)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_ENUM(EInputAxis,Z_Param_Axis);
		P_GET_ENUM(EAxisType,Z_Param_Scale);
		P_GET_ENUM(EInputRestriction,Z_Param_InputRestriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetEnhancedInputIcon(Z_Param_Action,EInputAxis(Z_Param_Axis),EAxisType(Z_Param_Scale),EInputRestriction(Z_Param_InputRestriction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetSoftKeyIcon)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UTexture2D>*)Z_Param__Result=P_THIS->GetSoftKeyIcon(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetKeyIcon)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetKeyIcon(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetEnhancedInputKey)
	{
		P_GET_OBJECT(UInputAction,Z_Param_Action);
		P_GET_ENUM(EInputAxis,Z_Param_Axis);
		P_GET_ENUM(EAxisType,Z_Param_Scale);
		P_GET_ENUM(EInputRestriction,Z_Param_InputRestriction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetEnhancedInputKey(Z_Param_Action,EInputAxis(Z_Param_Axis),EAxisType(Z_Param_Scale),EInputRestriction(Z_Param_InputRestriction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsAxis)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAxis(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execIsAxis2D)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAxis2D(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetOppositeAxis2DAxis)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetOppositeAxis2DAxis(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetOppositeAxisKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_UBOOL_REF(Z_Param_Out_bOutIsPositive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetOppositeAxisKey(Z_Param_Out_Key,Z_Param_Out_bOutIsPositive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetAxis2DFromAxis1D)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetAxis2DFromAxis1D(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetAxis1DFromAxis2D)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_ENUM(EInputAxis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetAxis1DFromAxis2D(Z_Param_Out_Key,EInputAxis(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetAxisFromKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetAxisFromKey(Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetAxisFromScaledKey)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_UBOOL_REF(Z_Param_Out_OutbPositive);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetAxisFromScaledKey(Z_Param_Out_Key,Z_Param_Out_OutbPositive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetKeyFromAxis)
	{
		P_GET_STRUCT_REF(FKey,Z_Param_Out_Key);
		P_GET_UBOOL(Z_Param_bPositive);
		P_GET_ENUM(EInputAxis,Z_Param_Axis);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FKey*)Z_Param__Result=P_THIS->GetKeyFromAxis(Z_Param_Out_Key,Z_Param_bPositive,EInputAxis(Z_Param_Axis));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execGetInputMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInputMode*)Z_Param__Result=P_THIS->GetInputMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSimulateMouseClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateMouseClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSimulateMouseRelease)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateMouseRelease();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSimulateMousePress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SimulateMousePress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execRemoveInputContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInputContext(Z_Param_Context);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execAddInputContext)
	{
		P_GET_OBJECT(UInputMappingContext,Z_Param_Context);
		P_GET_PROPERTY(FIntProperty,Z_Param_Priority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputContext(Z_Param_Context,Z_Param_Priority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetAllowSectionInput)
	{
		P_GET_UBOOL(Z_Param_bAllowInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowSectionInput(Z_Param_bAllowInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetAllowReturnInput)
	{
		P_GET_UBOOL(Z_Param_bAllowInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowReturnInput(Z_Param_bAllowInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetAllowSelectInput)
	{
		P_GET_UBOOL(Z_Param_bAllowInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowSelectInput(Z_Param_bAllowInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetAllowDirectionalInput)
	{
		P_GET_UBOOL(Z_Param_bAllowInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowDirectionalInput(Z_Param_bAllowInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetAllowAllMenuInput)
	{
		P_GET_UBOOL(Z_Param_bAllowInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowAllMenuInput(Z_Param_bAllowInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execRefreshNavigationKeys)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RefreshNavigationKeys();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execHidingMouseCursor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HidingMouseCursor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execSetShowMouseCursor)
	{
		P_GET_UBOOL(Z_Param_bShowMouse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShowMouseCursor(Z_Param_bShowMouse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execAllowsSectionInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsSectionInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execAllowsReturnInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsReturnInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execAllowsSelectInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsSelectInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execAllowsDirectionalInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsDirectionalInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavPCComponent::execAllowsAllMenuInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowsAllMenuInput();
		P_NATIVE_END;
	}
	void UUINavPCComponent::StaticRegisterNativesUUINavPCComponent()
	{
		UClass* Class = UUINavPCComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputContext", &UUINavPCComponent::execAddInputContext },
			{ "AllowsAllMenuInput", &UUINavPCComponent::execAllowsAllMenuInput },
			{ "AllowsDirectionalInput", &UUINavPCComponent::execAllowsDirectionalInput },
			{ "AllowsReturnInput", &UUINavPCComponent::execAllowsReturnInput },
			{ "AllowsSectionInput", &UUINavPCComponent::execAllowsSectionInput },
			{ "AllowsSelectInput", &UUINavPCComponent::execAllowsSelectInput },
			{ "GetActiveSubWidget", &UUINavPCComponent::execGetActiveSubWidget },
			{ "GetActiveWidget", &UUINavPCComponent::execGetActiveWidget },
			{ "GetAxis1DFromAxis2D", &UUINavPCComponent::execGetAxis1DFromAxis2D },
			{ "GetAxis2DFromAxis1D", &UUINavPCComponent::execGetAxis2DFromAxis1D },
			{ "GetAxisFromKey", &UUINavPCComponent::execGetAxisFromKey },
			{ "GetAxisFromScaledKey", &UUINavPCComponent::execGetAxisFromScaledKey },
			{ "GetCurrentInputType", &UUINavPCComponent::execGetCurrentInputType },
			{ "GetEnhancedInputComponent", &UUINavPCComponent::execGetEnhancedInputComponent },
			{ "GetEnhancedInputIcon", &UUINavPCComponent::execGetEnhancedInputIcon },
			{ "GetEnhancedInputKey", &UUINavPCComponent::execGetEnhancedInputKey },
			{ "GetEnhancedInputKeys", &UUINavPCComponent::execGetEnhancedInputKeys },
			{ "GetEnhancedInputText", &UUINavPCComponent::execGetEnhancedInputText },
			{ "GetInputMode", &UUINavPCComponent::execGetInputMode },
			{ "GetKeyFromAxis", &UUINavPCComponent::execGetKeyFromAxis },
			{ "GetKeyIcon", &UUINavPCComponent::execGetKeyIcon },
			{ "GetKeyText", &UUINavPCComponent::execGetKeyText },
			{ "GetOppositeAxis2DAxis", &UUINavPCComponent::execGetOppositeAxis2DAxis },
			{ "GetOppositeAxisKey", &UUINavPCComponent::execGetOppositeAxisKey },
			{ "GetPC", &UUINavPCComponent::execGetPC },
			{ "GetSoftEnhancedInputIcon", &UUINavPCComponent::execGetSoftEnhancedInputIcon },
			{ "GetSoftKeyIcon", &UUINavPCComponent::execGetSoftKeyIcon },
			{ "GetThumbstickDelta", &UUINavPCComponent::execGetThumbstickDelta },
			{ "GoToBuiltWidget", &UUINavPCComponent::execGoToBuiltWidget },
			{ "GoToWidget", &UUINavPCComponent::execGoToWidget },
			{ "HidingMouseCursor", &UUINavPCComponent::execHidingMouseCursor },
			{ "IsAxis", &UUINavPCComponent::execIsAxis },
			{ "IsAxis2D", &UUINavPCComponent::execIsAxis2D },
			{ "IsMovingThumbstick", &UUINavPCComponent::execIsMovingThumbstick },
			{ "IsUsingGamepad", &UUINavPCComponent::execIsUsingGamepad },
			{ "IsUsingKeyboard", &UUINavPCComponent::execIsUsingKeyboard },
			{ "IsUsingMouse", &UUINavPCComponent::execIsUsingMouse },
			{ "IsWidgetActive", &UUINavPCComponent::execIsWidgetActive },
			{ "NavigateInDirection", &UUINavPCComponent::execNavigateInDirection },
			{ "NotifyNavigatedTo", &UUINavPCComponent::execNotifyNavigatedTo },
			{ "RefreshNavigationKeys", &UUINavPCComponent::execRefreshNavigationKeys },
			{ "RemoveInputContext", &UUINavPCComponent::execRemoveInputContext },
			{ "SetActiveWidget", &UUINavPCComponent::execSetActiveWidget },
			{ "SetAllowAllMenuInput", &UUINavPCComponent::execSetAllowAllMenuInput },
			{ "SetAllowDirectionalInput", &UUINavPCComponent::execSetAllowDirectionalInput },
			{ "SetAllowReturnInput", &UUINavPCComponent::execSetAllowReturnInput },
			{ "SetAllowSectionInput", &UUINavPCComponent::execSetAllowSectionInput },
			{ "SetAllowSelectInput", &UUINavPCComponent::execSetAllowSelectInput },
			{ "SetShowMouseCursor", &UUINavPCComponent::execSetShowMouseCursor },
			{ "SimulateMouseClick", &UUINavPCComponent::execSimulateMouseClick },
			{ "SimulateMousePress", &UUINavPCComponent::execSimulateMousePress },
			{ "SimulateMouseRelease", &UUINavPCComponent::execSimulateMouseRelease },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics
	{
		struct UINavPCComponent_eventAddInputContext_Parms
		{
			const UInputMappingContext* Context;
			int32 Priority;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventAddInputContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Context_MetaData), Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Context_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventAddInputContext_Parms, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Priority_MetaData), Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Priority_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Context,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::NewProp_Priority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "CPP_Default_Priority", "0" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "AddInputContext", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::UINavPCComponent_eventAddInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::UINavPCComponent_eventAddInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_AddInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_AddInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics
	{
		struct UINavPCComponent_eventAllowsAllMenuInput_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventAllowsAllMenuInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventAllowsAllMenuInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "AllowsAllMenuInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::UINavPCComponent_eventAllowsAllMenuInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::UINavPCComponent_eventAllowsAllMenuInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics
	{
		struct UINavPCComponent_eventAllowsDirectionalInput_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventAllowsDirectionalInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventAllowsDirectionalInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "AllowsDirectionalInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::UINavPCComponent_eventAllowsDirectionalInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::UINavPCComponent_eventAllowsDirectionalInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics
	{
		struct UINavPCComponent_eventAllowsReturnInput_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventAllowsReturnInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventAllowsReturnInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "AllowsReturnInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::UINavPCComponent_eventAllowsReturnInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::UINavPCComponent_eventAllowsReturnInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics
	{
		struct UINavPCComponent_eventAllowsSectionInput_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventAllowsSectionInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventAllowsSectionInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "AllowsSectionInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::UINavPCComponent_eventAllowsSectionInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::UINavPCComponent_eventAllowsSectionInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics
	{
		struct UINavPCComponent_eventAllowsSelectInput_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventAllowsSelectInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventAllowsSelectInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "AllowsSelectInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::UINavPCComponent_eventAllowsSelectInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::UINavPCComponent_eventAllowsSelectInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics
	{
		struct UINavPCComponent_eventGetActiveSubWidget_Parms
		{
			UUINavWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetActiveSubWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetActiveSubWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::UINavPCComponent_eventGetActiveSubWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::UINavPCComponent_eventGetActiveSubWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics
	{
		struct UINavPCComponent_eventGetActiveWidget_Parms
		{
			UUINavWidget* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetActiveWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::UINavPCComponent_eventGetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::UINavPCComponent_eventGetActiveWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics
	{
		struct UINavPCComponent_eventGetAxis1DFromAxis2D_Parms
		{
			FKey Key;
			EInputAxis Axis;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxis1DFromAxis2D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Key_MetaData) }; // 46000949
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxis1DFromAxis2D_Parms, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis_MetaData) }; // 764495711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxis1DFromAxis2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetAxis1DFromAxis2D", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::UINavPCComponent_eventGetAxis1DFromAxis2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::UINavPCComponent_eventGetAxis1DFromAxis2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics
	{
		struct UINavPCComponent_eventGetAxis2DFromAxis1D_Parms
		{
			FKey Key;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxis2DFromAxis1D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_Key_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxis2DFromAxis1D_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetAxis2DFromAxis1D", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::UINavPCComponent_eventGetAxis2DFromAxis1D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::UINavPCComponent_eventGetAxis2DFromAxis1D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics
	{
		struct UINavPCComponent_eventGetAxisFromKey_Parms
		{
			FKey Key;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxisFromKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_Key_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxisFromKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetAxisFromKey", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::UINavPCComponent_eventGetAxisFromKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::UINavPCComponent_eventGetAxisFromKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics
	{
		struct UINavPCComponent_eventGetAxisFromScaledKey_Parms
		{
			FKey Key;
			bool OutbPositive;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_OutbPositive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_OutbPositive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxisFromScaledKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_Key_MetaData) }; // 46000949
	void Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_OutbPositive_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGetAxisFromScaledKey_Parms*)Obj)->OutbPositive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_OutbPositive = { "OutbPositive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGetAxisFromScaledKey_Parms), &Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_OutbPositive_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetAxisFromScaledKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_OutbPositive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetAxisFromScaledKey", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::UINavPCComponent_eventGetAxisFromScaledKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::UINavPCComponent_eventGetAxisFromScaledKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics
	{
		struct UINavPCComponent_eventGetCurrentInputType_Parms
		{
			EInputType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetCurrentInputType_Parms, ReturnValue), Z_Construct_UEnum_UINavigation_EInputType, METADATA_PARAMS(0, nullptr) }; // 431819982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetCurrentInputType", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::UINavPCComponent_eventGetCurrentInputType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::UINavPCComponent_eventGetCurrentInputType_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics
	{
		struct UINavPCComponent_eventGetEnhancedInputComponent_Parms
		{
			UEnhancedInputComponent* ReturnValue;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputComponent_Parms, ReturnValue), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetEnhancedInputComponent", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::UINavPCComponent_eventGetEnhancedInputComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::UINavPCComponent_eventGetEnhancedInputComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics
	{
		struct UINavPCComponent_eventGetEnhancedInputIcon_Parms
		{
			const UInputAction* Action;
			EInputAxis Axis;
			EAxisType Scale;
			EInputRestriction InputRestriction;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputRestriction;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputIcon_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputIcon_Parms, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis_MetaData) }; // 764495711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputIcon_Parms, Scale), Z_Construct_UEnum_UINavigation_EAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale_MetaData) }; // 3329478307
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction = { "InputRestriction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputIcon_Parms, InputRestriction), Z_Construct_UEnum_UINavigation_EInputRestriction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction_MetaData) }; // 1840118431
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_InputRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get first found Icon associated with the given enhanced input action\n//Will search the icon table\n" },
#endif
		{ "CPP_Default_Axis", "X" },
		{ "CPP_Default_InputRestriction", "None" },
		{ "CPP_Default_Scale", "None" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get first found Icon associated with the given enhanced input action\nWill search the icon table" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetEnhancedInputIcon", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::UINavPCComponent_eventGetEnhancedInputIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::UINavPCComponent_eventGetEnhancedInputIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics
	{
		struct UINavPCComponent_eventGetEnhancedInputKey_Parms
		{
			const UInputAction* Action;
			EInputAxis Axis;
			EAxisType Scale;
			EInputRestriction InputRestriction;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputRestriction;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKey_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKey_Parms, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis_MetaData) }; // 764495711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKey_Parms, Scale), Z_Construct_UEnum_UINavigation_EAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale_MetaData) }; // 3329478307
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction = { "InputRestriction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKey_Parms, InputRestriction), Z_Construct_UEnum_UINavigation_EInputRestriction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction_MetaData) }; // 1840118431
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_InputRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Receives the action and returns the first key that respects the given restriction.\n" },
#endif
		{ "CPP_Default_Axis", "X" },
		{ "CPP_Default_InputRestriction", "None" },
		{ "CPP_Default_Scale", "None" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Receives the action and returns the first key that respects the given restriction." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetEnhancedInputKey", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::UINavPCComponent_eventGetEnhancedInputKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::UINavPCComponent_eventGetEnhancedInputKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics
	{
		struct UINavPCComponent_eventGetEnhancedInputKeys_Parms
		{
			const UInputAction* Action;
			TArray<FKey> OutKeys;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKeys_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_OutKeys_Inner = { "OutKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_OutKeys = { "OutKeys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputKeys_Parms, OutKeys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_OutKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::NewProp_OutKeys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Receives the enhanced input action and returns all the keys associated with that action\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Receives the enhanced input action and returns all the keys associated with that action" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetEnhancedInputKeys", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::UINavPCComponent_eventGetEnhancedInputKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::UINavPCComponent_eventGetEnhancedInputKeys_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics
	{
		struct UINavPCComponent_eventGetEnhancedInputText_Parms
		{
			const UInputAction* Action;
			EInputAxis Axis;
			EAxisType Scale;
			EInputRestriction InputRestriction;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputRestriction;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputText_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputText_Parms, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis_MetaData) }; // 764495711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputText_Parms, Scale), Z_Construct_UEnum_UINavigation_EAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale_MetaData) }; // 3329478307
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction = { "InputRestriction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputText_Parms, InputRestriction), Z_Construct_UEnum_UINavigation_EInputRestriction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction_MetaData) }; // 1840118431
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetEnhancedInputText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_InputRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get first found Icon associated with the given enhanced input action\n//Will search the icon table\n" },
#endif
		{ "CPP_Default_Axis", "X" },
		{ "CPP_Default_InputRestriction", "None" },
		{ "CPP_Default_Scale", "None" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get first found Icon associated with the given enhanced input action\nWill search the icon table" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetEnhancedInputText", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::UINavPCComponent_eventGetEnhancedInputText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::UINavPCComponent_eventGetEnhancedInputText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics
	{
		struct UINavPCComponent_eventGetInputMode_Parms
		{
			EInputMode ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetInputMode_Parms, ReturnValue), Z_Construct_UEnum_UINavigation_EInputMode, METADATA_PARAMS(0, nullptr) }; // 3744772876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the currently used input mode\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the currently used input mode" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetInputMode", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::UINavPCComponent_eventGetInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::UINavPCComponent_eventGetInputMode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics
	{
		struct UINavPCComponent_eventGetKeyFromAxis_Parms
		{
			FKey Key;
			bool bPositive;
			EInputAxis Axis;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_bPositive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositive;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyFromAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Key_MetaData) }; // 46000949
	void Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_bPositive_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGetKeyFromAxis_Parms*)Obj)->bPositive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_bPositive = { "bPositive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGetKeyFromAxis_Parms), &Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_bPositive_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyFromAxis_Parms, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis_MetaData) }; // 764495711
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyFromAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_bPositive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "CPP_Default_Axis", "X" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetKeyFromAxis", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::UINavPCComponent_eventGetKeyFromAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::UINavPCComponent_eventGetKeyFromAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics
	{
		struct UINavPCComponent_eventGetKeyIcon_Parms
		{
			FKey Key;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyIcon_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_Key_MetaData) }; // 46000949
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetKeyIcon", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::UINavPCComponent_eventGetKeyIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::UINavPCComponent_eventGetKeyIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics
	{
		struct UINavPCComponent_eventGetKeyText_Parms
		{
			FKey Key;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyText_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_Key_MetaData) }; // 46000949
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetKeyText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetKeyText", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::UINavPCComponent_eventGetKeyText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::UINavPCComponent_eventGetKeyText_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetKeyText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetKeyText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics
	{
		struct UINavPCComponent_eventGetOppositeAxis2DAxis_Parms
		{
			FKey Key;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetOppositeAxis2DAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_Key_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetOppositeAxis2DAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetOppositeAxis2DAxis", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::UINavPCComponent_eventGetOppositeAxis2DAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::UINavPCComponent_eventGetOppositeAxis2DAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics
	{
		struct UINavPCComponent_eventGetOppositeAxisKey_Parms
		{
			FKey Key;
			bool bOutIsPositive;
			FKey ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_bOutIsPositive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutIsPositive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetOppositeAxisKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_Key_MetaData) }; // 46000949
	void Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_bOutIsPositive_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGetOppositeAxisKey_Parms*)Obj)->bOutIsPositive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_bOutIsPositive = { "bOutIsPositive", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGetOppositeAxisKey_Parms), &Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_bOutIsPositive_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetOppositeAxisKey_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_ReturnValue_MetaData) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_bOutIsPositive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetOppositeAxisKey", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::UINavPCComponent_eventGetOppositeAxisKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::UINavPCComponent_eventGetOppositeAxisKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics
	{
		struct UINavPCComponent_eventGetPC_Parms
		{
			APlayerController* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetPC_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetPC", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::UINavPCComponent_eventGetPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::UINavPCComponent_eventGetPC_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics
	{
		struct UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms
		{
			const UInputAction* Action;
			EInputAxis Axis;
			EAxisType Scale;
			EInputRestriction InputRestriction;
			TSoftObjectPtr<UTexture2D> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputRestriction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRestriction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputRestriction;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Action_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms, Axis), Z_Construct_UEnum_UINavigation_EInputAxis, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis_MetaData) }; // 764495711
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms, Scale), Z_Construct_UEnum_UINavigation_EAxisType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale_MetaData) }; // 3329478307
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction = { "InputRestriction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms, InputRestriction), Z_Construct_UEnum_UINavigation_EInputRestriction, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction_MetaData) }; // 1840118431
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_InputRestriction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get first found Icon associated with the given enhanced input action\n//Will search the icon table\n" },
#endif
		{ "CPP_Default_Axis", "X" },
		{ "CPP_Default_InputRestriction", "None" },
		{ "CPP_Default_Scale", "None" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get first found Icon associated with the given enhanced input action\nWill search the icon table" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetSoftEnhancedInputIcon", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::UINavPCComponent_eventGetSoftEnhancedInputIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics
	{
		struct UINavPCComponent_eventGetSoftKeyIcon_Parms
		{
			FKey Key;
			TSoftObjectPtr<UTexture2D> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftKeyIcon_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_Key_MetaData) }; // 46000949
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetSoftKeyIcon_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetSoftKeyIcon", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::UINavPCComponent_eventGetSoftKeyIcon_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::UINavPCComponent_eventGetSoftKeyIcon_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics
	{
		struct UINavPCComponent_eventGetThumbstickDelta_Parms
		{
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGetThumbstickDelta_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GetThumbstickDelta", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::UINavPCComponent_eventGetThumbstickDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::UINavPCComponent_eventGetThumbstickDelta_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics
	{
		struct UINavPCComponent_eventGoToBuiltWidget_Parms
		{
			UUINavWidget* NewWidget;
			bool bRemoveParent;
			bool bDestroyParent;
			int32 ZOrder;
			UUINavWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveParent_MetaData[];
#endif
		static void NewProp_bRemoveParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyParent_MetaData[];
#endif
		static void NewProp_bDestroyParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGoToBuiltWidget_Parms, NewWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_NewWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGoToBuiltWidget_Parms*)Obj)->bRemoveParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent = { "bRemoveParent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGoToBuiltWidget_Parms), &Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGoToBuiltWidget_Parms*)Obj)->bDestroyParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent = { "bDestroyParent", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGoToBuiltWidget_Parms), &Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGoToBuiltWidget_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGoToBuiltWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_NewWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bRemoveParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_bDestroyParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Adds given widget to screen (strongly recommended over manual alternative)\n\x09*\n\x09*\x09@param\x09NewWidget  Object instance of the UINavWidget to add to the screen\n\x09*\x09@param\x09""bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n\x09*\x09@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n\x09*\x09@param  ZOrder Order to display the widget\n\x09*/" },
#endif
		{ "CPP_Default_bDestroyParent", "false" },
		{ "CPP_Default_ZOrder", "0" },
		{ "DeterminesOutputType", "NewWidgetClass" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds given widget to screen (strongly recommended over manual alternative)\n\n@param  NewWidget  Object instance of the UINavWidget to add to the screen\n@param  bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n@param  ZOrder Order to display the widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GoToBuiltWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::UINavPCComponent_eventGoToBuiltWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::UINavPCComponent_eventGoToBuiltWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics
	{
		struct UINavPCComponent_eventGoToWidget_Parms
		{
			TSubclassOf<UUINavWidget>  NewWidgetClass;
			bool bRemoveParent;
			bool bDestroyParent;
			int32 ZOrder;
			UUINavWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveParent_MetaData[];
#endif
		static void NewProp_bRemoveParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyParent_MetaData[];
#endif
		static void NewProp_bDestroyParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
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
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGoToWidget_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGoToWidget_Parms*)Obj)->bRemoveParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent = { "bRemoveParent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGoToWidget_Parms), &Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent_SetBit(void* Obj)
	{
		((UINavPCComponent_eventGoToWidget_Parms*)Obj)->bDestroyParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent = { "bDestroyParent", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventGoToWidget_Parms), &Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGoToWidget_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventGoToWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_NewWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bRemoveParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_bDestroyParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Adds given widget to screen (strongly recommended over manual alternative)\n\x09*\n\x09*\x09@param\x09NewWidgetClass  The class of the widget to add to the screen\n\x09*\x09@param\x09""bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n\x09*\x09@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n\x09*\x09@param  ZOrder Order to display the widget\n\x09*/" },
#endif
		{ "CPP_Default_bDestroyParent", "false" },
		{ "CPP_Default_ZOrder", "0" },
		{ "DeterminesOutputType", "NewWidgetClass" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds given widget to screen (strongly recommended over manual alternative)\n\n@param  NewWidgetClass  The class of the widget to add to the screen\n@param  bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n@param  ZOrder Order to display the widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "GoToWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::UINavPCComponent_eventGoToWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::UINavPCComponent_eventGoToWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_GoToWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_GoToWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics
	{
		struct UINavPCComponent_eventHidingMouseCursor_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventHidingMouseCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventHidingMouseCursor_Parms), &Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "HidingMouseCursor", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::UINavPCComponent_eventHidingMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::UINavPCComponent_eventHidingMouseCursor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics
	{
		struct UINavPCComponent_eventIsAxis_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventIsAxis_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_Key_MetaData) }; // 46000949
	void Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsAxis_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsAxis_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsAxis", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::UINavPCComponent_eventIsAxis_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::UINavPCComponent_eventIsAxis_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics
	{
		struct UINavPCComponent_eventIsAxis2D_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventIsAxis2D_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_Key_MetaData), Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_Key_MetaData) }; // 46000949
	void Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsAxis2D_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsAxis2D_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsAxis2D", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::UINavPCComponent_eventIsAxis2D_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::UINavPCComponent_eventIsAxis2D_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsAxis2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsAxis2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics
	{
		struct UINavPCComponent_eventIsMovingThumbstick_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsMovingThumbstick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsMovingThumbstick_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsMovingThumbstick", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::UINavPCComponent_eventIsMovingThumbstick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::UINavPCComponent_eventIsMovingThumbstick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics
	{
		struct UINavPCComponent_eventIsUsingGamepad_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsUsingGamepad_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsUsingGamepad_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsUsingGamepad", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::UINavPCComponent_eventIsUsingGamepad_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::UINavPCComponent_eventIsUsingGamepad_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics
	{
		struct UINavPCComponent_eventIsUsingKeyboard_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsUsingKeyboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsUsingKeyboard_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsUsingKeyboard", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::UINavPCComponent_eventIsUsingKeyboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::UINavPCComponent_eventIsUsingKeyboard_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics
	{
		struct UINavPCComponent_eventIsUsingMouse_Parms
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
	void Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsUsingMouse_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsUsingMouse_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsUsingMouse", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::UINavPCComponent_eventIsUsingMouse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::UINavPCComponent_eventIsUsingMouse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics
	{
		struct UINavPCComponent_eventIsWidgetActive_Parms
		{
			const UUINavWidget* UINavWidget;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UINavWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UINavWidget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_UINavWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_UINavWidget = { "UINavWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventIsWidgetActive_Parms, UINavWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_UINavWidget_MetaData), Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_UINavWidget_MetaData) };
	void Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavPCComponent_eventIsWidgetActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventIsWidgetActive_Parms), &Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_UINavWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "IsWidgetActive", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::UINavPCComponent_eventIsWidgetActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::UINavPCComponent_eventIsWidgetActive_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics
	{
		struct UINavPCComponent_eventNavigateInDirection_Parms
		{
			EUINavigation Direction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventNavigateInDirection_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction_MetaData), Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction_MetaData) }; // 995543793
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "NavigateInDirection", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::UINavPCComponent_eventNavigateInDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::UINavPCComponent_eventNavigateInDirection_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics
	{
		struct UINavPCComponent_eventNotifyNavigatedTo_Parms
		{
			UUINavWidget* NavigatedWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigatedWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NavigatedWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::NewProp_NavigatedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::NewProp_NavigatedWidget = { "NavigatedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventNotifyNavigatedTo_Parms, NavigatedWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::NewProp_NavigatedWidget_MetaData), Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::NewProp_NavigatedWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::NewProp_NavigatedWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "NotifyNavigatedTo", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::UINavPCComponent_eventNotifyNavigatedTo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::UINavPCComponent_eventNotifyNavigatedTo_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "RefreshNavigationKeys", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics
	{
		struct UINavPCComponent_eventRemoveInputContext_Parms
		{
			const UInputMappingContext* Context;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventRemoveInputContext_Parms, Context), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::NewProp_Context_MetaData), Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::NewProp_Context_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::NewProp_Context,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "RemoveInputContext", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::UINavPCComponent_eventRemoveInputContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::UINavPCComponent_eventRemoveInputContext_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics
	{
		struct UINavPCComponent_eventSetActiveWidget_Parms
		{
			UUINavWidget* NewActiveWidget;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActiveWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::NewProp_NewActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::NewProp_NewActiveWidget = { "NewActiveWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavPCComponent_eventSetActiveWidget_Parms, NewActiveWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::NewProp_NewActiveWidget_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::NewProp_NewActiveWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::NewProp_NewActiveWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetActiveWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::UINavPCComponent_eventSetActiveWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::UINavPCComponent_eventSetActiveWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics
	{
		struct UINavPCComponent_eventSetAllowAllMenuInput_Parms
		{
			bool bAllowInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInput_MetaData[];
#endif
		static void NewProp_bAllowInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput_SetBit(void* Obj)
	{
		((UINavPCComponent_eventSetAllowAllMenuInput_Parms*)Obj)->bAllowInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput = { "bAllowInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventSetAllowAllMenuInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::NewProp_bAllowInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetAllowAllMenuInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::UINavPCComponent_eventSetAllowAllMenuInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::UINavPCComponent_eventSetAllowAllMenuInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics
	{
		struct UINavPCComponent_eventSetAllowDirectionalInput_Parms
		{
			bool bAllowInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInput_MetaData[];
#endif
		static void NewProp_bAllowInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput_SetBit(void* Obj)
	{
		((UINavPCComponent_eventSetAllowDirectionalInput_Parms*)Obj)->bAllowInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput = { "bAllowInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventSetAllowDirectionalInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::NewProp_bAllowInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetAllowDirectionalInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::UINavPCComponent_eventSetAllowDirectionalInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::UINavPCComponent_eventSetAllowDirectionalInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics
	{
		struct UINavPCComponent_eventSetAllowReturnInput_Parms
		{
			bool bAllowInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInput_MetaData[];
#endif
		static void NewProp_bAllowInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput_SetBit(void* Obj)
	{
		((UINavPCComponent_eventSetAllowReturnInput_Parms*)Obj)->bAllowInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput = { "bAllowInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventSetAllowReturnInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::NewProp_bAllowInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetAllowReturnInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::UINavPCComponent_eventSetAllowReturnInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::UINavPCComponent_eventSetAllowReturnInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics
	{
		struct UINavPCComponent_eventSetAllowSectionInput_Parms
		{
			bool bAllowInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInput_MetaData[];
#endif
		static void NewProp_bAllowInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput_SetBit(void* Obj)
	{
		((UINavPCComponent_eventSetAllowSectionInput_Parms*)Obj)->bAllowInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput = { "bAllowInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventSetAllowSectionInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::NewProp_bAllowInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetAllowSectionInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::UINavPCComponent_eventSetAllowSectionInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::UINavPCComponent_eventSetAllowSectionInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics
	{
		struct UINavPCComponent_eventSetAllowSelectInput_Parms
		{
			bool bAllowInput;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInput_MetaData[];
#endif
		static void NewProp_bAllowInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput_SetBit(void* Obj)
	{
		((UINavPCComponent_eventSetAllowSelectInput_Parms*)Obj)->bAllowInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput = { "bAllowInput", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventSetAllowSelectInput_Parms), &Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::NewProp_bAllowInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetAllowSelectInput", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::UINavPCComponent_eventSetAllowSelectInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::UINavPCComponent_eventSetAllowSelectInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics
	{
		struct UINavPCComponent_eventSetShowMouseCursor_Parms
		{
			bool bShowMouse;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowMouse_MetaData[];
#endif
		static void NewProp_bShowMouse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse_SetBit(void* Obj)
	{
		((UINavPCComponent_eventSetShowMouseCursor_Parms*)Obj)->bShowMouse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse = { "bShowMouse", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavPCComponent_eventSetShowMouseCursor_Parms), &Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse_MetaData), Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::NewProp_bShowMouse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SetShowMouseCursor", nullptr, nullptr, Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::UINavPCComponent_eventSetShowMouseCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::UINavPCComponent_eventSetShowMouseCursor_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SimulateMouseClick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SimulateMousePress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavPCComponent, nullptr, "SimulateMouseRelease", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavPCComponent);
	UClass* Z_Construct_UClass_UUINavPCComponent_NoRegister()
	{
		return UUINavPCComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUINavPCComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveSubWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveSubWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListeningInputBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ListeningInputBox;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedInputContexts_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedInputContexts_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedInputContexts;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AppliedInputContexts_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppliedInputContexts_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppliedInputContexts_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AppliedInputContexts;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnalogDirectionalInput_MetaData[];
#endif
		static void NewProp_bUseAnalogDirectionalInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnalogDirectionalInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChainNavigation_MetaData[];
#endif
		static void NewProp_bChainNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChainNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputHeldWaitTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InputHeldWaitTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationChainFrequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NavigationChainFrequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UseThumbstickAsMouse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseThumbstickAsMouse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UseThumbstickAsMouse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScrollWithRightThumbstick_MetaData[];
#endif
		static void NewProp_bScrollWithRightThumbstick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScrollWithRightThumbstick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickScrollDeadzone_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightThumbstickScrollDeadzone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_AutoHideMouse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AutoHideMouse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoHideMouse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbstickCursorSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ThumbstickCursorSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightThumbstickScrollSensitivity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RightThumbstickScrollSensitivity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RebindThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RebindThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadKeyIconData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadKeyIconData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseKeyIconData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyboardMouseKeyIconData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamepadKeyNameData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GamepadKeyNameData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyboardMouseKeyNameData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyboardMouseKeyNameData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EnhancedInputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTypeChangedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_InputTypeChangedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateInputIconsDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UpdateInputIconsDelegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavPCComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavPCComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavPCComponent_AddInputContext, "AddInputContext" }, // 2182779281
		{ &Z_Construct_UFunction_UUINavPCComponent_AllowsAllMenuInput, "AllowsAllMenuInput" }, // 2250534004
		{ &Z_Construct_UFunction_UUINavPCComponent_AllowsDirectionalInput, "AllowsDirectionalInput" }, // 2684010081
		{ &Z_Construct_UFunction_UUINavPCComponent_AllowsReturnInput, "AllowsReturnInput" }, // 266187516
		{ &Z_Construct_UFunction_UUINavPCComponent_AllowsSectionInput, "AllowsSectionInput" }, // 2187803733
		{ &Z_Construct_UFunction_UUINavPCComponent_AllowsSelectInput, "AllowsSelectInput" }, // 333241507
		{ &Z_Construct_UFunction_UUINavPCComponent_GetActiveSubWidget, "GetActiveSubWidget" }, // 4211008608
		{ &Z_Construct_UFunction_UUINavPCComponent_GetActiveWidget, "GetActiveWidget" }, // 4178354174
		{ &Z_Construct_UFunction_UUINavPCComponent_GetAxis1DFromAxis2D, "GetAxis1DFromAxis2D" }, // 131334782
		{ &Z_Construct_UFunction_UUINavPCComponent_GetAxis2DFromAxis1D, "GetAxis2DFromAxis1D" }, // 3843560251
		{ &Z_Construct_UFunction_UUINavPCComponent_GetAxisFromKey, "GetAxisFromKey" }, // 4220484890
		{ &Z_Construct_UFunction_UUINavPCComponent_GetAxisFromScaledKey, "GetAxisFromScaledKey" }, // 91904384
		{ &Z_Construct_UFunction_UUINavPCComponent_GetCurrentInputType, "GetCurrentInputType" }, // 2552025666
		{ &Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputComponent, "GetEnhancedInputComponent" }, // 1648813547
		{ &Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputIcon, "GetEnhancedInputIcon" }, // 2554644273
		{ &Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKey, "GetEnhancedInputKey" }, // 2596303956
		{ &Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputKeys, "GetEnhancedInputKeys" }, // 734098348
		{ &Z_Construct_UFunction_UUINavPCComponent_GetEnhancedInputText, "GetEnhancedInputText" }, // 1191597261
		{ &Z_Construct_UFunction_UUINavPCComponent_GetInputMode, "GetInputMode" }, // 1714361857
		{ &Z_Construct_UFunction_UUINavPCComponent_GetKeyFromAxis, "GetKeyFromAxis" }, // 355725878
		{ &Z_Construct_UFunction_UUINavPCComponent_GetKeyIcon, "GetKeyIcon" }, // 2718642994
		{ &Z_Construct_UFunction_UUINavPCComponent_GetKeyText, "GetKeyText" }, // 4207566482
		{ &Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxis2DAxis, "GetOppositeAxis2DAxis" }, // 2041307965
		{ &Z_Construct_UFunction_UUINavPCComponent_GetOppositeAxisKey, "GetOppositeAxisKey" }, // 2174338792
		{ &Z_Construct_UFunction_UUINavPCComponent_GetPC, "GetPC" }, // 1178645029
		{ &Z_Construct_UFunction_UUINavPCComponent_GetSoftEnhancedInputIcon, "GetSoftEnhancedInputIcon" }, // 146208747
		{ &Z_Construct_UFunction_UUINavPCComponent_GetSoftKeyIcon, "GetSoftKeyIcon" }, // 2956068087
		{ &Z_Construct_UFunction_UUINavPCComponent_GetThumbstickDelta, "GetThumbstickDelta" }, // 2357755638
		{ &Z_Construct_UFunction_UUINavPCComponent_GoToBuiltWidget, "GoToBuiltWidget" }, // 3966070110
		{ &Z_Construct_UFunction_UUINavPCComponent_GoToWidget, "GoToWidget" }, // 78705329
		{ &Z_Construct_UFunction_UUINavPCComponent_HidingMouseCursor, "HidingMouseCursor" }, // 2381960805
		{ &Z_Construct_UFunction_UUINavPCComponent_IsAxis, "IsAxis" }, // 1575976321
		{ &Z_Construct_UFunction_UUINavPCComponent_IsAxis2D, "IsAxis2D" }, // 729335870
		{ &Z_Construct_UFunction_UUINavPCComponent_IsMovingThumbstick, "IsMovingThumbstick" }, // 4022814018
		{ &Z_Construct_UFunction_UUINavPCComponent_IsUsingGamepad, "IsUsingGamepad" }, // 3381913077
		{ &Z_Construct_UFunction_UUINavPCComponent_IsUsingKeyboard, "IsUsingKeyboard" }, // 1253745195
		{ &Z_Construct_UFunction_UUINavPCComponent_IsUsingMouse, "IsUsingMouse" }, // 309555679
		{ &Z_Construct_UFunction_UUINavPCComponent_IsWidgetActive, "IsWidgetActive" }, // 1312483106
		{ &Z_Construct_UFunction_UUINavPCComponent_NavigateInDirection, "NavigateInDirection" }, // 756888623
		{ &Z_Construct_UFunction_UUINavPCComponent_NotifyNavigatedTo, "NotifyNavigatedTo" }, // 1182254681
		{ &Z_Construct_UFunction_UUINavPCComponent_RefreshNavigationKeys, "RefreshNavigationKeys" }, // 3693729799
		{ &Z_Construct_UFunction_UUINavPCComponent_RemoveInputContext, "RemoveInputContext" }, // 347253675
		{ &Z_Construct_UFunction_UUINavPCComponent_SetActiveWidget, "SetActiveWidget" }, // 3134940521
		{ &Z_Construct_UFunction_UUINavPCComponent_SetAllowAllMenuInput, "SetAllowAllMenuInput" }, // 4254695553
		{ &Z_Construct_UFunction_UUINavPCComponent_SetAllowDirectionalInput, "SetAllowDirectionalInput" }, // 947511146
		{ &Z_Construct_UFunction_UUINavPCComponent_SetAllowReturnInput, "SetAllowReturnInput" }, // 232396819
		{ &Z_Construct_UFunction_UUINavPCComponent_SetAllowSectionInput, "SetAllowSectionInput" }, // 3005713165
		{ &Z_Construct_UFunction_UUINavPCComponent_SetAllowSelectInput, "SetAllowSelectInput" }, // 585679118
		{ &Z_Construct_UFunction_UUINavPCComponent_SetShowMouseCursor, "SetShowMouseCursor" }, // 153014706
		{ &Z_Construct_UFunction_UUINavPCComponent_SimulateMouseClick, "SimulateMouseClick" }, // 2705185210
		{ &Z_Construct_UFunction_UUINavPCComponent_SimulateMousePress, "SimulateMousePress" }, // 4423815
		{ &Z_Construct_UFunction_UUINavPCComponent_SimulateMouseRelease, "SimulateMouseRelease" }, // 1054647187
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "UINavPCComponent.h" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveWidget_MetaData[] = {
		{ "Category", "UINavController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveWidget = { "ActiveWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, ActiveWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveWidget_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveSubWidget_MetaData[] = {
		{ "Category", "UINavController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveSubWidget = { "ActiveSubWidget", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, ActiveSubWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveSubWidget_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveSubWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_PC_MetaData[] = {
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_PC_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_PC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ListeningInputBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ListeningInputBox = { "ListeningInputBox", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, ListeningInputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ListeningInputBox_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ListeningInputBox_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts_Inner = { "CachedInputContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts = { "CachedInputContexts", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, CachedInputContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_ValueProp = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_Key_KeyProp = { "AppliedInputContexts_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_MetaData[] = {
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts = { "AppliedInputContexts", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, AppliedInputContexts), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType_MetaData[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType = { "CurrentInputType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, CurrentInputType), Z_Construct_UEnum_UINavigation_EInputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType_MetaData) }; // 431819982
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates whether the left analog stick should be used for directional navigation\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the left analog stick should be used for directional navigation" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput_SetBit(void* Obj)
	{
		((UUINavPCComponent*)Obj)->bUseAnalogDirectionalInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput = { "bUseAnalogDirectionalInput", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavPCComponent), &Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates whether navigation will occur periodically after the player\n\x09holds down a navigation key\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether navigation will occur periodically after the player\nholds down a navigation key" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation_SetBit(void* Obj)
	{
		((UUINavPCComponent*)Obj)->bChainNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation = { "bChainNavigation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavPCComponent), &Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputHeldWaitTime_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The amount of time the player needs to hold a key for the navigation to\n\x09start occuring periodically\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time the player needs to hold a key for the navigation to\nstart occuring periodically" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputHeldWaitTime = { "InputHeldWaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, InputHeldWaitTime), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputHeldWaitTime_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputHeldWaitTime_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_NavigationChainFrequency_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The amount of time that passes before the navigation chains further\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of time that passes before the navigation chains further" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_NavigationChainFrequency = { "NavigationChainFrequency", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, NavigationChainFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_NavigationChainFrequency_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_NavigationChainFrequency_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates whether the controller should use the left or right stick as mouse.\n\x09If the active UINavWidget has this set to a value different than None, it will override this one.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the controller should use the left or right stick as mouse.\nIf the active UINavWidget has this set to a value different than None, it will override this one." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse = { "UseThumbstickAsMouse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, UseThumbstickAsMouse), Z_Construct_UEnum_UINavigation_EThumbstickAsMouse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse_MetaData) }; // 3468446706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates whether you can scroll through scroll boxes using the gamepad's right thumbstick\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether you can scroll through scroll boxes using the gamepad's right thumbstick" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick_SetBit(void* Obj)
	{
		((UUINavPCComponent*)Obj)->bScrollWithRightThumbstick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick = { "bScrollWithRightThumbstick", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavPCComponent), &Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollDeadzone_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates the deadzone to use when scrolling with the right thumbstick\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the deadzone to use when scrolling with the right thumbstick" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollDeadzone = { "RightThumbstickScrollDeadzone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, RightThumbstickScrollDeadzone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollDeadzone_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollDeadzone_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates whether the controller should automatically hide the mouse cursor when using certain input types.\n\x09In order for this to work, you have to set your GameViewportClient to UINavGameViewportClient in the Project Settings,\n\x09or your custom ViewportClient class must inherit from UINavGameViewportClient and not override the GetCursor function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether the controller should automatically hide the mouse cursor when using certain input types.\nIn order for this to work, you have to set your GameViewportClient to UINavGameViewportClient in the Project Settings,\nor your custom ViewportClient class must inherit from UINavGameViewportClient and not override the GetCursor function." },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse = { "AutoHideMouse", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, AutoHideMouse), Z_Construct_UEnum_UINavigation_EAutoHideMouse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse_MetaData) }; // 2204506575
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ThumbstickCursorSensitivity_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The sensitivity of the cursor when moved with the left stick\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sensitivity of the cursor when moved with the left stick" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ThumbstickCursorSensitivity = { "ThumbstickCursorSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, ThumbstickCursorSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ThumbstickCursorSensitivity_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ThumbstickCursorSensitivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollSensitivity_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The sensitivity of scrolling when using the right thumbstick\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The sensitivity of scrolling when using the right thumbstick" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollSensitivity = { "RightThumbstickScrollSensitivity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, RightThumbstickScrollSensitivity), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollSensitivity_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollSensitivity_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RebindThreshold_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The required value for an axis to be considered for rebinding\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The required value for an axis to be considered for rebinding" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RebindThreshold = { "RebindThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, RebindThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RebindThreshold_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RebindThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyIconData_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Holds the key icons for gamepad\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the key icons for gamepad" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyIconData = { "GamepadKeyIconData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, GamepadKeyIconData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyIconData_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyIconData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyIconData_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Holds the key icons for mouse and keyboard\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the key icons for mouse and keyboard" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyIconData = { "KeyboardMouseKeyIconData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, KeyboardMouseKeyIconData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyIconData_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyIconData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyNameData_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Holds the key names for gamepad\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the key names for gamepad" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyNameData = { "GamepadKeyNameData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, GamepadKeyNameData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyNameData_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyNameData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyNameData_MetaData[] = {
		{ "Category", "UINavController" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Holds the key names for mouse and keyboard\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the key names for mouse and keyboard" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyNameData = { "KeyboardMouseKeyNameData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, KeyboardMouseKeyNameData), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyNameData_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyNameData_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_EnhancedInputContext_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_EnhancedInputContext = { "EnhancedInputContext", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, EnhancedInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_EnhancedInputContext_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_EnhancedInputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputTypeChangedDelegate_MetaData[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputTypeChangedDelegate = { "InputTypeChangedDelegate", nullptr, (EPropertyFlags)0x0010100010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, InputTypeChangedDelegate), Z_Construct_UDelegateFunction_UINavigation_InputTypeChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputTypeChangedDelegate_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputTypeChangedDelegate_MetaData) }; // 142874487
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UpdateInputIconsDelegate_MetaData[] = {
		{ "Category", "UINavController" },
		{ "ModuleRelativePath", "Public/UINavPCComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UpdateInputIconsDelegate = { "UpdateInputIconsDelegate", nullptr, (EPropertyFlags)0x0010100010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavPCComponent, UpdateInputIconsDelegate), Z_Construct_UDelegateFunction_UINavigation_UpdateInputIconsDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UpdateInputIconsDelegate_MetaData), Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UpdateInputIconsDelegate_MetaData) }; // 151106176
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavPCComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ActiveSubWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ListeningInputBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CachedInputContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AppliedInputContexts,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_CurrentInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bUseAnalogDirectionalInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bChainNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputHeldWaitTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_NavigationChainFrequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UseThumbstickAsMouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_bScrollWithRightThumbstick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollDeadzone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_AutoHideMouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_ThumbstickCursorSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RightThumbstickScrollSensitivity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_RebindThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyIconData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyIconData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_GamepadKeyNameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_KeyboardMouseKeyNameData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_EnhancedInputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_InputTypeChangedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavPCComponent_Statics::NewProp_UpdateInputIconsDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavPCComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavPCComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavPCComponent_Statics::ClassParams = {
		&UUINavPCComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavPCComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavPCComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavPCComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavPCComponent()
	{
		if (!Z_Registration_Info_UClass_UUINavPCComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavPCComponent.OuterSingleton, Z_Construct_UClass_UUINavPCComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavPCComponent.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavPCComponent>()
	{
		return UUINavPCComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavPCComponent);
	UUINavPCComponent::~UUINavPCComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics::ScriptStructInfo[] = {
		{ FAxis2D_Keys::StaticStruct, Z_Construct_UScriptStruct_FAxis2D_Keys_Statics::NewStructOps, TEXT("Axis2D_Keys"), &Z_Registration_Info_UScriptStruct_Axis2D_Keys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAxis2D_Keys), 880608569U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavPCComponent, UUINavPCComponent::StaticClass, TEXT("UUINavPCComponent"), &Z_Registration_Info_UClass_UUINavPCComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavPCComponent), 1649774122U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_2411005507(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
