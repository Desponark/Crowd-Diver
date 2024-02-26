// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavInputComponent() {}
// Cross Module References
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputComponent();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UUINavInputComponent::StaticRegisterNativesUUINavInputComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavInputComponent);
	UClass* Z_Construct_UClass_UUINavInputComponent_NoRegister()
	{
		return UUINavInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_UUINavInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUINavComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputComponent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavInputComponent.h" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage = { "InputImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputComponent, InputImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage_MetaData), Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputComponent_Statics::NewProp_InputImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavInputComponent_Statics::ClassParams = {
		&UUINavInputComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavInputComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavInputComponent()
	{
		if (!Z_Registration_Info_UClass_UUINavInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavInputComponent.OuterSingleton, Z_Construct_UClass_UUINavInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavInputComponent.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavInputComponent>()
	{
		return UUINavInputComponent::StaticClass();
	}
	UUINavInputComponent::UUINavInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavInputComponent);
	UUINavInputComponent::~UUINavInputComponent() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavInputComponent, UUINavInputComponent::StaticClass, TEXT("UUINavInputComponent"), &Z_Registration_Info_UClass_UUINavInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavInputComponent), 3287873489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputComponent_h_836585681(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
