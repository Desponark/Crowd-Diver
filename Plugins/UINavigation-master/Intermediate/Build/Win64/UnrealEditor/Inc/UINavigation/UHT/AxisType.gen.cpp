// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/AxisType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAxisType() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EAxisType();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAxisType;
	static UEnum* EAxisType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAxisType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAxisType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EAxisType, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EAxisType"));
		}
		return Z_Registration_Info_UEnum_EAxisType.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EAxisType>()
	{
		return EAxisType_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EAxisType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EAxisType_Statics::Enumerators[] = {
		{ "EAxisType::None", (int64)EAxisType::None },
		{ "EAxisType::Positive", (int64)EAxisType::Positive },
		{ "EAxisType::Negative", (int64)EAxisType::Negative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EAxisType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/AxisType.h" },
		{ "Negative.DisplayName", "Negative" },
		{ "Negative.Name", "EAxisType::Negative" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EAxisType::None" },
		{ "Positive.DisplayName", "Positive" },
		{ "Positive.Name", "EAxisType::Positive" },
		{ "ScriptName", "UINavAxisType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EAxisType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EAxisType",
		"EAxisType",
		Z_Construct_UEnum_UINavigation_EAxisType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EAxisType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EAxisType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EAxisType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EAxisType()
	{
		if (!Z_Registration_Info_UEnum_EAxisType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAxisType.InnerSingleton, Z_Construct_UEnum_UINavigation_EAxisType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAxisType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AxisType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AxisType_h_Statics::EnumInfo[] = {
		{ EAxisType_StaticEnum, TEXT("EAxisType"), &Z_Registration_Info_UEnum_EAxisType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3329478307U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AxisType_h_2354628684(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AxisType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AxisType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
