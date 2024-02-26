// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComponentActions/UINavComponentAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavComponentAction() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentAction();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponentAction_NoRegister();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EComponentAction();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FComponentActions();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentActions;
class UScriptStruct* FComponentActions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentActions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentActions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentActions, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("ComponentActions"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentActions.OuterSingleton;
}
template<> UINAVIGATION_API UScriptStruct* StaticStruct<FComponentActions>()
{
	return FComponentActions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentActions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentActions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ComponentActions/UINavComponentAction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentActions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentActions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "UINavComponentAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ComponentActions/UINavComponentAction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0002000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUINavComponentAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_Inner_MetaData), Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_Inner_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_MetaData[] = {
		{ "Category", "UINavComponentAction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ComponentActions/UINavComponentAction.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x001000800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FComponentActions, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_MetaData), Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComponentActions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComponentActions_Statics::NewProp_Actions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentActions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		&NewStructOps,
		"ComponentActions",
		Z_Construct_UScriptStruct_FComponentActions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentActions_Statics::PropPointers),
		sizeof(FComponentActions),
		alignof(FComponentActions),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentActions_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FComponentActions_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentActions_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FComponentActions()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentActions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentActions.InnerSingleton, Z_Construct_UScriptStruct_FComponentActions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentActions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EComponentAction;
	static UEnum* EComponentAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EComponentAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EComponentAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UINavigation_EComponentAction, (UObject*)Z_Construct_UPackage__Script_UINavigation(), TEXT("EComponentAction"));
		}
		return Z_Registration_Info_UEnum_EComponentAction.OuterSingleton;
	}
	template<> UINAVIGATION_API UEnum* StaticEnum<EComponentAction>()
	{
		return EComponentAction_StaticEnum();
	}
	struct Z_Construct_UEnum_UINavigation_EComponentAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UINavigation_EComponentAction_Statics::Enumerators[] = {
		{ "EComponentAction::OnClicked", (int64)EComponentAction::OnClicked },
		{ "EComponentAction::OnPressed", (int64)EComponentAction::OnPressed },
		{ "EComponentAction::OnReleased", (int64)EComponentAction::OnReleased },
		{ "EComponentAction::OnNavigatedTo", (int64)EComponentAction::OnNavigatedTo },
		{ "EComponentAction::OnNavigatedFrom", (int64)EComponentAction::OnNavigatedFrom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UINavigation_EComponentAction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ComponentActions/UINavComponentAction.h" },
		{ "OnClicked.Name", "EComponentAction::OnClicked" },
		{ "OnNavigatedFrom.Name", "EComponentAction::OnNavigatedFrom" },
		{ "OnNavigatedTo.Name", "EComponentAction::OnNavigatedTo" },
		{ "OnPressed.Name", "EComponentAction::OnPressed" },
		{ "OnReleased.Name", "EComponentAction::OnReleased" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UINavigation_EComponentAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UINavigation,
		nullptr,
		"EComponentAction",
		"EComponentAction",
		Z_Construct_UEnum_UINavigation_EComponentAction_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EComponentAction_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_UINavigation_EComponentAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_UINavigation_EComponentAction_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_UINavigation_EComponentAction()
	{
		if (!Z_Registration_Info_UEnum_EComponentAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EComponentAction.InnerSingleton, Z_Construct_UEnum_UINavigation_EComponentAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EComponentAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UUINavComponentAction::execExecuteAction)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteAction_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	struct UINavComponentAction_eventExecuteAction_Parms
	{
		UUINavComponent* Component;
	};
	static FName NAME_UUINavComponentAction_ExecuteAction = FName(TEXT("ExecuteAction"));
	void UUINavComponentAction::ExecuteAction(UUINavComponent* Component)
	{
		UINavComponentAction_eventExecuteAction_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavComponentAction_ExecuteAction),&Parms);
	}
	void UUINavComponentAction::StaticRegisterNativesUUINavComponentAction()
	{
		UClass* Class = UUINavComponentAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExecuteAction", &UUINavComponentAction::execExecuteAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavComponentAction_eventExecuteAction_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavComponentAction" },
		{ "ModuleRelativePath", "Public/ComponentActions/UINavComponentAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavComponentAction, nullptr, "ExecuteAction", nullptr, nullptr, Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::PropPointers), sizeof(UINavComponentAction_eventExecuteAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavComponentAction_eventExecuteAction_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavComponentAction_ExecuteAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavComponentAction_ExecuteAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavComponentAction);
	UClass* Z_Construct_UClass_UUINavComponentAction_NoRegister()
	{
		return UUINavComponentAction::StaticClass();
	}
	struct Z_Construct_UClass_UUINavComponentAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavComponentAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavComponentAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavComponentAction_ExecuteAction, "ExecuteAction" }, // 856576886
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavComponentAction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ComponentActions/UINavComponentAction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ComponentActions/UINavComponentAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavComponentAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavComponentAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavComponentAction_Statics::ClassParams = {
		&UUINavComponentAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavComponentAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavComponentAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UUINavComponentAction()
	{
		if (!Z_Registration_Info_UClass_UUINavComponentAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavComponentAction.OuterSingleton, Z_Construct_UClass_UUINavComponentAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavComponentAction.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavComponentAction>()
	{
		return UUINavComponentAction::StaticClass();
	}
	UUINavComponentAction::UUINavComponentAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavComponentAction);
	UUINavComponentAction::~UUINavComponentAction() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::EnumInfo[] = {
		{ EComponentAction_StaticEnum, TEXT("EComponentAction"), &Z_Registration_Info_UEnum_EComponentAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3846460985U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::ScriptStructInfo[] = {
		{ FComponentActions::StaticStruct, Z_Construct_UScriptStruct_FComponentActions_Statics::NewStructOps, TEXT("ComponentActions"), &Z_Registration_Info_UScriptStruct_ComponentActions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentActions), 1359910958U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavComponentAction, UUINavComponentAction::StaticClass, TEXT("UUINavComponentAction"), &Z_Registration_Info_UClass_UUINavComponentAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavComponentAction), 1157206438U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_3096105682(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_ComponentActions_UINavComponentAction_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
