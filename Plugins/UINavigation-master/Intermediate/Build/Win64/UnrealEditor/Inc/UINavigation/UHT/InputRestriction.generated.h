// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/InputRestriction.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UINAVIGATION_InputRestriction_generated_h
#error "InputRestriction.generated.h already included, missing '#pragma once' in InputRestriction.h"
#endif
#define UINAVIGATION_InputRestriction_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_Data_InputRestriction_h


#define FOREACH_ENUM_EINPUTRESTRICTION(op) \
	op(EInputRestriction::None) \
	op(EInputRestriction::Keyboard) \
	op(EInputRestriction::Mouse) \
	op(EInputRestriction::Keyboard_Mouse) \
	op(EInputRestriction::Gamepad) \
	op(EInputRestriction::VR) 

enum class EInputRestriction : uint8;
template<> struct TIsUEnumClass<EInputRestriction> { enum { Value = true }; };
template<> UINAVIGATION_API UEnum* StaticEnum<EInputRestriction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
