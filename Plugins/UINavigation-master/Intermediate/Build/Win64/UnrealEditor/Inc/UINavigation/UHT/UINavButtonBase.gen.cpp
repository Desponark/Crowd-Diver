// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavButtonBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavButtonBase() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavButtonBase();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavButtonBase_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UUINavButtonBase::StaticRegisterNativesUUINavButtonBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavButtonBase);
	UClass* Z_Construct_UClass_UUINavButtonBase_NoRegister()
	{
		return UUINavButtonBase::StaticClass();
	}
	struct Z_Construct_UClass_UUINavButtonBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavButtonBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UButton,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavButtonBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavButtonBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavButtonBase.h" },
		{ "ModuleRelativePath", "Public/UINavButtonBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavButtonBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavButtonBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavButtonBase_Statics::ClassParams = {
		&UUINavButtonBase::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavButtonBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavButtonBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUINavButtonBase()
	{
		if (!Z_Registration_Info_UClass_UUINavButtonBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavButtonBase.OuterSingleton, Z_Construct_UClass_UUINavButtonBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavButtonBase.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavButtonBase>()
	{
		return UUINavButtonBase::StaticClass();
	}
	UUINavButtonBase::UUINavButtonBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavButtonBase);
	UUINavButtonBase::~UUINavButtonBase() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavButtonBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavButtonBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavButtonBase, UUINavButtonBase::StaticClass, TEXT("UUINavButtonBase"), &Z_Registration_Info_UClass_UUINavButtonBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavButtonBase), 843364349U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavButtonBase_h_3797334710(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavButtonBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavButtonBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
