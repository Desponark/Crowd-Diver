// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/SelectorPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectorPosition() {}
// Cross Module References
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ESelectorPosition();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectorPosition;
	static UEnum* ESelectorPosition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectorPosition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectorPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_ESelectorPosition, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("ESelectorPosition"));
		}
		return Z_Registration_Info_UEnum_ESelectorPosition.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<ESelectorPosition>()
	{
		return ESelectorPosition_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::Enumerators[] = {
		{ "ESelectorPosition::Position_Center", (int64)ESelectorPosition::Position_Center },
		{ "ESelectorPosition::Position_Top", (int64)ESelectorPosition::Position_Top },
		{ "ESelectorPosition::Position_Bottom", (int64)ESelectorPosition::Position_Bottom },
		{ "ESelectorPosition::Position_Left", (int64)ESelectorPosition::Position_Left },
		{ "ESelectorPosition::Position_Right", (int64)ESelectorPosition::Position_Right },
		{ "ESelectorPosition::Position_Top_Right", (int64)ESelectorPosition::Position_Top_Right },
		{ "ESelectorPosition::Position_Top_Left", (int64)ESelectorPosition::Position_Top_Left },
		{ "ESelectorPosition::Position_Bottom_Right", (int64)ESelectorPosition::Position_Bottom_Right },
		{ "ESelectorPosition::Position_Bottom_Left", (int64)ESelectorPosition::Position_Bottom_Left },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/SelectorPosition.h" },
		{ "Position_Bottom.DisplayName", "Bottom" },
		{ "Position_Bottom.Name", "ESelectorPosition::Position_Bottom" },
		{ "Position_Bottom_Left.DisplayName", "Bottom Left" },
		{ "Position_Bottom_Left.Name", "ESelectorPosition::Position_Bottom_Left" },
		{ "Position_Bottom_Right.DisplayName", "Bottom Right" },
		{ "Position_Bottom_Right.Name", "ESelectorPosition::Position_Bottom_Right" },
		{ "Position_Center.DisplayName", "Center" },
		{ "Position_Center.Name", "ESelectorPosition::Position_Center" },
		{ "Position_Left.DisplayName", "Left" },
		{ "Position_Left.Name", "ESelectorPosition::Position_Left" },
		{ "Position_Right.DisplayName", "Right" },
		{ "Position_Right.Name", "ESelectorPosition::Position_Right" },
		{ "Position_Top.DisplayName", "Top" },
		{ "Position_Top.Name", "ESelectorPosition::Position_Top" },
		{ "Position_Top_Left.DisplayName", "Top Left" },
		{ "Position_Top_Left.Name", "ESelectorPosition::Position_Top_Left" },
		{ "Position_Top_Right.DisplayName", "Top Right" },
		{ "Position_Top_Right.Name", "ESelectorPosition::Position_Top_Right" },
		{ "ScriptName", "UINavSelectorPosition" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"ESelectorPosition",
		"ESelectorPosition",
		Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_ESelectorPosition()
	{
		if (!Z_Registration_Info_UEnum_ESelectorPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectorPosition.InnerSingleton, Z_Construct_UEnum_UINavigation_ESelectorPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectorPosition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_SelectorPosition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_SelectorPosition_h_Statics::EnumInfo[] = {
		{ ESelectorPosition_StaticEnum, TEXT("ESelectorPosition"), &Z_Registration_Info_UEnum_ESelectorPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2406911776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_SelectorPosition_h_1871030841(TEXT("/Script/UINavigation"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_SelectorPosition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_SelectorPosition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
