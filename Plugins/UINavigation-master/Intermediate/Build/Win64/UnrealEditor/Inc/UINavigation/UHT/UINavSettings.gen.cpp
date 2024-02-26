// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavEnhancedInputActions_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSettings();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	void UUINavSettings::StaticRegisterNativesUUINavSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavSettings);
	UClass* Z_Construct_UClass_UUINavSettings_NoRegister()
	{
		return UUINavSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUINavSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceNavigation_MetaData[];
#endif
		static void NewProp_bForceNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopNextPreviousNavigation_MetaData[];
#endif
		static void NewProp_bStopNextPreviousNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopNextPreviousNavigation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreDisabledButton_MetaData[];
#endif
		static void NewProp_bIgnoreDisabledButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreDisabledButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReturnOnPress_MetaData[];
#endif
		static void NewProp_bReturnOnPress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnPress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveWidgetOnReturn_MetaData[];
#endif
		static void NewProp_bRemoveWidgetOnReturn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveWidgetOnReturn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData[];
#endif
		static void NewProp_bRemoveActiveWidgetsOnEndPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveActiveWidgetsOnEndPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFocusOnViewportInGameAndUI_MetaData[];
#endif
		static void NewProp_bAllowFocusOnViewportInGameAndUI_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFocusOnViewportInGameAndUI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadInputIconsAsync_MetaData[];
#endif
		static void NewProp_bLoadInputIconsAsync_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadInputIconsAsync;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseMoveRebindThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MouseMoveRebindThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInputVersion_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentInputVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputContext_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnhancedInputContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputActions_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_EnhancedInputActions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UINavSettings.h" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09* Whether to force a button to always be visually shown as navigated, even if it's not being hovered by the mouse when using the mouse.\n\x09* If set to true, when the mouse unhovers a button, it's button style will continue as hovered, and if you then use the keyboard or the mouse, navigation will happen.\n\x09* If set to false, when the mouse unhovers a button, it's button style will be set back to normal, and if you then use the keyboard or the mouse for the first time,\n\x09* the hovered button style will be set, and only after the second input will navigation happen.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Whether to force a button to always be visually shown as navigated, even if it's not being hovered by the mouse when using the mouse.\n* If set to true, when the mouse unhovers a button, it's button style will continue as hovered, and if you then use the keyboard or the mouse, navigation will happen.\n* If set to false, when the mouse unhovers a button, it's button style will be set back to normal, and if you then use the keyboard or the mouse for the first time,\n* the hovered button style will be set, and only after the second input will navigation happen." },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bForceNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation = { "bForceNavigation", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether focus navigation should stop when using Next/Previous input\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether focus navigation should stop when using Next/Previous input" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bStopNextPreviousNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation = { "bStopNextPreviousNavigation", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether disabled buttons should be ignored for navigation\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether disabled buttons should be ignored for navigation" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bIgnoreDisabledButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton = { "bIgnoreDisabledButton", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to call the OnReturn event when you press or release the MenuReturn key\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to call the OnReturn event when you press or release the MenuReturn key" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bReturnOnPress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress = { "bReturnOnPress", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to call return to parent when using the Back/Return input\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to call return to parent when using the Back/Return input" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bRemoveWidgetOnReturn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn = { "bRemoveWidgetOnReturn", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to remove active UINavWidgets on EndPlay event\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to remove active UINavWidgets on EndPlay event" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bRemoveActiveWidgetsOnEndPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay = { "bRemoveActiveWidgetsOnEndPlay", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to allow a UINavComponent to lose focus to the viewport when in Input Mode GameAndUI\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to allow a UINavComponent to lose focus to the viewport when in Input Mode GameAndUI" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bAllowFocusOnViewportInGameAndUI = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI = { "bAllowFocusOnViewportInGameAndUI", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether to load the input icons asynchronously, in order to prevent Load Flushes\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether to load the input icons asynchronously, in order to prevent Load Flushes" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_SetBit(void* Obj)
	{
		((UUINavSettings*)Obj)->bLoadInputIconsAsync = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync = { "bLoadInputIconsAsync", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavSettings), &Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The amount of mouse movement delta that will trigger a rebind attempt when listening to a new key for input rebinding\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The amount of mouse movement delta that will trigger a rebind attempt when listening to a new key for input rebinding" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold = { "MouseMoveRebindThreshold", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, MouseMoveRebindThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Increment by 1 everytime your project's default inputs change\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Increment by 1 everytime your project's default inputs change" },
#endif
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion = { "CurrentInputVersion", nullptr, (EPropertyFlags)0x0010000000004015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, CurrentInputVersion), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext = { "EnhancedInputContext", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, EnhancedInputContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/UINavSettings.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions = { "EnhancedInputActions", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavSettings, EnhancedInputActions), Z_Construct_UClass_UUINavEnhancedInputActions_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions_MetaData), Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bForceNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bStopNextPreviousNavigation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bIgnoreDisabledButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bReturnOnPress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveWidgetOnReturn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bRemoveActiveWidgetsOnEndPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bAllowFocusOnViewportInGameAndUI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_bLoadInputIconsAsync,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_MouseMoveRebindThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_CurrentInputVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavSettings_Statics::NewProp_EnhancedInputActions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavSettings_Statics::ClassParams = {
		&UUINavSettings::StaticClass,
		"UINavSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUINavSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavSettings()
	{
		if (!Z_Registration_Info_UClass_UUINavSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavSettings.OuterSingleton, Z_Construct_UClass_UUINavSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavSettings.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavSettings>()
	{
		return UUINavSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavSettings);
	UUINavSettings::~UUINavSettings() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavSettings, UUINavSettings::StaticClass, TEXT("UUINavSettings"), &Z_Registration_Info_UClass_UUINavSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavSettings), 4135975961U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSettings_h_2486989291(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
