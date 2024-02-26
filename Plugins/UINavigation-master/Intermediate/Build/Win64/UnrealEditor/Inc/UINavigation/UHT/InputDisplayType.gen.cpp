// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputDisplayType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputDisplayType() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputDisplayType();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputDisplayType;
	static UEnum* EInputDisplayType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputDisplayType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputDisplayType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EInputDisplayType, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EInputDisplayType"));
		}
		return Z_Registration_Info_UEnum_EInputDisplayType.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EInputDisplayType>()
	{
		return EInputDisplayType_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::Enumerators[] = {
		{ "EInputDisplayType::Icon", (int64)EInputDisplayType::Icon },
		{ "EInputDisplayType::Text", (int64)EInputDisplayType::Text },
		{ "EInputDisplayType::Both", (int64)EInputDisplayType::Both },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Both.Name", "EInputDisplayType::Both" },
		{ "Icon.Name", "EInputDisplayType::Icon" },
		{ "ModuleRelativePath", "Public/Data/InputDisplayType.h" },
		{ "Text.Name", "EInputDisplayType::Text" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EInputDisplayType",
		"EInputDisplayType",
		Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EInputDisplayType()
	{
		if (!Z_Registration_Info_UEnum_EInputDisplayType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputDisplayType.InnerSingleton, Z_Construct_UEnum_UINavigation_EInputDisplayType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputDisplayType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputDisplayType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputDisplayType_h_Statics::EnumInfo[] = {
		{ EInputDisplayType_StaticEnum, TEXT("EInputDisplayType"), &Z_Registration_Info_UEnum_EInputDisplayType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4101048975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputDisplayType_h_2921704458(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputDisplayType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputDisplayType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
