// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/RevertRebindReason.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRevertRebindReason() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ERevertRebindReason();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERevertRebindReason;
	static UEnum* ERevertRebindReason_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERevertRebindReason.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERevertRebindReason.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_ERevertRebindReason, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("ERevertRebindReason"));
		}
		return Z_Registration_Info_UEnum_ERevertRebindReason.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<ERevertRebindReason>()
	{
		return ERevertRebindReason_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::Enumerators[] = {
		{ "ERevertRebindReason::None", (int64)ERevertRebindReason::None },
		{ "ERevertRebindReason::RestrictionMismatch", (int64)ERevertRebindReason::RestrictionMismatch },
		{ "ERevertRebindReason::NonWhitelistedKey", (int64)ERevertRebindReason::NonWhitelistedKey },
		{ "ERevertRebindReason::BlacklistedKey", (int64)ERevertRebindReason::BlacklistedKey },
		{ "ERevertRebindReason::UsedBySameInputGroup", (int64)ERevertRebindReason::UsedBySameInputGroup },
		{ "ERevertRebindReason::UsedBySameInput", (int64)ERevertRebindReason::UsedBySameInput },
		{ "ERevertRebindReason::SwapRejected", (int64)ERevertRebindReason::SwapRejected },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::Enum_MetaDataParams[] = {
		{ "BlacklistedKey.DisplayName", "Blacklisted Key" },
		{ "BlacklistedKey.Name", "ERevertRebindReason::BlacklistedKey" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/RevertRebindReason.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ERevertRebindReason::None" },
		{ "NonWhitelistedKey.DisplayName", "Non-Whitelisted Key" },
		{ "NonWhitelistedKey.Name", "ERevertRebindReason::NonWhitelistedKey" },
		{ "RestrictionMismatch.DisplayName", "Restriction Mismatch" },
		{ "RestrictionMismatch.Name", "ERevertRebindReason::RestrictionMismatch" },
		{ "ScriptName", "UINavRevertRebindReason" },
		{ "SwapRejected.DisplayName", "Swap Rejected" },
		{ "SwapRejected.Name", "ERevertRebindReason::SwapRejected" },
		{ "UsedBySameInput.DisplayName", "Used By Same Input" },
		{ "UsedBySameInput.Name", "ERevertRebindReason::UsedBySameInput" },
		{ "UsedBySameInputGroup.DisplayName", "Used By Same Input Group" },
		{ "UsedBySameInputGroup.Name", "ERevertRebindReason::UsedBySameInputGroup" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"ERevertRebindReason",
		"ERevertRebindReason",
		Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_ERevertRebindReason()
	{
		if (!Z_Registration_Info_UEnum_ERevertRebindReason.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERevertRebindReason.InnerSingleton, Z_Construct_UEnum_UINavigation_ERevertRebindReason_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERevertRebindReason.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_RevertRebindReason_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_RevertRebindReason_h_Statics::EnumInfo[] = {
		{ ERevertRebindReason_StaticEnum, TEXT("ERevertRebindReason"), &Z_Registration_Info_UEnum_ERevertRebindReason, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2945599172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_RevertRebindReason_h_210544942(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_RevertRebindReason_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_RevertRebindReason_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
