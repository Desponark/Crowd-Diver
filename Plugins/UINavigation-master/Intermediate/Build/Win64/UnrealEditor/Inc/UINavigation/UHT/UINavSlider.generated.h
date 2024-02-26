// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UINavSlider.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UINAVIGATION_UINavSlider_generated_h
#error "UINavSlider.generated.h already included, missing '#pragma once' in UINavSlider.h"
#endif
#define UINAVIGATION_UINavSlider_generated_h

#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_SPARSE_DATA
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetSliderValue); \
	DECLARE_FUNCTION(execSetValueClamped); \
	DECLARE_FUNCTION(execGetCurrentValue); \
	DECLARE_FUNCTION(execHandleOnSpinBoxValueChanged); \
	DECLARE_FUNCTION(execHandleOnMouseCaptureEnd); \
	DECLARE_FUNCTION(execHandleOnSliderValueChanged);


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUINavSlider(); \
	friend struct Z_Construct_UClass_UUINavSlider_Statics; \
public: \
	DECLARE_CLASS(UUINavSlider, UUINavHorizontalComponent, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UINavigation"), NO_API) \
	DECLARE_SERIALIZER(UUINavSlider)


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUINavSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUINavSlider(UUINavSlider&&); \
	NO_API UUINavSlider(const UUINavSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUINavSlider); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUINavSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUINavSlider) \
	NO_API virtual ~UUINavSlider();


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_11_PROLOG
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_SPARSE_DATA \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UINAVIGATION_API UClass* StaticClass<class UUINavSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
