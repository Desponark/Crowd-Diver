// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UINAVIGATION_API UClass* Z_Construct_UClass_AUINavController();
	UINAVIGATION_API UClass* Z_Construct_UClass_AUINavController_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPCComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPCReceiver_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void AUINavController::StaticRegisterNativesAUINavController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUINavController);
	UClass* Z_Construct_UClass_AUINavController_NoRegister()
	{
		return AUINavController::StaticClass();
	}
	struct Z_Construct_UClass_AUINavController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UINavPCComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UINavPCComp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUINavController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUINavController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUINavController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This class contains the logic for input-related actions with UINavWidgets\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "UINavController.h" },
		{ "ModuleRelativePath", "Public/UINavController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class contains the logic for input-related actions with UINavWidgets" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUINavController_Statics::NewProp_UINavPCComp_MetaData[] = {
		{ "Category", "UINavController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUINavController_Statics::NewProp_UINavPCComp = { "UINavPCComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AUINavController, UINavPCComp), Z_Construct_UClass_UUINavPCComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUINavController_Statics::NewProp_UINavPCComp_MetaData), Z_Construct_UClass_AUINavController_Statics::NewProp_UINavPCComp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUINavController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUINavController_Statics::NewProp_UINavPCComp,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AUINavController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUINavPCReceiver_NoRegister, (int32)VTABLE_OFFSET(AUINavController, IUINavPCReceiver), false },  // 2104994577
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUINavController_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUINavController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUINavController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUINavController_Statics::ClassParams = {
		&AUINavController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUINavController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUINavController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AUINavController_Statics::Class_MetaDataParams), Z_Construct_UClass_AUINavController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AUINavController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AUINavController()
	{
		if (!Z_Registration_Info_UClass_AUINavController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUINavController.OuterSingleton, Z_Construct_UClass_AUINavController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUINavController.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<AUINavController>()
	{
		return AUINavController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUINavController);
	AUINavController::~AUINavController() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUINavController, AUINavController::StaticClass, TEXT("AUINavController"), &Z_Registration_Info_UClass_AUINavController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUINavController), 2836570723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavController_h_3007349684(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
