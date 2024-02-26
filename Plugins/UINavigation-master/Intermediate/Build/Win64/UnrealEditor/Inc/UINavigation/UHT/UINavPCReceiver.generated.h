// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UINavPCReceiver.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUINavWidget;
enum class EInputType : uint8;
enum class EUINavigation : uint8;
#ifdef UINAVIGATION_UINavPCReceiver_generated_h
#error "UINavPCReceiver.generated.h already included, missing '#pragma once' in UINavPCReceiver.h"
#endif
#define UINAVIGATION_UINavPCReceiver_generated_h

#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_SPARSE_DATA
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPrevious); \
	DECLARE_FUNCTION(execOnNext); \
	DECLARE_FUNCTION(execOnReturn); \
	DECLARE_FUNCTION(execOnSelect); \
	DECLARE_FUNCTION(execOnNavigated); \
	DECLARE_FUNCTION(execOnActiveWidgetChanged); \
	DECLARE_FUNCTION(execOnControllerConnectionChanged); \
	DECLARE_FUNCTION(execOnInputChanged); \
	DECLARE_FUNCTION(execOnRootWidgetRemoved); \
	DECLARE_FUNCTION(execOnRootWidgetAdded);


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_ACCESSORS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_CALLBACK_WRAPPERS
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UINAVIGATION_API UUINavPCReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UINAVIGATION_API UUINavPCReceiver(UUINavPCReceiver&&); \
	UINAVIGATION_API UUINavPCReceiver(const UUINavPCReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UINAVIGATION_API, UUINavPCReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUINavPCReceiver); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUINavPCReceiver) \
	UINAVIGATION_API virtual ~UUINavPCReceiver();


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUINavPCReceiver(); \
	friend struct Z_Construct_UClass_UUINavPCReceiver_Statics; \
public: \
	DECLARE_CLASS(UUINavPCReceiver, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UINavigation"), UINAVIGATION_API) \
	DECLARE_SERIALIZER(UUINavPCReceiver)


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_GENERATED_UINTERFACE_BODY() \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUINavPCReceiver() {} \
public: \
	typedef UUINavPCReceiver UClassType; \
	typedef IUINavPCReceiver ThisClass; \
	static void Execute_OnActiveWidgetChanged(UObject* O, UUINavWidget* OldActiveWidget, UUINavWidget* NewActiveWidget); \
	static void Execute_OnControllerConnectionChanged(UObject* O, bool bConnected, int32 UserId, int32 UserIndex); \
	static void Execute_OnInputChanged(UObject* O, EInputType From, EInputType To); \
	static void Execute_OnNavigated(UObject* O, EUINavigation NavigationDirection); \
	static void Execute_OnNext(UObject* O); \
	static void Execute_OnPrevious(UObject* O); \
	static void Execute_OnReturn(UObject* O); \
	static void Execute_OnRootWidgetAdded(UObject* O); \
	static void Execute_OnRootWidgetRemoved(UObject* O); \
	static void Execute_OnSelect(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_12_PROLOG
#define FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_SPARSE_DATA \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_ACCESSORS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_CALLBACK_WRAPPERS \
	FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UINAVIGATION_API UClass* StaticClass<class UUINavPCReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavPCReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
