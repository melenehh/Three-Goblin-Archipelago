#ifndef UE4SS_SDK_WBPC_KeySelectorButton_HPP
#define UE4SS_SDK_WBPC_KeySelectorButton_HPP

class UWBPC_KeySelectorButton_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1580 (size: 0x8)
    class UWidgetAnimation* Shake;                                                    // 0x1588 (size: 0x8)
    class UWidgetAnimation* Reset;                                                    // 0x1590 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x1598 (size: 0x8)
    class UWidgetAnimation* Hovered;                                                  // 0x15A0 (size: 0x8)
    class UImage* FocusImage;                                                         // 0x15A8 (size: 0x8)
    class UImage* Image_97;                                                           // 0x15B0 (size: 0x8)
    class UInputKeySelector* InputKeySelector_58;                                     // 0x15B8 (size: 0x8)
    FWBPC_KeySelectorButton_COnClicked OnClicked;                                     // 0x15C0 (size: 0x10)
    void OnClicked();
    bool IsListeningForKey;                                                           // 0x15D0 (size: 0x1)
    FWBPC_KeySelectorButton_COnKeySelected OnKeySelected;                             // 0x15D8 (size: 0x10)
    void OnKeySelected();

    void PlayShakeAnimation();
    void SetSelectedKey(FKey SelectedKey);
    void GetSelectedKey(FKey& SelectedKey);
    void ToggleListeningForKey();
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
    void BndEvt__WBPC_KeySelectorButton_InputKeySelector_58_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature(FInputChord SelectedKey);
    void ExecuteUbergraph_WBPC_KeySelectorButton(int32 EntryPoint);
    void OnKeySelected__DelegateSignature();
    void OnClicked__DelegateSignature();
}; // Size: 0x15E8

#endif
