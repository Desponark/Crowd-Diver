// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SwapKeysWidget.h"
#include "Data/InputCollisionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwapKeysWidget() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_USwapKeysWidget();
	UINAVIGATION_API UClass* Z_Construct_UClass_USwapKeysWidget_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputBox_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPromptWidget();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputCollisionData();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(USwapKeysWidget::execNotifySwapResult)
	{
		P_GET_UBOOL(Z_Param_bSwap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifySwapResult(Z_Param_bSwap);
		P_NATIVE_END;
	}
	void USwapKeysWidget::StaticRegisterNativesUSwapKeysWidget()
	{
		UClass* Class = USwapKeysWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NotifySwapResult", &USwapKeysWidget::execNotifySwapResult },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics
	{
		struct SwapKeysWidget_eventNotifySwapResult_Parms
		{
			bool bSwap;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSwap_MetaData[];
#endif
		static void NewProp_bSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSwap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap_SetBit(void* Obj)
	{
		((SwapKeysWidget_eventNotifySwapResult_Parms*)Obj)->bSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap = { "bSwap", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SwapKeysWidget_eventNotifySwapResult_Parms), &Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap_MetaData), Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::NewProp_bSwap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SwapKeysWidget" },
		{ "ModuleRelativePath", "Public/SwapKeysWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USwapKeysWidget, nullptr, "NotifySwapResult", nullptr, nullptr, Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::SwapKeysWidget_eventNotifySwapResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::SwapKeysWidget_eventNotifySwapResult_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USwapKeysWidget);
	UClass* Z_Construct_UClass_USwapKeysWidget_NoRegister()
	{
		return USwapKeysWidget::StaticClass();
	}
	struct Z_Construct_UClass_USwapKeysWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputCollisionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputCollisionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentInputBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollidingInputBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollidingInputBox;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwapKeysWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavPromptWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USwapKeysWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USwapKeysWidget_NotifySwapResult, "NotifySwapResult" }, // 1923241136
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwapKeysWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwapKeysWidget.h" },
		{ "ModuleRelativePath", "Public/SwapKeysWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_InputCollisionData_MetaData[] = {
		{ "Category", "SwapKeysWidget" },
		{ "ModuleRelativePath", "Public/SwapKeysWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_InputCollisionData = { "InputCollisionData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwapKeysWidget, InputCollisionData), Z_Construct_UScriptStruct_FInputCollisionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_InputCollisionData_MetaData), Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_InputCollisionData_MetaData) }; // 1431546935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CurrentInputBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwapKeysWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CurrentInputBox = { "CurrentInputBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwapKeysWidget, CurrentInputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CurrentInputBox_MetaData), Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CurrentInputBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CollidingInputBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwapKeysWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CollidingInputBox = { "CollidingInputBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USwapKeysWidget, CollidingInputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CollidingInputBox_MetaData), Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CollidingInputBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USwapKeysWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_InputCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CurrentInputBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USwapKeysWidget_Statics::NewProp_CollidingInputBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwapKeysWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwapKeysWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USwapKeysWidget_Statics::ClassParams = {
		&USwapKeysWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USwapKeysWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USwapKeysWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USwapKeysWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USwapKeysWidget()
	{
		if (!Z_Registration_Info_UClass_USwapKeysWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USwapKeysWidget.OuterSingleton, Z_Construct_UClass_USwapKeysWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USwapKeysWidget.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<USwapKeysWidget>()
	{
		return USwapKeysWidget::StaticClass();
	}
	USwapKeysWidget::USwapKeysWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwapKeysWidget);
	USwapKeysWidget::~USwapKeysWidget() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_SwapKeysWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_SwapKeysWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USwapKeysWidget, USwapKeysWidget::StaticClass, TEXT("USwapKeysWidget"), &Z_Registration_Info_UClass_USwapKeysWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USwapKeysWidget), 2383294525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_SwapKeysWidget_h_98394379(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_SwapKeysWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_SwapKeysWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
