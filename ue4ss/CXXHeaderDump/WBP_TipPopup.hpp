#ifndef UE4SS_SDK_WBP_TipPopup_HPP
#define UE4SS_SDK_WBP_TipPopup_HPP

class UWBP_TipPopup_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWidgetAnimation* ScreenOut;                                                // 0x0418 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x0420 (size: 0x8)
    class UHorizontalBox* ExplanationOverlay;                                         // 0x0428 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0440 (size: 0x8)
    class UImage* ImageBlack;                                                         // 0x0448 (size: 0x8)
    class UOverlay* ImageBox;                                                         // 0x0450 (size: 0x8)
    class UImage* Movie;                                                              // 0x0458 (size: 0x8)
    class UImage* Screenshot;                                                         // 0x0460 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0468 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0470 (size: 0x8)
    class UOverlay* VideoOverlay;                                                     // 0x0478 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button;                                                // 0x0480 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0488 (size: 0x8)
    FWBP_TipPopup_COnDismissed OnDismissed;                                           // 0x0490 (size: 0x10)
    void OnDismissed();
    bool FromMenu;                                                                    // 0x04A0 (size: 0x1)

    void SetFont(FSlateFontInfo InFontInfo);
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    bool BP_OnHandleBackAction();
    class UWidget* BP_GetDesiredFocusTarget();
    void OnLoaded_A5986F3DD5034C13AC15E4E5853C8CD1(class UObject* Loaded);
    void BndEvt__WBP_Instructions_WBPC_Button_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Close();
    void Construct();
    void OnScreenOut();
    void PlayMovie(TSoftObjectPtr<UMediaSource> Movie);
    void SetContent(FText Text, class UTexture2D* Texture);
    void ExecuteUbergraph_WBP_TipPopup(int32 EntryPoint);
    void OnDismissed__DelegateSignature();
}; // Size: 0x4A1

#endif
