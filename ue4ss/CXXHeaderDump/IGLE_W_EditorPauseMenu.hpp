#ifndef UE4SS_SDK_IGLE_W_EditorPauseMenu_HPP
#define UE4SS_SDK_IGLE_W_EditorPauseMenu_HPP

class UIGLE_W_EditorPauseMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* CrossExitButton;                             // 0x02C8 (size: 0x8)
    class UTextBlock* CurrentLevelText;                                               // 0x02D0 (size: 0x8)
    class UIGLE_W_ControlScheme_C* IGLE_W_ControlScheme;                              // 0x02D8 (size: 0x8)
    class UTextBlock* MessageText;                                                    // 0x02E0 (size: 0x8)
    class UBackgroundBlur* ModalBlur;                                                 // 0x02E8 (size: 0x8)
    class UIGLE_Example_BeveledBorder_C* ModalDialog;                                 // 0x02F0 (size: 0x8)
    class UImage* ModalFade;                                                          // 0x02F8 (size: 0x8)
    class UIGLE_Example_BeveledBorder_C* ModalMessage;                                // 0x0300 (size: 0x8)
    class UIGLE_Example_BeveledBorder_C* ModalProgress;                               // 0x0308 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* NoButton;                                    // 0x0310 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* OkButton;                                    // 0x0318 (size: 0x8)
    class UIGLE_Example_Button_Translucent_C* PauseMenuExitButton;                    // 0x0320 (size: 0x8)
    class UProgressBar* ProgressBar;                                                  // 0x0328 (size: 0x8)
    class UTextBlock* ProgressText;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* PromptText;                                                     // 0x0338 (size: 0x8)
    class UTextBlock* PromptTextRed;                                                  // 0x0340 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* QuitButton;                                  // 0x0348 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* ResumeButton;                                // 0x0350 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* SaveAndPlayButton;                           // 0x0358 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* SaveAndPublishButton;                        // 0x0360 (size: 0x8)
    class UTextBlock* SaveAndPublishText;                                             // 0x0368 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* SaveAndQuitButton;                           // 0x0370 (size: 0x8)
    class UTextBlock* ValidationOutputText;                                           // 0x0378 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* YesButton;                                   // 0x0380 (size: 0x8)
    int64 PrevID;                                                                     // 0x0388 (size: 0x8)
    int64 currentID;                                                                  // 0x0390 (size: 0x8)
    class UWorkshopAsyncRequestObject* AsyncRequestObject;                            // 0x0398 (size: 0x8)
    EWorkshopRequestState PublishingState;                                            // 0x03A0 (size: 0x1)

    void PrepareForPublish();
    void ShowProgressModal(FText InText);
    void OnUploadFinished(bool Result);
    void PublishLevelAsync();
    void ShowMessageModal(FText InText);
    void HideModal();
    void ShowQuitModal();
    void Construct();
    void BndEvt__SaveAndQuitButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__PauseMenuExitButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__CrossExitButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__SaveAndPlayButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IGLE_W_EditorPauseMenu_ResumeButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IGLE_W_EditorPauseMenu_QuitButton_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IGLE_W_EditorPauseMenu_YesButton_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IGLE_W_EditorPauseMenu_NoButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IGLE_W_EditorPauseMenu_SaveAndPublishButton_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__IGLE_W_EditorPauseMenu_OkButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_IGLE_W_EditorPauseMenu(int32 EntryPoint);
}; // Size: 0x3A1

#endif
