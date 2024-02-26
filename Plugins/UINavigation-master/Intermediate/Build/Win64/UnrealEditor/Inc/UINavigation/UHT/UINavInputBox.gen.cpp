// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavInputBox.h"
#include "Data/InputContainerEnhancedActionData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavInputBox() {}
// Cross Module References
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputBox();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputBox_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavInputContainer_NoRegister();
	UINAVIGATION_API UScriptStruct* Z_Construct_UScriptStruct_FInputContainerEnhancedActionData();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	DEFINE_FUNCTION(UUINavInputBox::execInputComponent3Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputComponent3Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputBox::execInputComponent2Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputComponent2Clicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavInputBox::execInputComponent1Clicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputComponent1Clicked();
		P_NATIVE_END;
	}
	void UUINavInputBox::StaticRegisterNativesUUINavInputBox()
	{
		UClass* Class = UUINavInputBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InputComponent1Clicked", &UUINavInputBox::execInputComponent1Clicked },
			{ "InputComponent2Clicked", &UUINavInputBox::execInputComponent2Clicked },
			{ "InputComponent3Clicked", &UUINavInputBox::execInputComponent3Clicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputBox, nullptr, "InputComponent1Clicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputBox, nullptr, "InputComponent2Clicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavInputBox, nullptr, "InputComponent3Clicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavInputBox);
	UClass* Z_Construct_UClass_UUINavInputBox_NoRegister()
	{
		return UUINavInputBox::StaticClass();
	}
	struct Z_Construct_UClass_UUINavInputBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputButton1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputButton1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputButton2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputButton2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputButton3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputButton3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRichText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputRichText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Container_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputActionData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputTextStyleRowName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InputTextStyleRowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavInputBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavInputBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavInputBox_InputComponent1Clicked, "InputComponent1Clicked" }, // 2763153255
		{ &Z_Construct_UFunction_UUINavInputBox_InputComponent2Clicked, "InputComponent2Clicked" }, // 2249632916
		{ &Z_Construct_UFunction_UUINavInputBox_InputComponent3Clicked, "InputComponent3Clicked" }, // 1693900174
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class contains the logic for rebinding input keys to their respective actions\n*/" },
#endif
		{ "IncludePath", "UINavInputBox.h" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class contains the logic for rebinding input keys to their respective actions" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton1 = { "InputButton1", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputButton1), Z_Construct_UClass_UUINavInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton1_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton1_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton2 = { "InputButton2", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputButton2), Z_Construct_UClass_UUINavInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton2_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton2_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton3 = { "InputButton3", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputButton3), Z_Construct_UClass_UUINavInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton3_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton3_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputText = { "InputText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputText_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputRichText_MetaData[] = {
		{ "BindWidgetOptional", "" },
		{ "Category", "UINav Input" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputRichText = { "InputRichText", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputRichText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputRichText_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputRichText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_Container_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, Container), Z_Construct_UClass_UUINavInputContainer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_Container_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_Container_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputName_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputContext_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputContext = { "InputContext", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputContext_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputActionData_MetaData[] = {
		{ "Category", "Enhanced Input" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputActionData = { "InputActionData", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputActionData), Z_Construct_UScriptStruct_FInputContainerEnhancedActionData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputActionData_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputActionData_MetaData) }; // 2631849854
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputTextStyleRowName_MetaData[] = {
		{ "Category", "UINavPromptWidget" },
		{ "ModuleRelativePath", "Public/UINavInputBox.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputTextStyleRowName = { "InputTextStyleRowName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavInputBox, InputTextStyleRowName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputTextStyleRowName_MetaData), Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputTextStyleRowName_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavInputBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputButton3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputRichText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_Container,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputActionData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavInputBox_Statics::NewProp_InputTextStyleRowName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavInputBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavInputBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavInputBox_Statics::ClassParams = {
		&UUINavInputBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavInputBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavInputBox_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavInputBox_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavInputBox()
	{
		if (!Z_Registration_Info_UClass_UUINavInputBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavInputBox.OuterSingleton, Z_Construct_UClass_UUINavInputBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavInputBox.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavInputBox>()
	{
		return UUINavInputBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavInputBox);
	UUINavInputBox::~UUINavInputBox() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavInputBox, UUINavInputBox::StaticClass, TEXT("UUINavInputBox"), &Z_Registration_Info_UClass_UUINavInputBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavInputBox), 3690518577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputBox_h_1815372896(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
