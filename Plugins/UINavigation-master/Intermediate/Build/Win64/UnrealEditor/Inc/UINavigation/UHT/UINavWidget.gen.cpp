// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UINavWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUINavWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UPromptDataBase_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPCComponent_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavPromptWidget_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidget();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidget_NoRegister();
	UINAVIGATION_API UClass* Z_Construct_UClass_UUINavWidgetComponent_NoRegister();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EInputType();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_ESelectorPosition();
	UINAVIGATION_API UEnum* Z_Construct_UEnum_UINavigation_EThumbstickAsMouse();
	UINAVIGATION_API UFunction* Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature();
	UMG_API UClass* Z_Construct_UClass_UScrollBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UINavigation();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics
	{
		struct _Script_UINavigation_eventPromptWidgetDecided_Parms
		{
			const UPromptDataBase* PromptData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PromptData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::NewProp_PromptData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::NewProp_PromptData = { "PromptData", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_UINavigation_eventPromptWidgetDecided_Parms, PromptData), Z_Construct_UClass_UPromptDataBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::NewProp_PromptData_MetaData), Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::NewProp_PromptData_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::NewProp_PromptData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_UINavigation, nullptr, "PromptWidgetDecided__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::_Script_UINavigation_eventPromptWidgetDecided_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::_Script_UINavigation_eventPromptWidgetDecided_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FPromptWidgetDecided_DelegateWrapper(const FScriptDelegate& PromptWidgetDecided, const UPromptDataBase* PromptData)
{
	struct _Script_UINavigation_eventPromptWidgetDecided_Parms
	{
		const UPromptDataBase* PromptData;
	};
	_Script_UINavigation_eventPromptWidgetDecided_Parms Parms;
	Parms.PromptData=PromptData;
	PromptWidgetDecided.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UUINavWidget::execReturnToParent)
	{
		P_GET_UBOOL(Z_Param_bRemoveAllParents);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReturnToParent(Z_Param_bRemoveAllParents,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execGoToBuiltWidget)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_NewWidget);
		P_GET_UBOOL(Z_Param_bRemoveParent);
		P_GET_UBOOL(Z_Param_bDestroyParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GoToBuiltWidget(Z_Param_NewWidget,Z_Param_bRemoveParent,Z_Param_bDestroyParent,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execGoToPromptWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Event);
		P_GET_PROPERTY(FTextProperty,Z_Param_Title);
		P_GET_PROPERTY(FTextProperty,Z_Param_Message);
		P_GET_UBOOL(Z_Param_bRemoveParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GoToPromptWidget(Z_Param_NewWidgetClass,FPromptWidgetDecided(Z_Param_Out_Event),Z_Param_Title,Z_Param_Message,Z_Param_bRemoveParent,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execGoToWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_GET_UBOOL(Z_Param_bRemoveParent);
		P_GET_UBOOL(Z_Param_bDestroyParent);
		P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GoToWidget(Z_Param_NewWidgetClass,Z_Param_bRemoveParent,Z_Param_bDestroyParent,Z_Param_ZOrder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execIsSelectorValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectorValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execGetMostOuterUINavWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavWidget**)Z_Param__Result=P_THIS->GetMostOuterUINavWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnHorizCompUpdated)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHorizCompUpdated_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnHorizCompNavigateRight)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHorizCompNavigateRight_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnHorizCompNavigateLeft)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHorizCompNavigateLeft_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnSetupCompleted)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetupCompleted_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execPreSetup)
	{
		P_GET_UBOOL(Z_Param_bFirstSetup);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreSetup_Implementation(Z_Param_bFirstSetup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnInputChanged)
	{
		P_GET_ENUM(EInputType,Z_Param_From);
		P_GET_ENUM(EInputType,Z_Param_To);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInputChanged_Implementation(EInputType(Z_Param_From),EInputType(Z_Param_To));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnPrevious)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrevious_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnNext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNext_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnReturn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReturn_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnStopSelect)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStopSelect_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnStartSelect)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartSelect_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnSelect)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelect_Implementation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnNavigate)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_FromComponent);
		P_GET_OBJECT(UUINavComponent,Z_Param_ToComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNavigate_Implementation(Z_Param_FromComponent,Z_Param_ToComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execIsRebindingInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRebindingInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execIsSelectorVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSelectorVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execSetSelectorVisible)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectorVisible(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execSetSelectorScale)
	{
		P_GET_STRUCT(FVector2D,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSelectorScale(Z_Param_NewScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execUpdateSelectorLocation)
	{
		P_GET_OBJECT(UUINavComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSelectorLocation(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execGetScrollBoxToFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UScrollBox**)Z_Param__Result=P_THIS->GetScrollBoxToFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnLostNavigation)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_NewActiveWidget);
		P_GET_UBOOL(Z_Param_bToChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLostNavigation_Implementation(Z_Param_NewActiveWidget,Z_Param_bToChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execOnGainedNavigation)
	{
		P_GET_OBJECT(UUINavWidget,Z_Param_PreviousActiveWidget);
		P_GET_UBOOL(Z_Param_bFromChild);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGainedNavigation_Implementation(Z_Param_PreviousActiveWidget,Z_Param_bFromChild);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execGetInitialFocusComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUINavComponent**)Z_Param__Result=P_THIS->GetInitialFocusComponent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUINavWidget::execConfigureUINavPC)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConfigureUINavPC();
		P_NATIVE_END;
	}
	struct UINavWidget_eventGetInitialFocusComponent_Parms
	{
		UUINavComponent* ReturnValue;

		/** Constructor, initializes return property only **/
		UINavWidget_eventGetInitialFocusComponent_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct UINavWidget_eventGetScrollBoxToFocus_Parms
	{
		UScrollBox* ReturnValue;

		/** Constructor, initializes return property only **/
		UINavWidget_eventGetScrollBoxToFocus_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct UINavWidget_eventOnGainedNavigation_Parms
	{
		UUINavWidget* PreviousActiveWidget;
		bool bFromChild;
	};
	struct UINavWidget_eventOnHorizCompNavigateLeft_Parms
	{
		UUINavComponent* Component;
	};
	struct UINavWidget_eventOnHorizCompNavigateRight_Parms
	{
		UUINavComponent* Component;
	};
	struct UINavWidget_eventOnHorizCompUpdated_Parms
	{
		UUINavComponent* Component;
	};
	struct UINavWidget_eventOnInputChanged_Parms
	{
		EInputType From;
		EInputType To;
	};
	struct UINavWidget_eventOnLostNavigation_Parms
	{
		UUINavWidget* NewActiveWidget;
		bool bToChild;
	};
	struct UINavWidget_eventOnNavigate_Parms
	{
		UUINavComponent* FromComponent;
		UUINavComponent* ToComponent;
	};
	struct UINavWidget_eventOnSelect_Parms
	{
		UUINavComponent* Component;
	};
	struct UINavWidget_eventOnStartSelect_Parms
	{
		UUINavComponent* Component;
	};
	struct UINavWidget_eventOnStopSelect_Parms
	{
		UUINavComponent* Component;
	};
	struct UINavWidget_eventPreSetup_Parms
	{
		bool bFirstSetup;
	};
	static FName NAME_UUINavWidget_GetInitialFocusComponent = FName(TEXT("GetInitialFocusComponent"));
	UUINavComponent* UUINavWidget::GetInitialFocusComponent()
	{
		UINavWidget_eventGetInitialFocusComponent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_GetInitialFocusComponent),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUINavWidget_GetScrollBoxToFocus = FName(TEXT("GetScrollBoxToFocus"));
	UScrollBox* UUINavWidget::GetScrollBoxToFocus()
	{
		UINavWidget_eventGetScrollBoxToFocus_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_GetScrollBoxToFocus),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UUINavWidget_OnGainedNavigation = FName(TEXT("OnGainedNavigation"));
	void UUINavWidget::OnGainedNavigation(UUINavWidget* PreviousActiveWidget, bool bFromChild)
	{
		UINavWidget_eventOnGainedNavigation_Parms Parms;
		Parms.PreviousActiveWidget=PreviousActiveWidget;
		Parms.bFromChild=bFromChild ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnGainedNavigation),&Parms);
	}
	static FName NAME_UUINavWidget_OnHorizCompNavigateLeft = FName(TEXT("OnHorizCompNavigateLeft"));
	void UUINavWidget::OnHorizCompNavigateLeft(UUINavComponent* Component)
	{
		UINavWidget_eventOnHorizCompNavigateLeft_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnHorizCompNavigateLeft),&Parms);
	}
	static FName NAME_UUINavWidget_OnHorizCompNavigateRight = FName(TEXT("OnHorizCompNavigateRight"));
	void UUINavWidget::OnHorizCompNavigateRight(UUINavComponent* Component)
	{
		UINavWidget_eventOnHorizCompNavigateRight_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnHorizCompNavigateRight),&Parms);
	}
	static FName NAME_UUINavWidget_OnHorizCompUpdated = FName(TEXT("OnHorizCompUpdated"));
	void UUINavWidget::OnHorizCompUpdated(UUINavComponent* Component)
	{
		UINavWidget_eventOnHorizCompUpdated_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnHorizCompUpdated),&Parms);
	}
	static FName NAME_UUINavWidget_OnInputChanged = FName(TEXT("OnInputChanged"));
	void UUINavWidget::OnInputChanged(const EInputType From, const EInputType To)
	{
		UINavWidget_eventOnInputChanged_Parms Parms;
		Parms.From=From;
		Parms.To=To;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnInputChanged),&Parms);
	}
	static FName NAME_UUINavWidget_OnLostNavigation = FName(TEXT("OnLostNavigation"));
	void UUINavWidget::OnLostNavigation(UUINavWidget* NewActiveWidget, bool bToChild)
	{
		UINavWidget_eventOnLostNavigation_Parms Parms;
		Parms.NewActiveWidget=NewActiveWidget;
		Parms.bToChild=bToChild ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnLostNavigation),&Parms);
	}
	static FName NAME_UUINavWidget_OnNavigate = FName(TEXT("OnNavigate"));
	void UUINavWidget::OnNavigate(UUINavComponent* FromComponent, UUINavComponent* ToComponent)
	{
		UINavWidget_eventOnNavigate_Parms Parms;
		Parms.FromComponent=FromComponent;
		Parms.ToComponent=ToComponent;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnNavigate),&Parms);
	}
	static FName NAME_UUINavWidget_OnNext = FName(TEXT("OnNext"));
	void UUINavWidget::OnNext()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnNext),NULL);
	}
	static FName NAME_UUINavWidget_OnPrevious = FName(TEXT("OnPrevious"));
	void UUINavWidget::OnPrevious()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnPrevious),NULL);
	}
	static FName NAME_UUINavWidget_OnReturn = FName(TEXT("OnReturn"));
	void UUINavWidget::OnReturn()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnReturn),NULL);
	}
	static FName NAME_UUINavWidget_OnSelect = FName(TEXT("OnSelect"));
	void UUINavWidget::OnSelect(UUINavComponent* Component)
	{
		UINavWidget_eventOnSelect_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnSelect),&Parms);
	}
	static FName NAME_UUINavWidget_OnSetupCompleted = FName(TEXT("OnSetupCompleted"));
	void UUINavWidget::OnSetupCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnSetupCompleted),NULL);
	}
	static FName NAME_UUINavWidget_OnStartSelect = FName(TEXT("OnStartSelect"));
	void UUINavWidget::OnStartSelect(UUINavComponent* Component)
	{
		UINavWidget_eventOnStartSelect_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnStartSelect),&Parms);
	}
	static FName NAME_UUINavWidget_OnStopSelect = FName(TEXT("OnStopSelect"));
	void UUINavWidget::OnStopSelect(UUINavComponent* Component)
	{
		UINavWidget_eventOnStopSelect_Parms Parms;
		Parms.Component=Component;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_OnStopSelect),&Parms);
	}
	static FName NAME_UUINavWidget_PreSetup = FName(TEXT("PreSetup"));
	void UUINavWidget::PreSetup(bool bFirstSetup)
	{
		UINavWidget_eventPreSetup_Parms Parms;
		Parms.bFirstSetup=bFirstSetup ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUINavWidget_PreSetup),&Parms);
	}
	void UUINavWidget::StaticRegisterNativesUUINavWidget()
	{
		UClass* Class = UUINavWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConfigureUINavPC", &UUINavWidget::execConfigureUINavPC },
			{ "GetInitialFocusComponent", &UUINavWidget::execGetInitialFocusComponent },
			{ "GetMostOuterUINavWidget", &UUINavWidget::execGetMostOuterUINavWidget },
			{ "GetScrollBoxToFocus", &UUINavWidget::execGetScrollBoxToFocus },
			{ "GoToBuiltWidget", &UUINavWidget::execGoToBuiltWidget },
			{ "GoToPromptWidget", &UUINavWidget::execGoToPromptWidget },
			{ "GoToWidget", &UUINavWidget::execGoToWidget },
			{ "IsRebindingInput", &UUINavWidget::execIsRebindingInput },
			{ "IsSelectorValid", &UUINavWidget::execIsSelectorValid },
			{ "IsSelectorVisible", &UUINavWidget::execIsSelectorVisible },
			{ "OnGainedNavigation", &UUINavWidget::execOnGainedNavigation },
			{ "OnHorizCompNavigateLeft", &UUINavWidget::execOnHorizCompNavigateLeft },
			{ "OnHorizCompNavigateRight", &UUINavWidget::execOnHorizCompNavigateRight },
			{ "OnHorizCompUpdated", &UUINavWidget::execOnHorizCompUpdated },
			{ "OnInputChanged", &UUINavWidget::execOnInputChanged },
			{ "OnLostNavigation", &UUINavWidget::execOnLostNavigation },
			{ "OnNavigate", &UUINavWidget::execOnNavigate },
			{ "OnNext", &UUINavWidget::execOnNext },
			{ "OnPrevious", &UUINavWidget::execOnPrevious },
			{ "OnReturn", &UUINavWidget::execOnReturn },
			{ "OnSelect", &UUINavWidget::execOnSelect },
			{ "OnSetupCompleted", &UUINavWidget::execOnSetupCompleted },
			{ "OnStartSelect", &UUINavWidget::execOnStartSelect },
			{ "OnStopSelect", &UUINavWidget::execOnStopSelect },
			{ "PreSetup", &UUINavWidget::execPreSetup },
			{ "ReturnToParent", &UUINavWidget::execReturnToParent },
			{ "SetSelectorScale", &UUINavWidget::execSetSelectorScale },
			{ "SetSelectorVisible", &UUINavWidget::execSetSelectorVisible },
			{ "UpdateSelectorLocation", &UUINavWidget::execUpdateSelectorLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Configures the UINavPC\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Configures the UINavPC" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "ConfigureUINavPC", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGetInitialFocusComponent_Parms, ReturnValue), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "GetInitialFocusComponent", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::PropPointers), sizeof(UINavWidget_eventGetInitialFocusComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventGetInitialFocusComponent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics
	{
		struct UINavWidget_eventGetMostOuterUINavWidget_Parms
		{
			UUINavWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGetMostOuterUINavWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "GetMostOuterUINavWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::UINavWidget_eventGetMostOuterUINavWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::UINavWidget_eventGetMostOuterUINavWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGetScrollBoxToFocus_Parms, ReturnValue), Z_Construct_UClass_UScrollBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "GetScrollBoxToFocus", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::PropPointers), sizeof(UINavWidget_eventGetScrollBoxToFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventGetScrollBoxToFocus_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics
	{
		struct UINavWidget_eventGoToBuiltWidget_Parms
		{
			UUINavWidget* NewWidget;
			bool bRemoveParent;
			bool bDestroyParent;
			int32 ZOrder;
			UUINavWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveParent_MetaData[];
#endif
		static void NewProp_bRemoveParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyParent_MetaData[];
#endif
		static void NewProp_bDestroyParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_NewWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_NewWidget = { "NewWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToBuiltWidget_Parms, NewWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_NewWidget_MetaData), Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_NewWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent_SetBit(void* Obj)
	{
		((UINavWidget_eventGoToBuiltWidget_Parms*)Obj)->bRemoveParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent = { "bRemoveParent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventGoToBuiltWidget_Parms), &Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent_MetaData), Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent_SetBit(void* Obj)
	{
		((UINavWidget_eventGoToBuiltWidget_Parms*)Obj)->bDestroyParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent = { "bDestroyParent", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventGoToBuiltWidget_Parms), &Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent_MetaData), Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToBuiltWidget_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToBuiltWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_NewWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bRemoveParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_bDestroyParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Adds given widget to screen (strongly recommended over manual alternative)\n\x09*\n\x09*\x09@param\x09NewWidget  Object instance of the UINavWidget to add to the screen\n\x09*\x09@param\x09""bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n\x09*\x09@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n\x09*\x09@param  ZOrder Order to display the widget\n\x09*/" },
#endif
		{ "CPP_Default_bDestroyParent", "false" },
		{ "CPP_Default_ZOrder", "0" },
		{ "DeterminesOutputType", "NewWidgetClass" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds given widget to screen (strongly recommended over manual alternative)\n\n@param  NewWidget  Object instance of the UINavWidget to add to the screen\n@param  bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n@param  ZOrder Order to display the widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "GoToBuiltWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::UINavWidget_eventGoToBuiltWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::UINavWidget_eventGoToBuiltWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics
	{
		struct UINavWidget_eventGoToPromptWidget_Parms
		{
			TSubclassOf<UUINavPromptWidget>  NewWidgetClass;
			FScriptDelegate Event;
			FText Title;
			FText Message;
			bool bRemoveParent;
			int32 ZOrder;
			UUINavWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Event;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Message;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveParent_MetaData[];
#endif
		static void NewProp_bRemoveParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToPromptWidget_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUINavPromptWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Event_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToPromptWidget_Parms, Event), Z_Construct_UDelegateFunction_UINavigation_PromptWidgetDecided__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Event_MetaData), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Event_MetaData) }; // 3275676231
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToPromptWidget_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Title_MetaData), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Title_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToPromptWidget_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Message_MetaData), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Message_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent_SetBit(void* Obj)
	{
		((UINavWidget_eventGoToPromptWidget_Parms*)Obj)->bRemoveParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent = { "bRemoveParent", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventGoToPromptWidget_Parms), &Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent_MetaData), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToPromptWidget_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToPromptWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_NewWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Event,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Title,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_Message,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_bRemoveParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Adds given widget to screen (strongly recommended over manual alternative)\n\x09*\n\x09*\x09@param\x09NewWidgetClass  The class of the widget to add to the screen\n\x09*\x09@param\x09""bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n\x09*\x09@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n\x09*\x09@param  ZOrder Order to display the widget\n\x09*/" },
#endif
		{ "CPP_Default_bRemoveParent", "false" },
		{ "CPP_Default_Message", "" },
		{ "CPP_Default_Title", "" },
		{ "CPP_Default_ZOrder", "0" },
		{ "DeterminesOutputType", "NewWidgetClass" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds given widget to screen (strongly recommended over manual alternative)\n\n@param  NewWidgetClass  The class of the widget to add to the screen\n@param  bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n@param  ZOrder Order to display the widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "GoToPromptWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::UINavWidget_eventGoToPromptWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::UINavWidget_eventGoToPromptWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_GoToPromptWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_GoToPromptWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics
	{
		struct UINavWidget_eventGoToWidget_Parms
		{
			TSubclassOf<UUINavWidget>  NewWidgetClass;
			bool bRemoveParent;
			bool bDestroyParent;
			int32 ZOrder;
			UUINavWidget* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveParent_MetaData[];
#endif
		static void NewProp_bRemoveParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyParent_MetaData[];
#endif
		static void NewProp_bDestroyParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToWidget_Parms, NewWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent_SetBit(void* Obj)
	{
		((UINavWidget_eventGoToWidget_Parms*)Obj)->bRemoveParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent = { "bRemoveParent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventGoToWidget_Parms), &Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent_MetaData), Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent_SetBit(void* Obj)
	{
		((UINavWidget_eventGoToWidget_Parms*)Obj)->bDestroyParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent = { "bDestroyParent", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventGoToWidget_Parms), &Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent_MetaData), Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToWidget_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ZOrder_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventGoToWidget_Parms, ReturnValue), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_NewWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bRemoveParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_bDestroyParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ZOrder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Adds given widget to screen (strongly recommended over manual alternative)\n\x09*\n\x09*\x09@param\x09NewWidgetClass  The class of the widget to add to the screen\n\x09*\x09@param\x09""bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n\x09*\x09@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n\x09*\x09@param  ZOrder Order to display the widget\n\x09*/" },
#endif
		{ "CPP_Default_bDestroyParent", "false" },
		{ "CPP_Default_bRemoveParent", "true" },
		{ "CPP_Default_ZOrder", "0" },
		{ "DeterminesOutputType", "NewWidgetClass" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds given widget to screen (strongly recommended over manual alternative)\n\n@param  NewWidgetClass  The class of the widget to add to the screen\n@param  bRemoveParent  Whether to remove the parent widget (this widget) from the viewport\n@param  bDestroyParent  Whether to destruct the parent widget (this widget)\n@param  ZOrder Order to display the widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "GoToWidget", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::UINavWidget_eventGoToWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::UINavWidget_eventGoToWidget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_GoToWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_GoToWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics
	{
		struct UINavWidget_eventIsRebindingInput_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavWidget_eventIsRebindingInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventIsRebindingInput_Parms), &Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "IsRebindingInput", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::UINavWidget_eventIsRebindingInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::UINavWidget_eventIsRebindingInput_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_IsRebindingInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_IsRebindingInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics
	{
		struct UINavWidget_eventIsSelectorValid_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavWidget_eventIsSelectorValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventIsSelectorValid_Parms), &Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "IsSelectorValid", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::UINavWidget_eventIsSelectorValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::UINavWidget_eventIsSelectorValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_IsSelectorValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_IsSelectorValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics
	{
		struct UINavWidget_eventIsSelectorVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UINavWidget_eventIsSelectorVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventIsSelectorVisible_Parms), &Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "IsSelectorVisible", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::UINavWidget_eventIsSelectorVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::UINavWidget_eventIsSelectorVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_IsSelectorVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_IsSelectorVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviousActiveWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousActiveWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFromChild_MetaData[];
#endif
		static void NewProp_bFromChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_PreviousActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_PreviousActiveWidget = { "PreviousActiveWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnGainedNavigation_Parms, PreviousActiveWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_PreviousActiveWidget_MetaData), Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_PreviousActiveWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild_SetBit(void* Obj)
	{
		((UINavWidget_eventOnGainedNavigation_Parms*)Obj)->bFromChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild = { "bFromChild", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventOnGainedNavigation_Parms), &Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild_MetaData), Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_PreviousActiveWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::NewProp_bFromChild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when navigation is gained\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when navigation is gained" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnGainedNavigation", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::PropPointers), sizeof(UINavWidget_eventOnGainedNavigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnGainedNavigation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnGainedNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnGainedNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnHorizCompNavigateLeft_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when the user navigates left on a UINavComponentBox\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the user navigates left on a UINavComponentBox" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnHorizCompNavigateLeft", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::PropPointers), sizeof(UINavWidget_eventOnHorizCompNavigateLeft_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnHorizCompNavigateLeft_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnHorizCompNavigateRight_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when the user navigates right on a UINavComponentBox\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the user navigates right on a UINavComponentBox" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnHorizCompNavigateRight", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::PropPointers), sizeof(UINavWidget_eventOnHorizCompNavigateRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnHorizCompNavigateRight_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnHorizCompUpdated_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Called when a HorizontalComponent was updated\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when a HorizontalComponent was updated" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnHorizCompUpdated", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::PropPointers), sizeof(UINavWidget_eventOnHorizCompUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnHorizCompUpdated_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_From_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_From_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_From;
		static const UECodeGen_Private::FBytePropertyParams NewProp_To_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_To_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_To;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From = { "From", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnInputChanged_Parms, From), Z_Construct_UEnum_UINavigation_EInputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From_MetaData), Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From_MetaData) }; // 431819982
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To = { "To", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnInputChanged_Parms, To), Z_Construct_UEnum_UINavigation_EInputType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To_MetaData), Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To_MetaData) }; // 431819982
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_From,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::NewProp_To,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when the input type changed\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the input type changed" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnInputChanged", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::PropPointers), sizeof(UINavWidget_eventOnInputChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnInputChanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnInputChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnInputChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActiveWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bToChild_MetaData[];
#endif
		static void NewProp_bToChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bToChild;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_NewActiveWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_NewActiveWidget = { "NewActiveWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnLostNavigation_Parms, NewActiveWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_NewActiveWidget_MetaData), Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_NewActiveWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild_SetBit(void* Obj)
	{
		((UINavWidget_eventOnLostNavigation_Parms*)Obj)->bToChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild = { "bToChild", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventOnLostNavigation_Parms), &Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild_MetaData), Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_NewActiveWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::NewProp_bToChild,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when navigation is lost\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when navigation is lost" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnLostNavigation", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::PropPointers), sizeof(UINavWidget_eventOnLostNavigation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnLostNavigation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnLostNavigation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnLostNavigation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FromComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FromComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ToComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_FromComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_FromComponent = { "FromComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnNavigate_Parms, FromComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_FromComponent_MetaData), Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_FromComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_ToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_ToComponent = { "ToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnNavigate_Parms, ToComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_ToComponent_MetaData), Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_ToComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_FromComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::NewProp_ToComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when the button with the specified index was navigated upon\n\x09*\n\x09*\x09@param\x09""From  The index of the button that was navigated from\n\x09*\x09@param\x09To  The index of the button that was navigated to\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the button with the specified index was navigated upon\n\n@param  From  The index of the button that was navigated from\n@param  To  The index of the button that was navigated to" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnNavigate", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::PropPointers), sizeof(UINavWidget_eventOnNavigate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnNavigate_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnNavigate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnNavigate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnNext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnNext_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when player navigates to the next section\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when player navigates to the next section" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnNext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnNext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnNext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnNext_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavWidget_OnNext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnNext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnPrevious_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnPrevious_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when player navigates to the previous section\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when player navigates to the previous section" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnPrevious_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnPrevious", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnPrevious_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnPrevious_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavWidget_OnPrevious()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnPrevious_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnReturn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnReturn_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when ReturnToParent is called (i.e. the player wants to exit the menu)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when ReturnToParent is called (i.e. the player wants to exit the menu)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnReturn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnReturn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnReturn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnReturn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavWidget_OnReturn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnReturn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnSelect_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnSelect_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09Notifies that a button was selected, and indicates its index\n\x09*\n\x09*\x09@param\x09Index  The index of the button that was selected\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies that a button was selected, and indicates its index\n\n@param  Index  The index of the button that was selected" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnSelect", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::PropPointers), sizeof(UINavWidget_eventOnSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnSelect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnSetupCompleted_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnSetupCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called when this widget completed UINavSetup\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this widget completed UINavSetup" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnSetupCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnSetupCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnSetupCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnSetupCompleted_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UUINavWidget_OnSetupCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnSetupCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnStartSelect_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnStartSelect", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::PropPointers), sizeof(UINavWidget_eventOnStartSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnStartSelect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnStartSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnStartSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventOnStopSelect_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "OnStopSelect", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::PropPointers), sizeof(UINavWidget_eventOnStopSelect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventOnStopSelect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_OnStopSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_OnStopSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_PreSetup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFirstSetup_MetaData[];
#endif
		static void NewProp_bFirstSetup_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstSetup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup_SetBit(void* Obj)
	{
		((UINavWidget_eventPreSetup_Parms*)Obj)->bFirstSetup = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup = { "bFirstSetup", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventPreSetup_Parms), &Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup_MetaData), Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::NewProp_bFirstSetup,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Called before this widget is setup for UINav logic\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before this widget is setup for UINav logic" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "PreSetup", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::PropPointers), sizeof(UINavWidget_eventPreSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::PropPointers) < 2048);
	static_assert(sizeof(UINavWidget_eventPreSetup_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_PreSetup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_PreSetup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics
	{
		struct UINavWidget_eventReturnToParent_Parms
		{
			bool bRemoveAllParents;
			int32 ZOrder;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveAllParents_MetaData[];
#endif
		static void NewProp_bRemoveAllParents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveAllParents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents_SetBit(void* Obj)
	{
		((UINavWidget_eventReturnToParent_Parms*)Obj)->bRemoveAllParents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents = { "bRemoveAllParents", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventReturnToParent_Parms), &Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents_MetaData), Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventReturnToParent_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_ZOrder_MetaData), Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_ZOrder_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_bRemoveAllParents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::NewProp_ZOrder,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Adds this widget's parent to the viewport (if applicable)\n\x09*\x09""and removes this widget from viewport\n\x09*/" },
#endif
		{ "CPP_Default_bRemoveAllParents", "false" },
		{ "CPP_Default_ZOrder", "0" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds this widget's parent to the viewport (if applicable)\nand removes this widget from viewport" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "ReturnToParent", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::UINavWidget_eventReturnToParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::UINavWidget_eventReturnToParent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_ReturnToParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_ReturnToParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics
	{
		struct UINavWidget_eventSetSelectorScale_Parms
		{
			FVector2D NewScale;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventSetSelectorScale_Parms, NewScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Changes the selector's scale to the scale given\n\x09*\n\x09*\x09@param\x09NewScale  The selector's new scale\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the selector's scale to the scale given\n\n@param  NewScale  The selector's new scale" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "SetSelectorScale", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::UINavWidget_eventSetSelectorScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::UINavWidget_eventSetSelectorScale_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_SetSelectorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_SetSelectorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics
	{
		struct UINavWidget_eventSetSelectorVisible_Parms
		{
			bool bVisible;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((UINavWidget_eventSetSelectorVisible_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UINavWidget_eventSetSelectorVisible_Parms), &Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible_MetaData), Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Changes the selector's visibility\n\x09*\n\x09*\x09@param\x09""bVisible Whether the selector will be visible\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the selector's visibility\n\n@param  bVisible Whether the selector will be visible" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "SetSelectorVisible", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::UINavWidget_eventSetSelectorVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::UINavWidget_eventSetSelectorVisible_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_SetSelectorVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_SetSelectorVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics
	{
		struct UINavWidget_eventUpdateSelectorLocation_Parms
		{
			UUINavComponent* Component;
		};
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UINavWidget_eventUpdateSelectorLocation_Parms, Component), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::NewProp_Component_MetaData), Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::NewProp_Component_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09*\x09""Changes the selector's location to that of the button with the given index in the Button's array\n\x09*\n\x09*\x09@param\x09Index  The new button's index in the Button's array\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Changes the selector's location to that of the button with the given index in the Button's array\n\n@param  Index  The new button's index in the Button's array" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUINavWidget, nullptr, "UpdateSelectorLocation", nullptr, nullptr, Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::UINavWidget_eventUpdateSelectorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::UINavWidget_eventUpdateSelectorLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUINavWidget);
	UClass* Z_Construct_UClass_UUINavWidget_NoRegister()
	{
		return UUINavWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUINavWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateSelectorPrevComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateSelectorPrevComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateSelectorNextComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UpdateSelectorNextComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoveredComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoveredComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IgnoreHoverComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_IgnoreHoverComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TheSelector_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TheSelector;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildUINavWidgets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildUINavWidgets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildUINavWidgets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OuterUINavWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OuterUINavWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UINavPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UINavPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnedFromWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnedFromWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bParentRemoved_MetaData[];
#endif
		static void NewProp_bParentRemoved_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bParentRemoved;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDestroyParent_MetaData[];
#endif
		static void NewProp_bShouldDestroyParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDestroyParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRemoveIfRoot_MetaData[];
#endif
		static void NewProp_bAllowRemoveIfRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRemoveIfRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSelector_MetaData[];
#endif
		static void NewProp_bShowSelector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSelector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainNavigationForChild_MetaData[];
#endif
		static void NewProp_bMaintainNavigationForChild_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainNavigationForChild;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputContextsToAdd_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputContextsToAdd_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputContextsToAdd;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UseThumbstickAsMouse_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseThumbstickAsMouse_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UseThumbstickAsMouse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullscreenWhenSplitscreen_MetaData[];
#endif
		static void NewProp_bUseFullscreenWhenSplitscreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullscreenWhenSplitscreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceUsePlayerScreen_MetaData[];
#endif
		static void NewProp_bForceUsePlayerScreen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUsePlayerScreen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveCurve;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectorPositioning_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorPositioning_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectorPositioning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectorOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectorOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUINavWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UINavigation,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UUINavWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUINavWidget_ConfigureUINavPC, "ConfigureUINavPC" }, // 3863243281
		{ &Z_Construct_UFunction_UUINavWidget_GetInitialFocusComponent, "GetInitialFocusComponent" }, // 2596875155
		{ &Z_Construct_UFunction_UUINavWidget_GetMostOuterUINavWidget, "GetMostOuterUINavWidget" }, // 3004234158
		{ &Z_Construct_UFunction_UUINavWidget_GetScrollBoxToFocus, "GetScrollBoxToFocus" }, // 1114488969
		{ &Z_Construct_UFunction_UUINavWidget_GoToBuiltWidget, "GoToBuiltWidget" }, // 3266584882
		{ &Z_Construct_UFunction_UUINavWidget_GoToPromptWidget, "GoToPromptWidget" }, // 324514811
		{ &Z_Construct_UFunction_UUINavWidget_GoToWidget, "GoToWidget" }, // 3513978567
		{ &Z_Construct_UFunction_UUINavWidget_IsRebindingInput, "IsRebindingInput" }, // 220782414
		{ &Z_Construct_UFunction_UUINavWidget_IsSelectorValid, "IsSelectorValid" }, // 1978097097
		{ &Z_Construct_UFunction_UUINavWidget_IsSelectorVisible, "IsSelectorVisible" }, // 851211961
		{ &Z_Construct_UFunction_UUINavWidget_OnGainedNavigation, "OnGainedNavigation" }, // 4144608738
		{ &Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateLeft, "OnHorizCompNavigateLeft" }, // 4086222795
		{ &Z_Construct_UFunction_UUINavWidget_OnHorizCompNavigateRight, "OnHorizCompNavigateRight" }, // 2714521985
		{ &Z_Construct_UFunction_UUINavWidget_OnHorizCompUpdated, "OnHorizCompUpdated" }, // 126414506
		{ &Z_Construct_UFunction_UUINavWidget_OnInputChanged, "OnInputChanged" }, // 1171955356
		{ &Z_Construct_UFunction_UUINavWidget_OnLostNavigation, "OnLostNavigation" }, // 3860180206
		{ &Z_Construct_UFunction_UUINavWidget_OnNavigate, "OnNavigate" }, // 1785840668
		{ &Z_Construct_UFunction_UUINavWidget_OnNext, "OnNext" }, // 4119971109
		{ &Z_Construct_UFunction_UUINavWidget_OnPrevious, "OnPrevious" }, // 3899792578
		{ &Z_Construct_UFunction_UUINavWidget_OnReturn, "OnReturn" }, // 2687113803
		{ &Z_Construct_UFunction_UUINavWidget_OnSelect, "OnSelect" }, // 4001397824
		{ &Z_Construct_UFunction_UUINavWidget_OnSetupCompleted, "OnSetupCompleted" }, // 3518891595
		{ &Z_Construct_UFunction_UUINavWidget_OnStartSelect, "OnStartSelect" }, // 1150030379
		{ &Z_Construct_UFunction_UUINavWidget_OnStopSelect, "OnStopSelect" }, // 3621985873
		{ &Z_Construct_UFunction_UUINavWidget_PreSetup, "PreSetup" }, // 2966692276
		{ &Z_Construct_UFunction_UUINavWidget_ReturnToParent, "ReturnToParent" }, // 2998284401
		{ &Z_Construct_UFunction_UUINavWidget_SetSelectorScale, "SetSelectorScale" }, // 2912386155
		{ &Z_Construct_UFunction_UUINavWidget_SetSelectorVisible, "SetSelectorVisible" }, // 2456456308
		{ &Z_Construct_UFunction_UUINavWidget_UpdateSelectorLocation, "UpdateSelectorLocation" }, // 83304786
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n* This class contains the logic for UserWidget navigation\n*/" },
#endif
		{ "IncludePath", "UINavWidget.h" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This class contains the logic for UserWidget navigation" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorPrevComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorPrevComponent = { "UpdateSelectorPrevComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, UpdateSelectorPrevComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorPrevComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorPrevComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorNextComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorNextComponent = { "UpdateSelectorNextComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, UpdateSelectorNextComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorNextComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorNextComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_FirstComponent_MetaData[] = {
		{ "Category", "UINavWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_FirstComponent = { "FirstComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, FirstComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_FirstComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_FirstComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_CurrentComponent_MetaData[] = {
		{ "Category", "UINavWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_CurrentComponent = { "CurrentComponent", nullptr, (EPropertyFlags)0x002008000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, CurrentComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_CurrentComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_CurrentComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_HoveredComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_HoveredComponent = { "HoveredComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, HoveredComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_HoveredComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_HoveredComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectedComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectedComponent = { "SelectedComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, SelectedComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectedComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectedComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_IgnoreHoverComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_IgnoreHoverComponent = { "IgnoreHoverComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, IgnoreHoverComponent), Z_Construct_UClass_UUINavComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_IgnoreHoverComponent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_IgnoreHoverComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_TheSelector_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The UserWidget object that will move along the Widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
		{ "OptionalWidget", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UserWidget object that will move along the Widget" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_TheSelector = { "TheSelector", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, TheSelector), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_TheSelector_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_TheSelector_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets_Inner = { "ChildUINavWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//All the child UINavWidgets in this Widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the child UINavWidgets in this Widget" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets = { "ChildUINavWidgets", nullptr, (EPropertyFlags)0x001000800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, ChildUINavWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_ParentWidget_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reference to the parent widget that created this widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the parent widget that created this widget" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, ParentWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_ParentWidget_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_ParentWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_OuterUINavWidget_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Reference to the widget that encapsulates this widget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the widget that encapsulates this widget" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_OuterUINavWidget = { "OuterUINavWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, OuterUINavWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_OuterUINavWidget_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_OuterUINavWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_UINavPC_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current player controller\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current player controller" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_UINavPC = { "UINavPC", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, UINavPC), Z_Construct_UClass_UUINavPCComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_UINavPC_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_UINavPC_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_ReturnedFromWidget_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Widget that created this widget (if returned from a child)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widget that created this widget (if returned from a child)" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_ReturnedFromWidget = { "ReturnedFromWidget", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, ReturnedFromWidget), Z_Construct_UClass_UUINavWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_ReturnedFromWidget_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_ReturnedFromWidget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_WidgetComp_MetaData[] = {
		{ "Category", "UINavWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_WidgetComp = { "WidgetComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, WidgetComp), Z_Construct_UClass_UUINavWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_WidgetComp_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_WidgetComp_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Should this widget remove its parent from the viewport when created?\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this widget remove its parent from the viewport when created?" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bParentRemoved = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved = { "bParentRemoved", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Should this widget destroy its parent\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should this widget destroy its parent" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bShouldDestroyParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent = { "bShouldDestroyParent", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If set to true, this widget will be removed if it has no ParentWidget and is returned from\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, this widget will be removed if it has no ParentWidget and is returned from" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bAllowRemoveIfRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot = { "bAllowRemoveIfRoot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If set to true, this widget will show the selector it has, otherwise it will hide it.\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, this widget will show the selector it has, otherwise it will hide it." },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bShowSelector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector = { "bShowSelector", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* If set to true, the UINavWidget will maintain its navigated state when navigation moves to a child nested widget,\n\x09* otherwise, the button being navigated to at that moment will be navigated out of.\n\x09* Only applies when using nested UINavWidgets.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* If set to true, the UINavWidget will maintain its navigated state when navigation moves to a child nested widget,\n* otherwise, the button being navigated to at that moment will be navigated out of.\n* Only applies when using nested UINavWidgets." },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bMaintainNavigationForChild = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild = { "bMaintainNavigationForChild", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild_MetaData) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd_Inner = { "InputContextsToAdd", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09* Input Contexts to be applied when this widget becomes active (and to be removed when it becomes inactive)\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Input Contexts to be applied when this widget becomes active (and to be removed when it becomes inactive)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd = { "InputContextsToAdd", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, InputContextsToAdd), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If set to Left or Right, the gamepad's left or right thumbstick will be used to move the mouse when this widget is active */" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to Left or Right, the gamepad's left or right thumbstick will be used to move the mouse when this widget is active" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse = { "UseThumbstickAsMouse", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, UseThumbstickAsMouse), Z_Construct_UEnum_UINavigation_EThumbstickAsMouse, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse_MetaData) }; // 3468446706
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*If set to true, the widget will be set to fullscreen even when using split screen */" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, the widget will be set to fullscreen even when using split screen" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bUseFullscreenWhenSplitscreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen = { "bUseFullscreenWhenSplitscreen", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen_MetaData[] = {
		{ "Category", "UINavWidget" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If set to true, will always use AddToPlayerScreen instead of AddToViewport, even if not in split screen\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true, will always use AddToPlayerScreen instead of AddToViewport, even if not in split screen" },
#endif
	};
#endif
	void Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen_SetBit(void* Obj)
	{
		((UUINavWidget*)Obj)->bForceUsePlayerScreen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen = { "bForceUsePlayerScreen", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUINavWidget), &Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_MoveCurve_MetaData[] = {
		{ "Category", "UINavigation Selector" },
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_MoveCurve = { "MoveCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, MoveCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_MoveCurve_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_MoveCurve_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning_MetaData[] = {
		{ "Category", "UINavigation Selector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The position the selector will be in relative to the button\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The position the selector will be in relative to the button" },
#endif
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning = { "SelectorPositioning", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, SelectorPositioning), Z_Construct_UEnum_UINavigation_ESelectorPosition, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning_MetaData) }; // 2406911776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorOffset_MetaData[] = {
		{ "Category", "UINavigation Selector" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The offset to apply when positioning the selector on a button\n" },
#endif
		{ "ModuleRelativePath", "Public/UINavWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The offset to apply when positioning the selector on a button" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorOffset = { "SelectorOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUINavWidget, SelectorOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorOffset_MetaData), Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorOffset_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUINavWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorPrevComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_UpdateSelectorNextComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_FirstComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_CurrentComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_HoveredComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_IgnoreHoverComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_TheSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_ChildUINavWidgets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_ParentWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_OuterUINavWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_UINavPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_ReturnedFromWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_WidgetComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bParentRemoved,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShouldDestroyParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bAllowRemoveIfRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bShowSelector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bMaintainNavigationForChild,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_InputContextsToAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_UseThumbstickAsMouse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bUseFullscreenWhenSplitscreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_bForceUsePlayerScreen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_MoveCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorPositioning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUINavWidget_Statics::NewProp_SelectorOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUINavWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUINavWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUINavWidget_Statics::ClassParams = {
		&UUINavWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUINavWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UUINavWidget_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUINavWidget_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UUINavWidget()
	{
		if (!Z_Registration_Info_UClass_UUINavWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUINavWidget.OuterSingleton, Z_Construct_UClass_UUINavWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUINavWidget.OuterSingleton;
	}
	template<> UINAVIGATION_API UClass* StaticClass<UUINavWidget>()
	{
		return UUINavWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUINavWidget);
	UUINavWidget::~UUINavWidget() {}
	struct Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUINavWidget, UUINavWidget::StaticClass, TEXT("UUINavWidget"), &Z_Registration_Info_UClass_UUINavWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUINavWidget), 3112186529U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_37971012(TEXT("/Script/UINavigation"),
		Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectX_Plugins_UINavigation_master_Source_UINavigation_Public_UINavWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
