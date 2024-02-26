// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UINavInputDisplay.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
enum class EAxisType : uint8;
enum class EInputAxis : uint8;
#ifdef UINAVIGATION_UINavInputDisplay_generated_h
#error "UINavInputDisplay.generated.h already included, missing '#pragma once' in UINavInputDisplay.h"
#endif
#define UINAVIGATION_UINavInputDisplay_generated_h

#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_SPARSE_DATA
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetInputAction); \
	DECLARE_FUNCTION(execUpdateInputVisuals);


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUINavInputDisplay(); \
	friend struct Z_Construct_UClass_UUINavInputDisplay_Statics; \
public: \
	DECLARE_CLASS(UUINavInputDisplay, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UINavigation"), NO_API) \
	DECLARE_SERIALIZER(UUINavInputDisplay)


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUINavInputDisplay(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUINavInputDisplay(UUINavInputDisplay&&); \
	NO_API UUINavInputDisplay(const UUINavInputDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUINavInputDisplay); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUINavInputDisplay); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUINavInputDisplay) \
	NO_API virtual ~UUINavInputDisplay();


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_22_PROLOG
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_SPARSE_DATA \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_INCLASS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UINAVIGATION_API UClass* StaticClass<class UUINavInputDisplay>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavInputDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
