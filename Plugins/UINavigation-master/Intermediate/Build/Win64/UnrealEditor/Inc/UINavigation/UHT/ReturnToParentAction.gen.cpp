// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentActions/ReturnToParentAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReturnToParentAction() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UReturnToParentAction();
	UINAVIGATION_API UClass* Z_Construct_UClass_UReturnToParentAction_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentAction();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UReturnToParentAction::StaticRegisterNativesUReturnToParentAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UReturnToParentAction);
	UClass* Z_Construct_UClass_UReturnToParentAction_NoRegister()
	{
		return UReturnToParentAction::StaticClass();
	}
	struct Z_Construct_UClass_UReturnToParentAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveAllParents_MetaData[];
#endif
		static void NewProp_bRemoveAllParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAllParents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReturnToParentAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavComponentAction,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToParentAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToParentAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ComponentActions/ReturnToParentAction.h" },
		{ "ModuleRelativePath", "Public/ComponentActions/ReturnToParentAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents_MetaData[] = {
		{ "Category", "ReturnToParentAction" },
		{ "ModuleRelativePath", "Public/ComponentActions/ReturnToParentAction.h" },
	};
#endif
	void Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents_SetBit(void* Obj)
	{
		((UReturnToParentAction*)Obj)->bRemoveAllParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents = { "bRemoveAllParents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UReturnToParentAction), &Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents_MetaData), Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UReturnToParentAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UReturnToParentAction_Statics::NewProp_bRemoveAllParents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReturnToParentAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReturnToParentAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UReturnToParentAction_Statics::ClassParams = {
		&UReturnToParentAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UReturnToParentAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToParentAction_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToParentAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UReturnToParentAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UReturnToParentAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UReturnToParentAction()
	{
		if (!Z_Registration_Info_UClass_UReturnToParentAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UReturnToParentAction.OuterSingleton, Z_Construct_UClass_UReturnToParentAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UReturnToParentAction.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UReturnToParentAction>()
	{
		return UReturnToParentAction::StaticClass();
	}
	UReturnToParentAction::UReturnToParentAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReturnToParentAction);
	UReturnToParentAction::~UReturnToParentAction() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_ReturnToParentAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_ReturnToParentAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UReturnToParentAction, UReturnToParentAction::StaticClass, TEXT("UReturnToParentAction"), &Z_Registration_Info_UClass_UReturnToParentAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UReturnToParentAction), 2368432092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_ReturnToParentAction_h_4243478907(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_ReturnToParentAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_ReturnToParentAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
