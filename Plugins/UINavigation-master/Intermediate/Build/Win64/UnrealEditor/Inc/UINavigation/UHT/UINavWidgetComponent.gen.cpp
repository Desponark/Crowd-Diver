// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavWidgetComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavWidgetComponent() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidgetComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidgetComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UUINavWidgetComponent::StaticRegisterNativesUUINavWidgetComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavWidgetComponent);
	UClass* Z_Construct_UClass_UUINavWidgetComponent_NoRegister()
	{
		return UUINavWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUINavWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidgetComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "UINav" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "UINavWidgetComponent.h" },
		{ "ModuleRelativePath", "Public/UINavWidgetComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavWidgetComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavWidgetComponent_Statics::ClassParams = {
		&UUINavWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidgetComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavWidgetComponent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUINavWidgetComponent()
	{
		if (!Z_Registration_Info_UClass_UUINavWidgetComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavWidgetComponent.OuterSingleton, Z_Construct_UClass_UUINavWidgetComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavWidgetComponent.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavWidgetComponent>()
	{
		return UUINavWidgetComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavWidgetComponent);
	UUINavWidgetComponent::~UUINavWidgetComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidgetComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidgetComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavWidgetComponent, UUINavWidgetComponent::StaticClass, TEXT("UUINavWidgetComponent"), &Z_Registration_Info_UClass_UUINavWidgetComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavWidgetComponent), 2164490121U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidgetComponent_h_4174541933(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidgetComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidgetComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
