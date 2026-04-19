#ifndef UE4SS_SDK_WBP_Tips_HPP
#define UE4SS_SDK_WBP_Tips_HPP

class UWBP_Tips_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x0418 (size: 0x8)
    class UImage* Cheat;                                                              // 0x0420 (size: 0x8)
    class UImage* ImageBlack;                                                         // 0x0428 (size: 0x8)
    class UScaleBox* ImageBox;                                                        // 0x0430 (size: 0x8)
    class UImage* Movie;                                                              // 0x0438 (size: 0x8)
    class UScaleBox* MovieBox;                                                        // 0x0440 (size: 0x8)
    class UImage* Screenshot;                                                         // 0x0448 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0450 (size: 0x8)
    class UOverlay* TextBox;                                                          // 0x0458 (size: 0x8)
    class UVerticalBox* TipsBox;                                                      // 0x0460 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button;                                                // 0x0468 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0470 (size: 0x8)
    FWBP_Tips_COnClose OnClose;                                                       // 0x0478 (size: 0x10)
    void OnClose();
    class UDataTable* TipsList;                                                       // 0x0488 (size: 0x8)

    FEventReply On_Cheat_MouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnTipButtonSelected(class UWBPC_ListButton_C* SelectedButton);
    void OnTipButtonClicked();
    void UpdateTips();
    void SelectTip(FName TipRowName);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnLoaded_8B54B60CC3144CF9981713CB61058985(class UObject* Loaded);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Close();
    void Construct();
    void BndEvt__WBP_Tips_WBPC_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BP_OnActivated();
    void PlayMovie(TSoftObjectPtr<UMediaSource> Movie);
    void OnCloseFinished();
    void ExecuteUbergraph_WBP_Tips(int32 EntryPoint);
    void OnClose__DelegateSignature();
}; // Size: 0x490

#endif
