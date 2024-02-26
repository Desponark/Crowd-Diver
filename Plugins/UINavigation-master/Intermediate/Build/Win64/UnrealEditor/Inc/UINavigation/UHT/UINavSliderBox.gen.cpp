// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavSliderBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavSliderBox() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentBox();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSliderBox();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSliderBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(UUINavSliderBox::execGetSliderPercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSliderPercent();
		P_NATIVE_END;
	}
	void UUINavSliderBox::StaticRegisterNativesUUINavSliderBox()
	{
		UClass* Class = UUINavSliderBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSliderPercent", &UUINavSliderBox::execGetSliderPercent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics
	{
		struct UINavSliderBox_eventGetSliderPercent_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavSliderBox_eventGetSliderPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavSliderBox" },
		{ "ModuleRelativePath", "Public/UINavSliderBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavSliderBox, nullptr, "GetSliderPercent", nullptr, nullptr, Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::UINavSliderBox_eventGetSliderPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::UINavSliderBox_eventGetSliderPercent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavSliderBox);
	UClass* Z_Construct_UClass_UUINavSliderBox_NoRegister()
	{
		return UUINavSliderBox::StaticClass();
	}
	struct Z_Construct_UClass_UUINavSliderBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SliderBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SliderBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavSliderBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavComponentBox,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSliderBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavSliderBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavSliderBox_GetSliderPercent, "GetSliderPercent" }, // 490529593
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSliderBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSliderBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavSliderBox.h" },
		{ "ModuleRelativePath", "Public/UINavSliderBox.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSliderBox_Statics::NewProp_SliderBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavSliderBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavSliderBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavSliderBox_Statics::NewProp_SliderBar = { "SliderBar", nullptr, (EPropertyFlags)0x002008000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSliderBox, SliderBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSliderBox_Statics::NewProp_SliderBar_MetaData), Z_Construct_UClass_UUINavSliderBox_Statics::NewProp_SliderBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavSliderBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSliderBox_Statics::NewProp_SliderBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavSliderBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavSliderBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavSliderBox_Statics::ClassParams = {
		&UUINavSliderBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavSliderBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSliderBox_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSliderBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavSliderBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSliderBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavSliderBox()
	{
		if (!Z_Registration_Info_UClass_UUINavSliderBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavSliderBox.OuterSingleton, Z_Construct_UClass_UUINavSliderBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavSliderBox.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavSliderBox>()
	{
		return UUINavSliderBox::StaticClass();
	}
	UUINavSliderBox::UUINavSliderBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavSliderBox);
	UUINavSliderBox::~UUINavSliderBox() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSliderBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSliderBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavSliderBox, UUINavSliderBox::StaticClass, TEXT("UUINavSliderBox"), &Z_Registration_Info_UClass_UUINavSliderBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavSliderBox), 406829400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSliderBox_h_165226282(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSliderBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSliderBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
