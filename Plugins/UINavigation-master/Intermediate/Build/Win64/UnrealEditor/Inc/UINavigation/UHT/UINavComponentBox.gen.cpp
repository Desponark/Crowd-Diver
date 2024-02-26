// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavComponentBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavComponentBox() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentBox();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentBox_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavHorizontalComponent();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(UUINavComponentBox::execGetCurrentNumber)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentNumber();
		P_NATIVE_END;
	}
	void UUINavComponentBox::StaticRegisterNativesUUINavComponentBox()
	{
		UClass* Class = UUINavComponentBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentNumber", &UUINavComponentBox::execGetCurrentNumber },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics
	{
		struct UINavComponentBox_eventGetCurrentNumber_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavComponentBox_eventGetCurrentNumber_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponentBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the currently selected number resulting from the number range\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the currently selected number resulting from the number range" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponentBox, nullptr, "GetCurrentNumber", nullptr, nullptr, Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::UINavComponentBox_eventGetCurrentNumber_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::UINavComponentBox_eventGetCurrentNumber_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavComponentBox);
	UClass* Z_Construct_UClass_UUINavComponentBox_NoRegister()
	{
		return UUINavComponentBox::StaticClass();
	}
	struct Z_Construct_UClass_UUINavComponentBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinRange_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MinRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Interval_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Interval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableButtons_MetaData[];
#endif
		static void NewProp_bDisableButtons_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableButtons;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavComponentBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavHorizontalComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavComponentBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavComponentBox_GetCurrentNumber, "GetCurrentNumber" }, // 2561787791
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavComponentBox.h" },
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_LeftButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavComponentBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_LeftButton = { "LeftButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponentBox, LeftButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_LeftButton_MetaData), Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_LeftButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_RightButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavComponentBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_RightButton = { "RightButton", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponentBox, RightButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_RightButton_MetaData), Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_RightButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MinRange_MetaData[] = {
		{ "Category", "UINavComponentBox" },
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MinRange = { "MinRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponentBox, MinRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MinRange_MetaData), Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MinRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MaxRange_MetaData[] = {
		{ "Category", "UINavComponentBox" },
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponentBox, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MaxRange_MetaData), Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MaxRange_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_Interval_MetaData[] = {
		{ "Category", "UINavComponentBox" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_Interval = { "Interval", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavComponentBox, Interval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_Interval_MetaData), Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_Interval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons_MetaData[] = {
		{ "Category", "UINavComponentBox" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If set to true, will disable buttons if the slider runs out of options on either side\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavComponentBox.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, will disable buttons if the slider runs out of options on either side" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons_SetBit(void* Obj)
	{
		((UUINavComponentBox*)Obj)->bDisableButtons = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons = { "bDisableButtons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavComponentBox), &Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons_MetaData), Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavComponentBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_LeftButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_RightButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MinRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_MaxRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_Interval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavComponentBox_Statics::NewProp_bDisableButtons,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavComponentBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavComponentBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavComponentBox_Statics::ClassParams = {
		&UUINavComponentBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavComponentBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavComponentBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavComponentBox()
	{
		if (!Z_Registration_Info_UClass_UUINavComponentBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavComponentBox.OuterSingleton, Z_Construct_UClass_UUINavComponentBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavComponentBox.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavComponentBox>()
	{
		return UUINavComponentBox::StaticClass();
	}
	UUINavComponentBox::UUINavComponentBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavComponentBox);
	UUINavComponentBox::~UUINavComponentBox() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponentBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponentBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavComponentBox, UUINavComponentBox::StaticClass, TEXT("UUINavComponentBox"), &Z_Registration_Info_UClass_UUINavComponentBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavComponentBox), 2716572880U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponentBox_h_1921050352(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponentBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavComponentBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
