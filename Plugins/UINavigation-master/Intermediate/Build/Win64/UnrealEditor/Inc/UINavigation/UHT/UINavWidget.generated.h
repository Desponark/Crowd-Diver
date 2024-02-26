// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UINavWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPromptDataBase;
class UScrollBox;
class UUINavComponent;
class UUINavPromptWidget;
class UUINavWidget;
enum class EInputType : uint8;
#ifdef UINAVIGATION_UINavWidget_generated_h
#error "UINavWidget.generated.h already included, missing '#pragma once' in UINavWidget.h"
#endif
#define UINAVIGATION_UINavWidget_generated_h

#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_23_DELEGATE \
UINAVIGATION_API void FPromptWidgetDecided_DelegateWrapper(const FScriptDelegate& PromptWidgetDecided, const UPromptDataBase* PromptData);


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_SPARSE_DATA
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execReturnToParent); \
	DECLARE_FUNCTION(execGoToBuiltWidget); \
	DECLARE_FUNCTION(execGoToPromptWidget); \
	DECLARE_FUNCTION(execGoToWidget); \
	DECLARE_FUNCTION(execIsSelectorValid); \
	DECLARE_FUNCTION(execGetMostOuterUINavWidget); \
	DECLARE_FUNCTION(execOnHorizCompUpdated); \
	DECLARE_FUNCTION(execOnHorizCompNavigateRight); \
	DECLARE_FUNCTION(execOnHorizCompNavigateLeft); \
	DECLARE_FUNCTION(execOnSetupCompleted); \
	DECLARE_FUNCTION(execPreSetup); \
	DECLARE_FUNCTION(execOnInputChanged); \
	DECLARE_FUNCTION(execOnPrevious); \
	DECLARE_FUNCTION(execOnNext); \
	DECLARE_FUNCTION(execOnReturn); \
	DECLARE_FUNCTION(execOnStopSelect); \
	DECLARE_FUNCTION(execOnStartSelect); \
	DECLARE_FUNCTION(execOnSelect); \
	DECLARE_FUNCTION(execOnNavigate); \
	DECLARE_FUNCTION(execIsRebindingInput); \
	DECLARE_FUNCTION(execIsSelectorVisible); \
	DECLARE_FUNCTION(execSetSelectorVisible); \
	DECLARE_FUNCTION(execSetSelectorScale); \
	DECLARE_FUNCTION(execUpdateSelectorLocation); \
	DECLARE_FUNCTION(execGetScrollBoxToFocus); \
	DECLARE_FUNCTION(execOnLostNavigation); \
	DECLARE_FUNCTION(execOnGainedNavigation); \
	DECLARE_FUNCTION(execGetInitialFocusComponent); \
	DECLARE_FUNCTION(execConfigureUINavPC);


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_CALLBACK_WRAPPERS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUINavWidget(); \
	friend struct Z_Construct_UClass_UUINavWidget_Statics; \
public: \
	DECLARE_CLASS(UUINavWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UINavigation"), NO_API) \
	DECLARE_SERIALIZER(UUINavWidget)


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUINavWidget(UUINavWidget&&); \
	NO_API UUINavWidget(const UUINavWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUINavWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUINavWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUINavWidget) \
	NO_API virtual ~UUINavWidget();


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_28_PROLOG
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_SPARSE_DATA \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_CALLBACK_WRAPPERS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_INCLASS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UINAVIGATION_API UClass* StaticClass<class UUINavWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
