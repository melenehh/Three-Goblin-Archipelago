#ifndef UE4SS_SDK_WBP_PauseMenu_HPP
#define UE4SS_SDK_WBP_PauseMenu_HPP

class UWBP_PauseMenu_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* SwitchScreen;                                             // 0x0418 (size: 0x8)
    class UWidgetAnimation* ScreenOut;                                                // 0x0420 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x0428 (size: 0x8)
    class UWBPC_Button_C* BTN_Continue;                                               // 0x0430 (size: 0x8)
    class UWBPC_Button_C* BTN_Editor;                                                 // 0x0438 (size: 0x8)
    class UWBPC_Button_C* BTN_MainMenu;                                               // 0x0440 (size: 0x8)
    class UWBPC_Button_C* BTN_Restart;                                                // 0x0448 (size: 0x8)
    class UWBPC_Button_C* BTN_Settings;                                               // 0x0450 (size: 0x8)
    class UWBPC_Button_C* BTN_Tips;                                                   // 0x0458 (size: 0x8)
    class UImage* Fade;                                                               // 0x0460 (size: 0x8)
    class UImage* Image_76;                                                           // 0x0468 (size: 0x8)
    class UCanvasPanel* MainCanvas;                                                   // 0x0470 (size: 0x8)
    class UWBP_Options_C* WBP_Controls;                                               // 0x0478 (size: 0x8)
    class UWBP_DisguiseIndicator_C* WBP_DisguiseIndicator;                            // 0x0480 (size: 0x8)
    class UWBP_KeyIndicator_C* WBP_KeyIndicator_C_98;                                 // 0x0488 (size: 0x8)
    class UWBP_PretzelIndicator_C* WBP_PretzelIndicator;                              // 0x0490 (size: 0x8)
    class UWBP_Tips_C* WBP_Tips;                                                      // 0x0498 (size: 0x8)

    void OnScreenIn();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OnScreenOut();
    void OnContinue();
    void RefreshButtons();
    class UWidget* BP_GetDesiredFocusTarget();
    void Construct();
    void BndEvt__WBP_MainMenu_BTN_Play_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Instructions_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Settings_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Quit_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Instructions_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Controls_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Instructions_K2Node_ComponentBoundEvent_2_OnWidgetActivationChanged__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Controls_K2Node_ComponentBoundEvent_3_OnWidgetActivationChanged__DelegateSignature();
    void BP_OnActivated();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_PauseMenu_BTN_Restart_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__WBP_PauseMenu_BTN_Editor_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void ExecuteUbergraph_WBP_PauseMenu(int32 EntryPoint);
}; // Size: 0x4A0

#endif
