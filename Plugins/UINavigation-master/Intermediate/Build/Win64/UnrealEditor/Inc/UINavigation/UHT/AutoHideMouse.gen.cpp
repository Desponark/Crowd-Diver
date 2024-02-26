// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/AutoHideMouse.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoHideMouse() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EAutoHideMouse();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoHideMouse;
	static UEnum* EAutoHideMouse_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAutoHideMouse.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAutoHideMouse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EAutoHideMouse, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EAutoHideMouse"));
		}
		return Z_Registration_Info_UEnum_EAutoHideMouse.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EAutoHideMouse>()
	{
		return EAutoHideMouse_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::Enumerators[] = {
		{ "EAutoHideMouse::Never", (int64)EAutoHideMouse::Never },
		{ "EAutoHideMouse::Gamepad", (int64)EAutoHideMouse::Gamepad },
		{ "EAutoHideMouse::GamepadAndKeyboard", (int64)EAutoHideMouse::GamepadAndKeyboard },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Gamepad.Name", "EAutoHideMouse::Gamepad" },
		{ "GamepadAndKeyboard.Name", "EAutoHideMouse::GamepadAndKeyboard" },
		{ "ModuleRelativePath", "Public/Data/AutoHideMouse.h" },
		{ "Never.Name", "EAutoHideMouse::Never" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EAutoHideMouse",
		"EAutoHideMouse",
		Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EAutoHideMouse()
	{
		if (!Z_Registration_Info_UEnum_EAutoHideMouse.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoHideMouse.InnerSingleton, Z_Construct_UEnum_UINavigation_EAutoHideMouse_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAutoHideMouse.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AutoHideMouse_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AutoHideMouse_h_Statics::EnumInfo[] = {
		{ EAutoHideMouse_StaticEnum, TEXT("EAutoHideMouse"), &Z_Registration_Info_UEnum_EAutoHideMouse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2204506575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AutoHideMouse_h_317740239(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AutoHideMouse_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_AutoHideMouse_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
