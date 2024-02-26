// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputType() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputType();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputType;
	static UEnum* EInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EInputType, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EInputType"));
		}
		return Z_Registration_Info_UEnum_EInputType.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EInputType>()
	{
		return EInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EInputType_Statics::Enumerators[] = {
		{ "EInputType::None", (int64)EInputType::None },
		{ "EInputType::Keyboard", (int64)EInputType::Keyboard },
		{ "EInputType::Mouse", (int64)EInputType::Mouse },
		{ "EInputType::Gamepad", (int64)EInputType::Gamepad },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gamepad.DisplayName", "Gamepad" },
		{ "Gamepad.Name", "EInputType::Gamepad" },
		{ "Keyboard.DisplayName", "Keyboard" },
		{ "Keyboard.Name", "EInputType::Keyboard" },
		{ "ModuleRelativePath", "Public/Data/InputType.h" },
		{ "Mouse.DisplayName", "Mouse" },
		{ "Mouse.Name", "EInputType::Mouse" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EInputType::None" },
		{ "ScriptName", "UINavInputType" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EInputType",
		"EInputType",
		Z_Construct_UEnum_UINavigation_EInputType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EInputType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EInputType()
	{
		if (!Z_Registration_Info_UEnum_EInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputType.InnerSingleton, Z_Construct_UEnum_UINavigation_EInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputType_h_Statics::EnumInfo[] = {
		{ EInputType_StaticEnum, TEXT("EInputType"), &Z_Registration_Info_UEnum_EInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 431819982U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputType_h_227080849(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
