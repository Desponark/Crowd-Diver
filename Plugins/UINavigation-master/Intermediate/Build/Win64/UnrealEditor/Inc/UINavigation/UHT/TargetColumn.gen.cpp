// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/TargetColumn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetColumn() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ETargetColumn();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetColumn;
	static UEnum* ETargetColumn_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetColumn.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetColumn.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_ETargetColumn, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("ETargetColumn"));
		}
		return Z_Registration_Info_UEnum_ETargetColumn.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<ETargetColumn>()
	{
		return ETargetColumn_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_ETargetColumn_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::Enumerators[] = {
		{ "ETargetColumn::Left", (int64)ETargetColumn::Left },
		{ "ETargetColumn::Middle", (int64)ETargetColumn::Middle },
		{ "ETargetColumn::Right", (int64)ETargetColumn::Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "ETargetColumn::Left" },
		{ "Middle.DisplayName", "Middle" },
		{ "Middle.Name", "ETargetColumn::Middle" },
		{ "ModuleRelativePath", "Public/Data/TargetColumn.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "ETargetColumn::Right" },
		{ "ScriptName", "UINavTargetColumn" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"ETargetColumn",
		"ETargetColumn",
		Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_ETargetColumn()
	{
		if (!Z_Registration_Info_UEnum_ETargetColumn.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetColumn.InnerSingleton, Z_Construct_UEnum_UINavigation_ETargetColumn_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetColumn.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_TargetColumn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_TargetColumn_h_Statics::EnumInfo[] = {
		{ ETargetColumn_StaticEnum, TEXT("ETargetColumn"), &Z_Registration_Info_UEnum_ETargetColumn, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3358915787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_TargetColumn_h_2354483034(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_TargetColumn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_TargetColumn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
