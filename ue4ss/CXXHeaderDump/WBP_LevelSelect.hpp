#ifndef UE4SS_SDK_WBP_LevelSelect_HPP
#define UE4SS_SDK_WBP_LevelSelect_HPP

class UWBP_LevelSelect_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* LevelExistsWarning;                                       // 0x0418 (size: 0x8)
    class UWidgetAnimation* SwitchScreen;                                             // 0x0420 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x0428 (size: 0x8)
    class UWBP_Carousel_C* Carousel_SkinSelect;                                       // 0x0430 (size: 0x8)
    class UWBPC_Button_C* CustomLevelsButton;                                         // 0x0438 (size: 0x8)
    class USizeBox* DeleteSizeBox;                                                    // 0x0440 (size: 0x8)
    class UWBPC_Button_C* DownloadedLevelsButton;                                     // 0x0448 (size: 0x8)
    class USizeBox* EditSizeBox;                                                      // 0x0450 (size: 0x8)
    class UTextBlock* LevelExistsLabel;                                               // 0x0458 (size: 0x8)
    class UOverlay* MainOverlay;                                                      // 0x0460 (size: 0x8)
    class UWBPC_Button_C* OfficialLevelsButton;                                       // 0x0468 (size: 0x8)
    class UHorizontalBox* SkinSelectButtonContainer;                                  // 0x0470 (size: 0x8)
    class UWBP_ConfirmDialog_C* WBP_ConfirmDialog;                                    // 0x0478 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKey;                                              // 0x0480 (size: 0x8)
    class UWBP_LevelList_C* WBP_LevelList;                                            // 0x0488 (size: 0x8)
    class UWBP_NewLevelDialog_C* WBP_NewLevelDialog;                                  // 0x0490 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button;                                                // 0x0498 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_1;                                              // 0x04A0 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_2;                                              // 0x04A8 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_3;                                              // 0x04B0 (size: 0x8)
    FWBP_LevelSelect_COnClose OnClose;                                                // 0x04B8 (size: 0x10)
    void OnClose();
    TArray<FST_SkinData> Skins;                                                       // 0x04C8 (size: 0x10)
    int32 Tab;                                                                        // 0x04D8 (size: 0x4)

    void CycleTabs(bool Right);
    void NewLevel();
    void ShowConfirmDialog(const FShowConfirmDialogYesEvent& YesEvent, const FShowConfirmDialogNoEvent& NoEvent);
    void HideDialogs();
    void ShowNewDialog(FText InputText);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void OpenCustomLevel(FString levelPath, bool ForEditing);
    void SwitchView(bool Custom, bool Downloaded);
    void InitSkins();
    void UpdateSkin();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void BndEvt__WBP_LevelSelect_WBPC_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BP_OnActivated();
    void BndEvt__WBP_LevelSelect_WBP_Carousel_K2Node_ComponentBoundEvent_2_OnSelectionChanged__DelegateSignature(int32 Index);
    void Construct();
    void BndEvt__WBP_LevelSelect_CustomLevelsButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
    void BndEvt__WBP_LevelSelect_OfficialLevelsButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
    void BndEvt__WBP_LevelSelect_WBPC_Button_2_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__WBP_LevelSelect_WBPC_Button_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void Close();
    void OnCloseFinished();
    void BndEvt__WBP_LevelSelect_WBPC_Button_3_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void OnConfirmDelete();
    void BndEvt__WBP_LevelSelect_CustomLevelsButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
    void BndEvt__WBP_LevelSelect_Carousel_SkinSelect_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
    void ExecuteUbergraph_WBP_LevelSelect(int32 EntryPoint);
    void OnClose__DelegateSignature();
}; // Size: 0x4DC

#endif
