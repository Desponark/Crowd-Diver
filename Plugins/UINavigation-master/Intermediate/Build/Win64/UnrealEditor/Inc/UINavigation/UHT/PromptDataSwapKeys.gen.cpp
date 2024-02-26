// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PromptDataSwapKeys.h"
#include "Data/InputCollisionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromptDataSwapKeys() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBase();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataSwapKeys();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataSwapKeys_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputBox_NoRegister();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputCollisionData();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UPromptDataSwapKeys::StaticRegisterNativesUPromptDataSwapKeys()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPromptDataSwapKeys);
	UClass* Z_Construct_UClass_UPromptDataSwapKeys_NoRegister()
	{
		return UPromptDataSwapKeys::StaticClass();
	}
	struct Z_Construct_UClass_UPromptDataSwapKeys_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldSwap_MetaData[];
#endif
		static void NewProp_bShouldSwap_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldSwap;
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
	UObject* (*const Z_Construct_UClass_UPromptDataSwapKeys_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPromptDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataSwapKeys_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/PromptDataSwapKeys.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/PromptDataSwapKeys.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap_MetaData[] = {
		{ "Category", "Swap Keys Prompt Data" },
		{ "ModuleRelativePath", "Public/Data/PromptDataSwapKeys.h" },
	};
#endif
	void Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap_SetBit(void* Obj)
	{
		((UPromptDataSwapKeys*)Obj)->bShouldSwap = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap = { "bShouldSwap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPromptDataSwapKeys), &Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap_MetaData), Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_InputCollisionData_MetaData[] = {
		{ "Category", "Swap Keys Prompt Data" },
		{ "ModuleRelativePath", "Public/Data/PromptDataSwapKeys.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_InputCollisionData = { "InputCollisionData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPromptDataSwapKeys, InputCollisionData), Z_Construct_UScriptStruct_FInputCollisionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_InputCollisionData_MetaData), Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_InputCollisionData_MetaData) }; // 1431546935
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CurrentInputBox_MetaData[] = {
		{ "Category", "Swap Keys Prompt Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/PromptDataSwapKeys.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CurrentInputBox = { "CurrentInputBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPromptDataSwapKeys, CurrentInputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CurrentInputBox_MetaData), Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CurrentInputBox_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CollidingInputBox_MetaData[] = {
		{ "Category", "Swap Keys Prompt Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Data/PromptDataSwapKeys.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CollidingInputBox = { "CollidingInputBox", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPromptDataSwapKeys, CollidingInputBox), Z_Construct_UClass_UUINavInputBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CollidingInputBox_MetaData), Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CollidingInputBox_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPromptDataSwapKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_bShouldSwap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_InputCollisionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CurrentInputBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPromptDataSwapKeys_Statics::NewProp_CollidingInputBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromptDataSwapKeys_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromptDataSwapKeys>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPromptDataSwapKeys_Statics::ClassParams = {
		&UPromptDataSwapKeys::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPromptDataSwapKeys_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::Class_MetaDataParams), Z_Construct_UClass_UPromptDataSwapKeys_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataSwapKeys_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPromptDataSwapKeys()
	{
		if (!Z_Registration_Info_UClass_UPromptDataSwapKeys.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPromptDataSwapKeys.OuterSingleton, Z_Construct_UClass_UPromptDataSwapKeys_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPromptDataSwapKeys.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UPromptDataSwapKeys>()
	{
		return UPromptDataSwapKeys::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromptDataSwapKeys);
	UPromptDataSwapKeys::~UPromptDataSwapKeys() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptDataSwapKeys_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptDataSwapKeys_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPromptDataSwapKeys, UPromptDataSwapKeys::StaticClass, TEXT("UPromptDataSwapKeys"), &Z_Registration_Info_UClass_UPromptDataSwapKeys, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPromptDataSwapKeys), 364150410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptDataSwapKeys_h_2718538830(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptDataSwapKeys_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptDataSwapKeys_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
