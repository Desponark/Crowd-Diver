// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/InputRestriction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputRestriction() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputRestriction();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInputRestriction;
	static UEnum* EInputRestriction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInputRestriction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInputRestriction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EInputRestriction, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EInputRestriction"));
		}
		return Z_Registration_Info_UEnum_EInputRestriction.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EInputRestriction>()
	{
		return EInputRestriction_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EInputRestriction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::Enumerators[] = {
		{ "EInputRestriction::None", (int64)EInputRestriction::None },
		{ "EInputRestriction::Keyboard", (int64)EInputRestriction::Keyboard },
		{ "EInputRestriction::Mouse", (int64)EInputRestriction::Mouse },
		{ "EInputRestriction::Keyboard_Mouse", (int64)EInputRestriction::Keyboard_Mouse },
		{ "EInputRestriction::Gamepad", (int64)EInputRestriction::Gamepad },
		{ "EInputRestriction::VR", (int64)EInputRestriction::VR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gamepad.DisplayName", "Gamepad" },
		{ "Gamepad.Name", "EInputRestriction::Gamepad" },
		{ "Keyboard.DisplayName", "Keyboard" },
		{ "Keyboard.Name", "EInputRestriction::Keyboard" },
		{ "Keyboard_Mouse.DisplayName", "Keyboard and Mouse" },
		{ "Keyboard_Mouse.Name", "EInputRestriction::Keyboard_Mouse" },
		{ "ModuleRelativePath", "Public/Data/InputRestriction.h" },
		{ "Mouse.DisplayName", "Mouse" },
		{ "Mouse.Name", "EInputRestriction::Mouse" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EInputRestriction::None" },
		{ "ScriptName", "UINavInputRestriction" },
		{ "VR.DisplayName", "VR" },
		{ "VR.Name", "EInputRestriction::VR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EInputRestriction",
		"EInputRestriction",
		Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EInputRestriction()
	{
		if (!Z_Registration_Info_UEnum_EInputRestriction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInputRestriction.InnerSingleton, Z_Construct_UEnum_UINavigation_EInputRestriction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInputRestriction.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRestriction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRestriction_h_Statics::EnumInfo[] = {
		{ EInputRestriction_StaticEnum, TEXT("EInputRestriction"), &Z_Registration_Info_UEnum_EInputRestriction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1840118431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRestriction_h_794135972(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRestriction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRestriction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
