// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentActions/GoToWidgetAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoToWidgetAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UINAVIGATION_API UClass* Z_Construct_UClass_UGoToWidgetAction();
	UINAVIGATION_API UClass* Z_Construct_UClass_UGoToWidgetAction_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentAction();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UGoToWidgetAction::StaticRegisterNativesUGoToWidgetAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGoToWidgetAction);
	UClass* Z_Construct_UClass_UGoToWidgetAction_NoRegister()
	{
		return UGoToWidgetAction::StaticClass();
	}
	struct Z_Construct_UClass_UGoToWidgetAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveParent_MetaData[];
#endif
		static void NewProp_bRemoveParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyParent_MetaData[];
#endif
		static void NewProp_bDestroyParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGoToWidgetAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavComponentAction,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToWidgetAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ComponentActions/GoToWidgetAction.h" },
		{ "ModuleRelativePath", "Public/ComponentActions/GoToWidgetAction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "GoToWidgetAction" },
		{ "ModuleRelativePath", "Public/ComponentActions/GoToWidgetAction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoToWidgetAction, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_WidgetClass_MetaData), Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_WidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent_MetaData[] = {
		{ "Category", "GoToWidgetAction" },
		{ "ModuleRelativePath", "Public/ComponentActions/GoToWidgetAction.h" },
	};
#endif
	void Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent_SetBit(void* Obj)
	{
		((UGoToWidgetAction*)Obj)->bRemoveParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent = { "bRemoveParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoToWidgetAction), &Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent_MetaData), Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent_MetaData[] = {
		{ "Category", "GoToWidgetAction" },
		{ "ModuleRelativePath", "Public/ComponentActions/GoToWidgetAction.h" },
	};
#endif
	void Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent_SetBit(void* Obj)
	{
		((UGoToWidgetAction*)Obj)->bDestroyParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent = { "bDestroyParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGoToWidgetAction), &Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent_MetaData), Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_ZOrder_MetaData[] = {
		{ "Category", "GoToWidgetAction" },
		{ "ModuleRelativePath", "Public/ComponentActions/GoToWidgetAction.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGoToWidgetAction, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_ZOrder_MetaData), Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_ZOrder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGoToWidgetAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bRemoveParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_bDestroyParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGoToWidgetAction_Statics::NewProp_ZOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGoToWidgetAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGoToWidgetAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGoToWidgetAction_Statics::ClassParams = {
		&UGoToWidgetAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGoToWidgetAction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UGoToWidgetAction_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGoToWidgetAction_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UGoToWidgetAction()
	{
		if (!Z_Registration_Info_UClass_UGoToWidgetAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGoToWidgetAction.OuterSingleton, Z_Construct_UClass_UGoToWidgetAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGoToWidgetAction.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UGoToWidgetAction>()
	{
		return UGoToWidgetAction::StaticClass();
	}
	UGoToWidgetAction::UGoToWidgetAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGoToWidgetAction);
	UGoToWidgetAction::~UGoToWidgetAction() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_GoToWidgetAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_GoToWidgetAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGoToWidgetAction, UGoToWidgetAction::StaticClass, TEXT("UGoToWidgetAction"), &Z_Registration_Info_UClass_UGoToWidgetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGoToWidgetAction), 1536948675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_GoToWidgetAction_h_909531753(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_GoToWidgetAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_GoToWidgetAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
