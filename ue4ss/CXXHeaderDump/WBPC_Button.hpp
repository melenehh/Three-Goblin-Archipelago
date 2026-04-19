#ifndef UE4SS_SDK_WBPC_Button_HPP
#define UE4SS_SDK_WBPC_Button_HPP

class UWBPC_Button_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1580 (size: 0x8)
    class UWidgetAnimation* Shake;                                                    // 0x1588 (size: 0x8)
    class UWidgetAnimation* Reset;                                                    // 0x1590 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x1598 (size: 0x8)
    class UWidgetAnimation* Hovered;                                                  // 0x15A0 (size: 0x8)
    class UImage* FocusImage;                                                         // 0x15A8 (size: 0x8)
    class UImage* Image_97;                                                           // 0x15B0 (size: 0x8)
    class UNamedSlot* NamedSlot_75;                                                   // 0x15B8 (size: 0x8)
    FWBPC_Button_COnClicked OnClicked;                                                // 0x15C0 (size: 0x10)
    void OnClicked();

    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void ResetState();
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void BP_OnClicked();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BP_OnFocusReceived();
    void BP_OnFocusLost();
    void ExecuteUbergraph_WBPC_Button(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x15D0

#endif
