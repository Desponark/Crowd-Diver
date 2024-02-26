// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputMappingArray.h"
#include "Data/UINavEnhancedActionKeyMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMappingArray() {}
// Cross Module References
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingArray();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingArray;
class UScriptStruct* FInputMappingArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingArray, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("InputMappingArray"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingArray.OuterSingleton;
}
template<> UINAVIGATION_API UScriptStruct* StaticStruct<FInputMappingArray>()
{
	return FInputMappingArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputMappingArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputMappings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputMappings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/InputMappingArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingArray>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings_Inner = { "InputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUINavEnhancedActionKeyMapping, METADATA_PARAMS(0, nullptr) }; // 573479768
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/InputMappingArray.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingArray, InputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings_MetaData), Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings_MetaData) }; // 573479768
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewProp_InputMappings,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		&NewStructOps,
		"InputMappingArray",
		Z_Construct_UScriptStruct_FInputMappingArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingArray_Statics::PropPointers),
		sizeof(FInputMappingArray),
		alignof(FInputMappingArray),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMappingArray_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingArray_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInputMappingArray()
	{
		if (!Z_Registration_Info_UScriptStruct_InputMappingArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingArray.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputMappingArray.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputMappingArray_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputMappingArray_h_Statics::ScriptStructInfo[] = {
		{ FInputMappingArray::StaticStruct, Z_Construct_UScriptStruct_FInputMappingArray_Statics::NewStructOps, TEXT("InputMappingArray"), &Z_Registration_Info_UScriptStruct_InputMappingArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingArray), 1891046884U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputMappingArray_h_717807117(TEXT("/Script/UINavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputMappingArray_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputMappingArray_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
