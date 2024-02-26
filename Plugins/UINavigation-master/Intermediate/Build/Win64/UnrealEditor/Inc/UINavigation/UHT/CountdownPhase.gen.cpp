// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/CountdownPhase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCountdownPhase() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ECountdownPhase();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECountdownPhase;
	static UEnum* ECountdownPhase_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECountdownPhase.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECountdownPhase.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_ECountdownPhase, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("ECountdownPhase"));
		}
		return Z_Registration_Info_UEnum_ECountdownPhase.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<ECountdownPhase>()
	{
		return ECountdownPhase_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::Enumerators[] = {
		{ "ECountdownPhase::None", (int64)ECountdownPhase::None },
		{ "ECountdownPhase::First", (int64)ECountdownPhase::First },
		{ "ECountdownPhase::Looping", (int64)ECountdownPhase::Looping },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "First.DisplayName", "First" },
		{ "First.Name", "ECountdownPhase::First" },
		{ "Looping.DisplayName", "Looping" },
		{ "Looping.Name", "ECountdownPhase::Looping" },
		{ "ModuleRelativePath", "Public/Data/CountdownPhase.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "ECountdownPhase::None" },
		{ "ScriptName", "UINavCountdownPhase" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"ECountdownPhase",
		"ECountdownPhase",
		Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_ECountdownPhase()
	{
		if (!Z_Registration_Info_UEnum_ECountdownPhase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECountdownPhase.InnerSingleton, Z_Construct_UEnum_UINavigation_ECountdownPhase_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECountdownPhase.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_CountdownPhase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_CountdownPhase_h_Statics::EnumInfo[] = {
		{ ECountdownPhase_StaticEnum, TEXT("ECountdownPhase"), &Z_Registration_Info_UEnum_ECountdownPhase, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3048417821U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_CountdownPhase_h_3779689151(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_CountdownPhase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_CountdownPhase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
