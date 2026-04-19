#ifndef UE4SS_SDK_WBP_Options_HPP
#define UE4SS_SDK_WBP_Options_HPP

class UWBP_Options_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x0418 (size: 0x8)
    class UScrollBox* AUDIO_ScrollBox;                                                // 0x0420 (size: 0x8)
    class UWBPC_Button_C* BTN_Apply;                                                  // 0x0428 (size: 0x8)
    class UWBPC_Button_C* BTN_ResetControlsAZERTY;                                    // 0x0430 (size: 0x8)
    class UWBPC_Button_C* BTN_ResetControlsQWERTY;                                    // 0x0438 (size: 0x8)
    class UWBPC_Button_C* BTN_TAB_Audio;                                              // 0x0440 (size: 0x8)
    class UWBPC_Button_C* BTN_Tab_Gameplay;                                           // 0x0448 (size: 0x8)
    class UWBPC_Button_C* BTN_Tab_Gfx;                                                // 0x0450 (size: 0x8)
    class UWBPC_Button_C* BTN_Tab_HUD;                                                // 0x0458 (size: 0x8)
    class UWBPC_Button_C* BTN_Tab_Input;                                              // 0x0460 (size: 0x8)
    class UWBP_Carousel_C* DifficultyCarousel;                                        // 0x0468 (size: 0x8)
    class UWBP_Carousel_C* DisplayCarousel;                                           // 0x0470 (size: 0x8)
    class UWBP_Carousel_C* FPSCarousel;                                               // 0x0478 (size: 0x8)
    class UScrollBox* GAMEPLAY_ScrollBox;                                             // 0x0480 (size: 0x8)
    class UScrollBox* GFX_ScrollBox;                                                  // 0x0488 (size: 0x8)
    class UScrollBox* HUD_ScrollBox;                                                  // 0x0490 (size: 0x8)
    class UImage* Image_87;                                                           // 0x0498 (size: 0x8)
    class UScrollBox* INPUT_ScrollBox;                                                // 0x04A0 (size: 0x8)
    class UWBP_Carousel_C* MusicCarousel;                                             // 0x04A8 (size: 0x8)
    class UWBP_Carousel_C* QualityCarousel;                                           // 0x04B0 (size: 0x8)
    class UWBP_Radio_C* RADIO_Controls;                                               // 0x04B8 (size: 0x8)
    class UWBP_Radio_C* RADIO_HUDDifficulty;                                          // 0x04C0 (size: 0x8)
    class UWBP_Radio_C* RADIO_HUDTimer;                                               // 0x04C8 (size: 0x8)
    class UWBP_Radio_C* RADIO_HUDTutorial;                                            // 0x04D0 (size: 0x8)
    class UWBP_Radio_C* RADIO_Style;                                                  // 0x04D8 (size: 0x8)
    class UWBP_Radio_C* RADIO_VSync;                                                  // 0x04E0 (size: 0x8)
    class UWBP_Carousel_C* ResolutionCarousel;                                        // 0x04E8 (size: 0x8)
    class UImage* Separator;                                                          // 0x04F0 (size: 0x8)
    class UImage* Separator_1;                                                        // 0x04F8 (size: 0x8)
    class UWBP_Carousel_C* SoundCarousel;                                             // 0x0500 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_LeanBackward;             // 0x0508 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_LeanForward;              // 0x0510 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_LeanLeft;                 // 0x0518 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_LeanRight;                // 0x0520 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_MoveBackward;             // 0x0528 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_MoveForward;              // 0x0530 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_MoveLeft;                 // 0x0538 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_MoveRight;                // 0x0540 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_Restart;                  // 0x0548 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_TurnLeft;                 // 0x0550 (size: 0x8)
    class UWBPC_KeySelectorButton_C* WBPC_KeySelectorButton_TurnRight;                // 0x0558 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_35;                                         // 0x0560 (size: 0x8)
    class USoundBase* SoundFantasy;                                                   // 0x0568 (size: 0x8)
    class USoundBase* SoundNoir;                                                      // 0x0570 (size: 0x8)

    void ApplyAudioSettings();
    void ResetInputMappingAZERTY();
    void ResetInputMappingQWERTY();
    void LoadInputMapping();
    void SaveInputMapping();
    void CycleTab(bool Right);
    void SwitchTab(class UWidget* Widget);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateResolutionSelection();
    void ApplySettings();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void SaveSettings();
    void LoadSettings();
    void OnCloseFinished();
    void CloseScreen();
    void BndEvt__WBP_Options_RADIO_Controls_K2Node_ComponentBoundEvent_0_SelectionChanged__DelegateSignature(int32 Index);
    void BndEvt__WBP_Options_RADIO_Controls_1_K2Node_ComponentBoundEvent_1_SelectionChanged__DelegateSignature(int32 Index);
    void Construct();
    void BndEvt__WBP_Options_BTN_Apply_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BP_OnActivated();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_Options_DisplayCarousel_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature(int32 Index);
    void BndEvt__WBP_Options_FPSCarousel_K2Node_ComponentBoundEvent_4_OnSelectionChanged__DelegateSignature(int32 Index);
    void BndEvt__WBP_Options_RADIO_VSync_K2Node_ComponentBoundEvent_5_SelectionChanged__DelegateSignature(int32 Index);
    void BndEvt__WBP_Options_BTN_Tab_Gfx_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_BTN_TAB_Audio_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_BTN_Tab_Gameplay_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_BTN_Tab_HUD_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_BTN_Tab_Input_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_BTN_ResetControls_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_BTN_ResetControlsAZERTY_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void BndEvt__WBP_Options_MusicCarousel_K2Node_ComponentBoundEvent_13_OnSelectionChanged__DelegateSignature(int32 Index);
    void BndEvt__WBP_Options_SoundCarousel_K2Node_ComponentBoundEvent_14_OnSelectionChanged__DelegateSignature(int32 Index);
    void ExecuteUbergraph_WBP_Options(int32 EntryPoint);
}; // Size: 0x578

#endif
