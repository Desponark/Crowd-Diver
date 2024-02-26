// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputRebindData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputRebindData() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputRebindData();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References

static_assert(std::is_polymorphic<FInputRebindData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInputRebindData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputRebindData;
class UScriptStruct* FInputRebindData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputRebindData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputRebindData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputRebindData, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("InputRebindData"));
	}
	return Z_Registration_Info_UScriptStruct_InputRebindData.OuterSingleton;
}
template<> UINAVIGATION_API UScriptStruct* StaticStruct<FInputRebindData>()
{
	return FInputRebindData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputRebindData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_InputText;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InputGroups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputGroups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRebindData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/InputRebindData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputRebindData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputRebindData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputText_MetaData[] = {
		{ "Category", "InputRebindData" },
		{ "ModuleRelativePath", "Public/Data/InputRebindData.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRebindData, InputText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputText_MetaData), Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputText_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups_Inner = { "InputGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups_MetaData[] = {
		{ "Category", "InputRebindData" },
		{ "ModuleRelativePath", "Public/Data/InputRebindData.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups = { "InputGroups", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputRebindData, InputGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups_MetaData), Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputRebindData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputRebindData_Statics::NewProp_InputGroups,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputRebindData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"InputRebindData",
		Z_Construct_UScriptStruct_FInputRebindData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRebindData_Statics::PropPointers),
		sizeof(FInputRebindData),
		alignof(FInputRebindData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRebindData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputRebindData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputRebindData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FInputRebindData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputRebindData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputRebindData.InnerSingleton, Z_Construct_UScriptStruct_FInputRebindData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputRebindData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRebindData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRebindData_h_Statics::ScriptStructInfo[] = {
		{ FInputRebindData::StaticStruct, Z_Construct_UScriptStruct_FInputRebindData_Statics::NewStructOps, TEXT("InputRebindData"), &Z_Registration_Info_UScriptStruct_InputRebindData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputRebindData), 1574150668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRebindData_h_3984554830(TEXT("/Script/UINavigation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRebindData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRebindData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
