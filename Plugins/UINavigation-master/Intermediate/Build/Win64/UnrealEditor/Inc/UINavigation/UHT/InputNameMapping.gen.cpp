// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputNameMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputNameMapping() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputNameMapping();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References

static_assert(std::is_polymorphic<FInputNameMapping>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInputNameMapping cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputNameMapping;
class UScriptStruct* FInputNameMapping::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputNameMapping.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputNameMapping.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputNameMapping, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("InputNameMapping"));
	}
	return Z_Registration_Info_UScriptStruct_InputNameMapping.OuterSingleton;
}
template<> UINAVIGATION_API UScriptStruct* StaticStruct<FInputNameMapping>()
{
	return FInputNameMapping::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputNameMapping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputNameMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/InputNameMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputNameMapping>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewProp_InputText_MetaData[] = {
		{ "Category", "UINav Input" },
		{ "ModuleRelativePath", "Public/Data/InputNameMapping.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputNameMapping, InputText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewProp_InputText_MetaData), Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewProp_InputText_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputNameMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewProp_InputText,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputNameMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InputNameMapping",
		Z_Construct_UScriptStruct_FInputNameMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputNameMapping_Statics::PropPointers),
		sizeof(FInputNameMapping),
		alignof(FInputNameMapping),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputNameMapping_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputNameMapping_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputNameMapping_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInputNameMapping()
	{
		if (!Z_Registration_Info_UScriptStruct_InputNameMapping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputNameMapping.InnerSingleton, Z_Construct_UScriptStruct_FInputNameMapping_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputNameMapping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputNameMapping_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputNameMapping_h_Statics::ScriptStructInfo[] = {
		{ FInputNameMapping::StaticStruct, Z_Construct_UScriptStruct_FInputNameMapping_Statics::NewStructOps, TEXT("InputNameMapping"), &Z_Registration_Info_UScriptStruct_InputNameMapping, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputNameMapping), 2237021304U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputNameMapping_h_2713191840(TEXT("/Script/UINavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputNameMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputNameMapping_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
