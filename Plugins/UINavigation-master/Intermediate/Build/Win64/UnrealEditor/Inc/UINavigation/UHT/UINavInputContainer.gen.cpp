// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavInputContainer.h"
#include "Data/InputContainerEnhancedActionData.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavInputContainer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBase_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_USwapKeysWidget_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputBox_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputContainer();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputContainer_NoRegister();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputRestriction();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ERevertRebindReason();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputContainerEnhancedActionDataArray();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(UUINavInputContainer::execSwapKeysDecided)
	{
		P_GET_OBJECT(UPromptDataBase,Z_Param_PromptData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapKeysDecided(Z_Param_PromptData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execRespectsRestriction)
	{
		P_GET_STRUCT(FKey,Z_Param_CompareKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RespectsRestriction(Z_Param_CompareKey,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execCanUseKey)
	{
		P_GET_OBJECT(UUINavInputBox,Z_Param_InputBox);
		P_GET_STRUCT(FKey,Z_Param_CompareKey);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCollidingActionIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutCollidingKeyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanUseKey(Z_Param_InputBox,Z_Param_CompareKey,Z_Param_Out_OutCollidingActionIndex,Z_Param_Out_OutCollidingKeyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execGetInputBoxAtIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavInputBox**)Z_Param__Result=P_THIS->GetInputBoxAtIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execResetKeyMappings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetKeyMappings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execOnRebindCancelled)
	{
		P_GET_ENUM(ERevertRebindReason,Z_Param_RevertReason);
		P_GET_STRUCT(FKey,Z_Param_PressedKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRebindCancelled_Implementation(ERevertRebindReason(Z_Param_RevertReason),Z_Param_PressedKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execOnKeyRebinded)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InputName);
		P_GET_STRUCT(FKey,Z_Param_OldKey);
		P_GET_STRUCT(FKey,Z_Param_NewKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKeyRebinded_Implementation(Z_Param_InputName,Z_Param_OldKey,Z_Param_NewKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputContainer::execOnAddInputBox)
	{
		P_GET_OBJECT(UUINavInputBox,Z_Param_NewInputBox);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddInputBox_Implementation(Z_Param_NewInputBox);
		P_NATIVE_END;
	}
	struct UINavInputContainer_eventOnAddInputBox_Parms
	{
		UUINavInputBox* NewInputBox;
	};
	struct UINavInputContainer_eventOnKeyRebinded_Parms
	{
		FName InputName;
		FKey OldKey;
		FKey NewKey;
	};
	struct UINavInputContainer_eventOnRebindCancelled_Parms
	{
		ERevertRebindReason RevertReason;
		FKey PressedKey;
	};
	static FName NAME_UUINavInputContainer_OnAddInputBox = FName(TEXT("OnAddInputBox"));
	void UUINavInputContainer::OnAddInputBox(UUINavInputBox* NewInputBox)
	{
		UINavInputContainer_eventOnAddInputBox_Parms Parms;
		Parms.NewInputBox=NewInputBox;
		ProcessEvent(FindFunctionChecked(NAME_UUINavInputContainer_OnAddInputBox),&Parms);
	}
	static FName NAME_UUINavInputContainer_OnKeyRebinded = FName(TEXT("OnKeyRebinded"));
	void UUINavInputContainer::OnKeyRebinded(FName InputName, FKey OldKey, FKey NewKey)
	{
		UINavInputContainer_eventOnKeyRebinded_Parms Parms;
		Parms.InputName=InputName;
		Parms.OldKey=OldKey;
		Parms.NewKey=NewKey;
		ProcessEvent(FindFunctionChecked(NAME_UUINavInputContainer_OnKeyRebinded),&Parms);
	}
	static FName NAME_UUINavInputContainer_OnRebindCancelled = FName(TEXT("OnRebindCancelled"));
	void UUINavInputContainer::OnRebindCancelled(ERevertRebindReason RevertReason, FKey PressedKey)
	{
		UINavInputContainer_eventOnRebindCancelled_Parms Parms;
		Parms.RevertReason=RevertReason;
		Parms.PressedKey=PressedKey;
		ProcessEvent(FindFunctionChecked(NAME_UUINavInputContainer_OnRebindCancelled),&Parms);
	}
	void UUINavInputContainer::StaticRegisterNativesUUINavInputContainer()
	{
		UClass* Class = UUINavInputContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUseKey", &UUINavInputContainer::execCanUseKey },
			{ "GetInputBoxAtIndex", &UUINavInputContainer::execGetInputBoxAtIndex },
			{ "OnAddInputBox", &UUINavInputContainer::execOnAddInputBox },
			{ "OnKeyRebinded", &UUINavInputContainer::execOnKeyRebinded },
			{ "OnRebindCancelled", &UUINavInputContainer::execOnRebindCancelled },
			{ "ResetKeyMappings", &UUINavInputContainer::execResetKeyMappings },
			{ "RespectsRestriction", &UUINavInputContainer::execRespectsRestriction },
			{ "SwapKeysDecided", &UUINavInputContainer::execSwapKeysDecided },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics
	{
		struct UINavInputContainer_eventCanUseKey_Parms
		{
			UUINavInputBox* InputBox;
			FKey CompareKey;
			int32 OutCollidingActionIndex;
			int32 OutCollidingKeyIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompareKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompareKey;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutCollidingActionIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OutCollidingKeyIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_InputBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_InputBox = { "InputBox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventCanUseKey_Parms, InputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_InputBox_MetaData), Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_InputBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_CompareKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_CompareKey = { "CompareKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventCanUseKey_Parms, CompareKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_CompareKey_MetaData), Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_CompareKey_MetaData) }; // 46000949
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_OutCollidingActionIndex = { "OutCollidingActionIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventCanUseKey_Parms, OutCollidingActionIndex), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_OutCollidingKeyIndex = { "OutCollidingKeyIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventCanUseKey_Parms, OutCollidingKeyIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavInputContainer_eventCanUseKey_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavInputContainer_eventCanUseKey_Parms), &Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_InputBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_CompareKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_OutCollidingActionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_OutCollidingKeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "CanUseKey", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::UINavInputContainer_eventCanUseKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::UINavInputContainer_eventCanUseKey_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_CanUseKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_CanUseKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics
	{
		struct UINavInputContainer_eventGetInputBoxAtIndex_Parms
		{
			int32 Index;
			UUINavInputBox* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventGetInputBoxAtIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_Index_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventGetInputBoxAtIndex_Parms, ReturnValue), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "GetInputBoxAtIndex", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::UINavInputContainer_eventGetInputBoxAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::UINavInputContainer_eventGetInputBoxAtIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInputBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewInputBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::NewProp_NewInputBox_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::NewProp_NewInputBox = { "NewInputBox", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventOnAddInputBox_Parms, NewInputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::NewProp_NewInputBox_MetaData), Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::NewProp_NewInputBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::NewProp_NewInputBox,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when a new input box is added\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a new input box is added" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "OnAddInputBox", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::PropPointers), sizeof(UINavInputContainer_eventOnAddInputBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavInputContainer_eventOnAddInputBox_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OldKey;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventOnKeyRebinded_Parms, InputName), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::NewProp_OldKey = { "OldKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventOnKeyRebinded_Parms, OldKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventOnKeyRebinded_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::NewProp_OldKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::NewProp_NewKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09*\x09""Called when key was successfully rebinded\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*       Called when key was successfully rebinded" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "OnKeyRebinded", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::PropPointers), sizeof(UINavInputContainer_eventOnKeyRebinded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavInputContainer_eventOnKeyRebinded_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_RevertReason_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RevertReason;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PressedKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::NewProp_RevertReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::NewProp_RevertReason = { "RevertReason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventOnRebindCancelled_Parms, RevertReason), Z_Construct_UEnum_UINavigation_ERevertRebindReason, METADATA_PARAMS(0, nullptr) }; // 2945599172
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::NewProp_PressedKey = { "PressedKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventOnRebindCancelled_Parms, PressedKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::NewProp_RevertReason_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::NewProp_RevertReason,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::NewProp_PressedKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09*\x09""Called when a rebind was cancelled, specifying the reason for the revert\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*       Called when a rebind was cancelled, specifying the reason for the revert" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "OnRebindCancelled", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::PropPointers), sizeof(UINavInputContainer_eventOnRebindCancelled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavInputContainer_eventOnRebindCancelled_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "ResetKeyMappings", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics
	{
		struct UINavInputContainer_eventRespectsRestriction_Parms
		{
			FKey CompareKey;
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompareKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompareKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_CompareKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_CompareKey = { "CompareKey", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventRespectsRestriction_Parms, CompareKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_CompareKey_MetaData), Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_CompareKey_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventRespectsRestriction_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_Index_MetaData), Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_Index_MetaData) };
	void Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavInputContainer_eventRespectsRestriction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavInputContainer_eventRespectsRestriction_Parms), &Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_CompareKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "RespectsRestriction", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::UINavInputContainer_eventRespectsRestriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::UINavInputContainer_eventRespectsRestriction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics
	{
		struct UINavInputContainer_eventSwapKeysDecided_Parms
		{
			const UPromptDataBase* PromptData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::NewProp_PromptData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::NewProp_PromptData = { "PromptData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavInputContainer_eventSwapKeysDecided_Parms, PromptData), Z_Construct_UClass_UPromptDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::NewProp_PromptData_MetaData), Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::NewProp_PromptData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::NewProp_PromptData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputContainer, nullptr, "SwapKeysDecided", nullptr, nullptr, Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::UINavInputContainer_eventSwapKeysDecided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::UINavInputContainer_eventSwapKeysDecided_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavInputContainer);
	UClass* Z_Construct_UClass_UUINavInputContainer_NoRegister()
	{
		return UUINavInputContainer::StaticClass();
	}
	struct Z_Construct_UClass_UUINavInputContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBoxesPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputBoxesPanel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfInputs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysPerInput_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_KeysPerInput;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputBoxes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBoxes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputBoxes;
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnhancedInputs_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EnhancedInputs;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputRestrictions_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputRestrictions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRestrictions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputRestrictions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyWhitelist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyWhitelist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyWhitelist;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyBlacklist_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyBlacklist_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyBlacklist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBox_BP_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputBox_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapKeysWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SwapKeysWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnKeysWidgetZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnKeysWidgetZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollapseInputBoxes_MetaData[];
#endif
		static void NewProp_bCollapseInputBoxes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollapseInputBoxes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyKeyText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_EmptyKeyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PressKeyText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_PressKeyText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapKeysTitleText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SwapKeysTitleText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwapKeysMessageText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_SwapKeysMessageText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavInputContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavInputContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavInputContainer_CanUseKey, "CanUseKey" }, // 776047109
		{ &Z_Construct_UFunction_UUINavInputContainer_GetInputBoxAtIndex, "GetInputBoxAtIndex" }, // 2188962855
		{ &Z_Construct_UFunction_UUINavInputContainer_OnAddInputBox, "OnAddInputBox" }, // 3307367103
		{ &Z_Construct_UFunction_UUINavInputContainer_OnKeyRebinded, "OnKeyRebinded" }, // 3088589494
		{ &Z_Construct_UFunction_UUINavInputContainer_OnRebindCancelled, "OnRebindCancelled" }, // 4098688957
		{ &Z_Construct_UFunction_UUINavInputContainer_ResetKeyMappings, "ResetKeyMappings" }, // 3941297917
		{ &Z_Construct_UFunction_UUINavInputContainer_RespectsRestriction, "RespectsRestriction" }, // 2111083569
		{ &Z_Construct_UFunction_UUINavInputContainer_SwapKeysDecided, "SwapKeysDecided" }, // 4001223439
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class contains the logic for aggregating several input boxes\n*/" },
#endif
		{ "IncludePath", "UINavInputContainer.h" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class contains the logic for aggregating several input boxes" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxesPanel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxesPanel = { "InputBoxesPanel", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, InputBoxesPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxesPanel_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxesPanel_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_NumberOfInputs_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_NumberOfInputs = { "NumberOfInputs", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, NumberOfInputs), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_NumberOfInputs_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_NumberOfInputs_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeysPerInput_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeysPerInput = { "KeysPerInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, KeysPerInput), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeysPerInput_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeysPerInput_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes_Inner = { "InputBoxes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes = { "InputBoxes", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, InputBoxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_ValueProp = { "EnhancedInputs", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FInputContainerEnhancedActionDataArray, METADATA_PARAMS(0, nullptr) }; // 3286114330
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_Key_KeyProp = { "EnhancedInputs_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs = { "EnhancedInputs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, EnhancedInputs), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_MetaData) }; // 3286114330
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_Inner = { "InputRestrictions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_UINavigation_EInputRestriction, METADATA_PARAMS(0, nullptr) }; // 1840118431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The restrictions for the type of input associated with each column\n\x09in the Input Container\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The restrictions for the type of input associated with each column\nin the Input Container" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions = { "InputRestrictions", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, InputRestrictions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_MetaData) }; // 1840118431
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist_Inner = { "KeyWhitelist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""A list of the keys that the player should only be able to use for the inputs\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of the keys that the player should only be able to use for the inputs" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist = { "KeyWhitelist", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, KeyWhitelist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist_MetaData) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist_Inner = { "KeyBlacklist", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09""A list of the keys that the player shouldn't be able to use for the inputs.\n\x09Only used if KeyWhitelist is empty.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of the keys that the player shouldn't be able to use for the inputs.\nOnly used if KeyWhitelist is empty." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist = { "KeyBlacklist", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, KeyBlacklist), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist_MetaData) }; // 46000949
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBox_BP_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBox_BP = { "InputBox_BP", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, InputBox_BP), Z_Construct_UClass_UClass, Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBox_BP_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBox_BP_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysWidgetClass_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09The widget class of the widget that will tell the player that 2 keys can be swapped.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget class of the widget that will tell the player that 2 keys can be swapped." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysWidgetClass = { "SwapKeysWidgetClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, SwapKeysWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USwapKeysWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysWidgetClass_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SpawnKeysWidgetZOrder_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SpawnKeysWidgetZOrder = { "SpawnKeysWidgetZOrder", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, SpawnKeysWidgetZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SpawnKeysWidgetZOrder_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SpawnKeysWidgetZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09Indicates whether unused input boxes will hidden or collapsed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether unused input boxes will hidden or collapsed" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes_SetBit(void* Obj)
	{
		((UUINavInputContainer*)Obj)->bCollapseInputBoxes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes = { "bCollapseInputBoxes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavInputContainer), &Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EmptyKeyText_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The text used for empty key buttons\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text used for empty key buttons" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EmptyKeyText = { "EmptyKeyText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, EmptyKeyText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EmptyKeyText_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EmptyKeyText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_PressKeyText_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The text used for notifying the player to press a key\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text used for notifying the player to press a key" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_PressKeyText = { "PressKeyText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, PressKeyText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_PressKeyText_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_PressKeyText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysTitleText_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The title text used for the swap keys widget\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The title text used for the swap keys widget" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysTitleText = { "SwapKeysTitleText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, SwapKeysTitleText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysTitleText_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysTitleText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysMessageText_MetaData[] = {
		{ "Category", "UINav Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The message text used for the swap keys widget\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavInputContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The message text used for the swap keys widget" },
#endif
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysMessageText = { "SwapKeysMessageText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputContainer, SwapKeysMessageText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysMessageText_MetaData), Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysMessageText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavInputContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxesPanel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_NumberOfInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeysPerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EnhancedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputRestrictions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyWhitelist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_KeyBlacklist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_InputBox_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SpawnKeysWidgetZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_bCollapseInputBoxes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_EmptyKeyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_PressKeyText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysTitleText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputContainer_Statics::NewProp_SwapKeysMessageText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavInputContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavInputContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavInputContainer_Statics::ClassParams = {
		&UUINavInputContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavInputContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavInputContainer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputContainer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavInputContainer()
	{
		if (!Z_Registration_Info_UClass_UUINavInputContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavInputContainer.OuterSingleton, Z_Construct_UClass_UUINavInputContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavInputContainer.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavInputContainer>()
	{
		return UUINavInputContainer::StaticClass();
	}
	UUINavInputContainer::UUINavInputContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavInputContainer);
	UUINavInputContainer::~UUINavInputContainer() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavInputContainer, UUINavInputContainer::StaticClass, TEXT("UUINavInputContainer"), &Z_Registration_Info_UClass_UUINavInputContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavInputContainer), 1520570539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_2474761085(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
