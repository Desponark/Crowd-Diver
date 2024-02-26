// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavHorizontalComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavHorizontalComponent() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavHorizontalComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavHorizontalComponent_NoRegister();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "OnValueChangedEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& OnValueChangedEvent)
{
	OnValueChangedEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execOnUpdated)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUpdated_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execOnNavigateRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavigateRight_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execOnNavigateLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavigateLeft_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execNavigateRight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateRight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execNavigateLeft)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NavigateLeft();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execGetMaxOptionIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxOptionIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execSetOptionIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetOptionIndex(Z_Param_NewIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavHorizontalComponent::execUpdate)
	{
		P_GET_UBOOL(Z_Param_bNotify);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Update(Z_Param_bNotify);
		P_NATIVE_END;
	}
	static FName NAME_UUINavHorizontalComponent_OnNavigateLeft = FName(TEXT("OnNavigateLeft"));
	void UUINavHorizontalComponent::OnNavigateLeft()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavHorizontalComponent_OnNavigateLeft),NULL);
	}
	static FName NAME_UUINavHorizontalComponent_OnNavigateRight = FName(TEXT("OnNavigateRight"));
	void UUINavHorizontalComponent::OnNavigateRight()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavHorizontalComponent_OnNavigateRight),NULL);
	}
	static FName NAME_UUINavHorizontalComponent_OnUpdated = FName(TEXT("OnUpdated"));
	void UUINavHorizontalComponent::OnUpdated()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavHorizontalComponent_OnUpdated),NULL);
	}
	void UUINavHorizontalComponent::StaticRegisterNativesUUINavHorizontalComponent()
	{
		UClass* Class = UUINavHorizontalComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaxOptionIndex", &UUINavHorizontalComponent::execGetMaxOptionIndex },
			{ "NavigateLeft", &UUINavHorizontalComponent::execNavigateLeft },
			{ "NavigateRight", &UUINavHorizontalComponent::execNavigateRight },
			{ "OnNavigateLeft", &UUINavHorizontalComponent::execOnNavigateLeft },
			{ "OnNavigateRight", &UUINavHorizontalComponent::execOnNavigateRight },
			{ "OnUpdated", &UUINavHorizontalComponent::execOnUpdated },
			{ "SetOptionIndex", &UUINavHorizontalComponent::execSetOptionIndex },
			{ "Update", &UUINavHorizontalComponent::execUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics
	{
		struct UINavHorizontalComponent_eventGetMaxOptionIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavHorizontalComponent_eventGetMaxOptionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponentBox" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "GetMaxOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::UINavHorizontalComponent_eventGetMaxOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::UINavHorizontalComponent_eventGetMaxOptionIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavHorizontalComponent" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "NavigateLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavHorizontalComponent" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "NavigateRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavHorizontalComponent" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "OnNavigateLeft", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavHorizontalComponent" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "OnNavigateRight", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavHorizontalComponent" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "OnUpdated", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics
	{
		struct UINavHorizontalComponent_eventSetOptionIndex_Parms
		{
			int32 NewIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavHorizontalComponent_eventSetOptionIndex_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavHorizontalComponent_eventSetOptionIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavHorizontalComponent_eventSetOptionIndex_Parms), &Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::NewProp_NewIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponentBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Changes the text displayed to match the specified option index\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the text displayed to match the specified option index" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "SetOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::UINavHorizontalComponent_eventSetOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::UINavHorizontalComponent_eventSetOptionIndex_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics
	{
		struct UINavHorizontalComponent_eventUpdate_Parms
		{
			bool bNotify;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNotify_MetaData[];
#endif
		static void NewProp_bNotify_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNotify;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify_SetBit(void* Obj)
	{
		((UINavHorizontalComponent_eventUpdate_Parms*)Obj)->bNotify = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify = { "bNotify", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavHorizontalComponent_eventUpdate_Parms), &Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify_MetaData), Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify_MetaData) };
	void Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavHorizontalComponent_eventUpdate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavHorizontalComponent_eventUpdate_Parms), &Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_bNotify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavHorizontalComponent" },
		{ "CPP_Default_bNotify", "true" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavHorizontalComponent, nullptr, "Update", nullptr, nullptr, Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::UINavHorizontalComponent_eventUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::UINavHorizontalComponent_eventUpdate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavHorizontalComponent_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavHorizontalComponent_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavHorizontalComponent);
	UClass* Z_Construct_UClass_UUINavHorizontalComponent_NoRegister()
	{
		return UUINavHorizontalComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUINavHorizontalComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoopOptions_MetaData[];
#endif
		static void NewProp_bLoopOptions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoopOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnValueChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnValueChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavHorizontalComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavHorizontalComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_GetMaxOptionIndex, "GetMaxOptionIndex" }, // 3742964407
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_NavigateLeft, "NavigateLeft" }, // 3709082805
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_NavigateRight, "NavigateRight" }, // 3877351813
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateLeft, "OnNavigateLeft" }, // 2737798008
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_OnNavigateRight, "OnNavigateRight" }, // 1180414713
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_OnUpdated, "OnUpdated" }, // 1567589506
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_SetOptionIndex, "SetOptionIndex" }, // 2634673324
		{ &Z_Construct_UFunction_UUINavHorizontalComponent_Update, "Update" }, // 1870392048
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavHorizontalComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavHorizontalComponent.h" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OptionIndex_MetaData[] = {
		{ "Category", "UINavHorizontalComponent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Indicates the option that should appear first in the slider\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates the option that should appear first in the slider" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavHorizontalComponent, OptionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OptionIndex_MetaData), Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OptionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions_MetaData[] = {
		{ "Category", "UINavComponentBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If set to true, will loop between options (won't disable buttons, even if DisableButtons is set to true)\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, will loop between options (won't disable buttons, even if DisableButtons is set to true)" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions_SetBit(void* Obj)
	{
		((UUINavHorizontalComponent*)Obj)->bLoopOptions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions = { "bLoopOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavHorizontalComponent), &Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions_MetaData), Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OnValueChanged_MetaData[] = {
		{ "Category", "Appearance|Event" },
		{ "ModuleRelativePath", "Public/UINavHorizontalComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OnValueChanged = { "OnValueChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavHorizontalComponent, OnValueChanged), Z_Construct_UDelegateFunction_UINavigation_OnValueChangedEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OnValueChanged_MetaData), Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OnValueChanged_MetaData) }; // 628546038
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavHorizontalComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OptionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_bLoopOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavHorizontalComponent_Statics::NewProp_OnValueChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavHorizontalComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavHorizontalComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavHorizontalComponent_Statics::ClassParams = {
		&UUINavHorizontalComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavHorizontalComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavHorizontalComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavHorizontalComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavHorizontalComponent()
	{
		if (!Z_Registration_Info_UClass_UUINavHorizontalComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavHorizontalComponent.OuterSingleton, Z_Construct_UClass_UUINavHorizontalComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavHorizontalComponent.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavHorizontalComponent>()
	{
		return UUINavHorizontalComponent::StaticClass();
	}
	UUINavHorizontalComponent::UUINavHorizontalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavHorizontalComponent);
	UUINavHorizontalComponent::~UUINavHorizontalComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavHorizontalComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavHorizontalComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavHorizontalComponent, UUINavHorizontalComponent::StaticClass, TEXT("UUINavHorizontalComponent"), &Z_Registration_Info_UClass_UUINavHorizontalComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavHorizontalComponent), 656717207U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavHorizontalComponent_h_1313337608(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavHorizontalComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavHorizontalComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
