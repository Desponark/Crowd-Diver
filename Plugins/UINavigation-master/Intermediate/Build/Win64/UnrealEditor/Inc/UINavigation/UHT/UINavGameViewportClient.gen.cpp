// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavGameViewportClient.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavGameViewportClient() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavGameViewportClient();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavGameViewportClient_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UUINavGameViewportClient::StaticRegisterNativesUUINavGameViewportClient()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavGameViewportClient);
	UClass* Z_Construct_UClass_UUINavGameViewportClient_NoRegister()
	{
		return UUINavGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UUINavGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavGameViewportClient_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavGameViewportClient_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavGameViewportClient.h" },
		{ "ModuleRelativePath", "Public/UINavGameViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavGameViewportClient>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavGameViewportClient_Statics::ClassParams = {
		&UUINavGameViewportClient::StaticClass,
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
		0x001000ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavGameViewportClient_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUINavGameViewportClient()
	{
		if (!Z_Registration_Info_UClass_UUINavGameViewportClient.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavGameViewportClient.OuterSingleton, Z_Construct_UClass_UUINavGameViewportClient_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavGameViewportClient.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavGameViewportClient>()
	{
		return UUINavGameViewportClient::StaticClass();
	}
	UUINavGameViewportClient::UUINavGameViewportClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavGameViewportClient);
	UUINavGameViewportClient::~UUINavGameViewportClient() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavGameViewportClient_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavGameViewportClient_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavGameViewportClient, UUINavGameViewportClient::StaticClass, TEXT("UUINavGameViewportClient"), &Z_Registration_Info_UClass_UUINavGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavGameViewportClient), 814200953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavGameViewportClient_h_2983316642(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavGameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavGameViewportClient_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
