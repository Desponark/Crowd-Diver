// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UINavInputContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPromptDataBase;
class UUINavInputBox;
enum class ERevertRebindReason : uint8;
struct FKey;
#ifdef UINAVIGATION_UINavInputContainer_generated_h
#error "UINavInputContainer.generated.h already included, missing '#pragma once' in UINavInputContainer.h"
#endif
#define UINAVIGATION_UINavInputContainer_generated_h

#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_SPARSE_DATA
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSwapKeysDecided); \
	DECLARE_FUNCTION(execRespectsRestriction); \
	DECLARE_FUNCTION(execCanUseKey); \
	DECLARE_FUNCTION(execGetInputBoxAtIndex); \
	DECLARE_FUNCTION(execResetKeyMappings); \
	DECLARE_FUNCTION(execOnRebindCancelled); \
	DECLARE_FUNCTION(execOnKeyRebinded); \
	DECLARE_FUNCTION(execOnAddInputBox);


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_CALLBACK_WRAPPERS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUINavInputContainer(); \
	friend struct Z_Construct_UClass_UUINavInputContainer_Statics; \
public: \
	DECLARE_CLASS(UUINavInputContainer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UINavigation"), NO_API) \
	DECLARE_SERIALIZER(UUINavInputContainer)


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUINavInputContainer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUINavInputContainer(UUINavInputContainer&&); \
	NO_API UUINavInputContainer(const UUINavInputContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUINavInputContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUINavInputContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUINavInputContainer) \
	NO_API virtual ~UUINavInputContainer();


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_25_PROLOG
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_SPARSE_DATA \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_CALLBACK_WRAPPERS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_INCLASS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UINAVIGATION_API UClass* StaticClass<class UUINavInputContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
