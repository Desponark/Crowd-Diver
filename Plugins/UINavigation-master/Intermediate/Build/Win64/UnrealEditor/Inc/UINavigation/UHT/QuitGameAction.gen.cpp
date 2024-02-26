// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentActions/QuitGameAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuitGameAction() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UQuitGameAction();
	UINAVIGATION_API UClass* Z_Construct_UClass_UQuitGameAction_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentAction();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UQuitGameAction::StaticRegisterNativesUQuitGameAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuitGameAction);
	UClass* Z_Construct_UClass_UQuitGameAction_NoRegister()
	{
		return UQuitGameAction::StaticClass();
	}
	struct Z_Construct_UClass_UQuitGameAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuitGameAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavComponentAction,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuitGameAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuitGameAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ComponentActions/QuitGameAction.h" },
		{ "ModuleRelativePath", "Public/ComponentActions/QuitGameAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuitGameAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuitGameAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuitGameAction_Statics::ClassParams = {
		&UQuitGameAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuitGameAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuitGameAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuitGameAction()
	{
		if (!Z_Registration_Info_UClass_UQuitGameAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuitGameAction.OuterSingleton, Z_Construct_UClass_UQuitGameAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuitGameAction.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UQuitGameAction>()
	{
		return UQuitGameAction::StaticClass();
	}
	UQuitGameAction::UQuitGameAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuitGameAction);
	UQuitGameAction::~UQuitGameAction() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_QuitGameAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_QuitGameAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuitGameAction, UQuitGameAction::StaticClass, TEXT("UQuitGameAction"), &Z_Registration_Info_UClass_UQuitGameAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuitGameAction), 577189575U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_QuitGameAction_h_1493082262(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_QuitGameAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_QuitGameAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
