#ifndef UE4SS_SDK_WBP_MainMenu_HPP
#define UE4SS_SDK_WBP_MainMenu_HPP

class UWBP_MainMenu_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* ScreenOut;                                                // 0x0418 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x0420 (size: 0x8)
    class UWBPC_Button_C* BTN_Credits;                                                // 0x0428 (size: 0x8)
    class UWBPC_Button_C* BTN_Play;                                                   // 0x0430 (size: 0x8)
    class UWBPC_Button_C* BTN_Quit;                                                   // 0x0438 (size: 0x8)
    class UWBPC_Button_C* BTN_Settings;                                               // 0x0440 (size: 0x8)
    class UWBPC_Button_C* BTN_Tips;                                                   // 0x0448 (size: 0x8)
    class UImage* IMG_Backer;                                                         // 0x0450 (size: 0x8)
    class UImage* IMG_Title;                                                          // 0x0458 (size: 0x8)
    class UOverlay* MainContainer;                                                    // 0x0460 (size: 0x8)
    class UWBP_Options_C* WBP_Controls;                                               // 0x0468 (size: 0x8)
    class UWBP_LevelSelect_C* WBP_LevelSelect;                                        // 0x0470 (size: 0x8)
    class UWBP_Tips_C* WBP_Tips;                                                      // 0x0478 (size: 0x8)

    void RefreshButtons();
    class UWidget* BP_GetDesiredFocusTarget();
    void Construct();
    void BndEvt__WBP_MainMenu_BTN_Play_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Settings_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Quit_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Controls_K2Node_ComponentBoundEvent_1_OnWidgetActivationChanged__DelegateSignature();
    void BP_OnActivated();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__WBP_MainMenu_WBP_LevelSelect_K2Node_ComponentBoundEvent_5_OnWidgetActivationChanged__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Tips_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void BndEvt__WBP_MainMenu_WBP_Tips_K2Node_ComponentBoundEvent_7_OnWidgetActivationChanged__DelegateSignature();
    void BndEvt__WBP_MainMenu_BTN_Credits_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void OnDismissed_Event();
    void ExecuteUbergraph_WBP_MainMenu(int32 EntryPoint);
}; // Size: 0x480

#endif
