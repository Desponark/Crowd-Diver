// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Data/PromptData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromptData() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBase();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBase_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBinary();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBinary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UPromptDataBase::StaticRegisterNativesUPromptDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPromptDataBase);
	UClass* Z_Construct_UClass_UPromptDataBase_NoRegister()
	{
		return UPromptDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UPromptDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPromptDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/PromptData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/PromptData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromptDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromptDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPromptDataBase_Statics::ClassParams = {
		&UPromptDataBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UPromptDataBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPromptDataBase()
	{
		if (!Z_Registration_Info_UClass_UPromptDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPromptDataBase.OuterSingleton, Z_Construct_UClass_UPromptDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPromptDataBase.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UPromptDataBase>()
	{
		return UPromptDataBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromptDataBase);
	UPromptDataBase::~UPromptDataBase() {}
	void UPromptDataBinary::StaticRegisterNativesUPromptDataBinary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPromptDataBinary);
	UClass* Z_Construct_UClass_UPromptDataBinary_NoRegister()
	{
		return UPromptDataBinary::StaticClass();
	}
	struct Z_Construct_UClass_UPromptDataBinary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAccept_MetaData[];
#endif
		static void NewProp_bAccept_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccept;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPromptDataBinary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPromptDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBinary_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataBinary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Data/PromptData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/PromptData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept_MetaData[] = {
		{ "Category", "Prompt Data" },
		{ "ModuleRelativePath", "Public/Data/PromptData.h" },
	};
#endif
	void Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept_SetBit(void* Obj)
	{
		((UPromptDataBinary*)Obj)->bAccept = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept = { "bAccept", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UPromptDataBinary), &Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept_MetaData), Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPromptDataBinary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPromptDataBinary_Statics::NewProp_bAccept,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromptDataBinary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromptDataBinary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPromptDataBinary_Statics::ClassParams = {
		&UPromptDataBinary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPromptDataBinary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBinary_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBinary_Statics::Class_MetaDataParams), Z_Construct_UClass_UPromptDataBinary_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPromptDataBinary_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UPromptDataBinary()
	{
		if (!Z_Registration_Info_UClass_UPromptDataBinary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPromptDataBinary.OuterSingleton, Z_Construct_UClass_UPromptDataBinary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPromptDataBinary.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UPromptDataBinary>()
	{
		return UPromptDataBinary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromptDataBinary);
	UPromptDataBinary::~UPromptDataBinary() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPromptDataBase, UPromptDataBase::StaticClass, TEXT("UPromptDataBase"), &Z_Registration_Info_UClass_UPromptDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPromptDataBase), 1929968338U) },
		{ Z_Construct_UClass_UPromptDataBinary, UPromptDataBinary::StaticClass, TEXT("UPromptDataBinary"), &Z_Registration_Info_UClass_UPromptDataBinary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPromptDataBinary), 3481851161U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptData_h_4067732476(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_PromptData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
