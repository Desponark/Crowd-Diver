// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/UINavEnhancedActionKeyMapping.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavEnhancedActionKeyMapping() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputTrigger_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping;
class UScriptStruct* FUINavEnhancedActionKeyMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("UINavEnhancedActionKeyMapping"));
	}
	return Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping.OuterSingleton;
}
template<> UINAVIGATION_API UScriptStruct* StaticStruct<FUINavEnhancedActionKeyMapping>()
{
	return FUINavEnhancedActionKeyMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Modifiers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modifiers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modifiers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Defines a mapping between a key activation and the resulting enhanced action\n * An key could be a button press, joystick axis movement, etc.\n * An enhanced action could be MoveForward, Jump, Fire, etc.\n *\n**/" },
#endif
		{ "ModuleRelativePath", "Public/Data/UINavEnhancedActionKeyMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines a mapping between a key activation and the resulting enhanced action\nAn key could be a button press, joystick axis movement, etc.\nAn enhanced action could be MoveForward, Jump, Fire, etc." },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUINavEnhancedActionKeyMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to be affected by the key  */" },
#endif
		{ "ModuleRelativePath", "Public/Data/UINavEnhancedActionKeyMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to be affected by the key" },
#endif
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUINavEnhancedActionKeyMapping, Action), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Key that affect the action. */" },
#endif
		{ "ModuleRelativePath", "Public/Data/UINavEnhancedActionKeyMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Key that affect the action." },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUINavEnhancedActionKeyMapping, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData), Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Key_MetaData) }; // 46000949
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputTrigger_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\n\x09* If there are any Explicit triggers in this list at least one of them must be met.\n\x09* All Implicit triggers in this list must be met.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Data/UINavEnhancedActionKeyMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger qualifiers. If any trigger qualifiers exist the mapping will not trigger unless:\nIf there are any Explicit triggers in this list at least one of them must be met.\nAll Implicit triggers in this list must be met." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUINavEnhancedActionKeyMapping, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData), Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers_MetaData) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner = { "Modifiers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputModifier_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Modifiers applied to the raw key value.\n\x09* These are applied sequentially in array order.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Data/UINavEnhancedActionKeyMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Modifiers applied to the raw key value.\nThese are applied sequentially in array order." },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers = { "Modifiers", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUINavEnhancedActionKeyMapping, Modifiers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData), Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Triggers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewProp_Modifiers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		&NewStructOps,
		"UINavEnhancedActionKeyMapping",
		Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::PropPointers),
		sizeof(FUINavEnhancedActionKeyMapping),
		alignof(FUINavEnhancedActionKeyMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping.InnerSingleton, Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_UINavEnhancedActionKeyMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_UINavEnhancedActionKeyMapping_h_Statics::ScriptStructInfo[] = {
		{ FUINavEnhancedActionKeyMapping::StaticStruct, Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping_Statics::NewStructOps, TEXT("UINavEnhancedActionKeyMapping"), &Z_Registration_Info_UScriptStruct_UINavEnhancedActionKeyMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUINavEnhancedActionKeyMapping), 573479768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_UINavEnhancedActionKeyMapping_h_251275689(TEXT("/Script/UINavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_UINavEnhancedActionKeyMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_UINavEnhancedActionKeyMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
