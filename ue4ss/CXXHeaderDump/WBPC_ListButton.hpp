#ifndef UE4SS_SDK_WBPC_ListButton_HPP
#define UE4SS_SDK_WBPC_ListButton_HPP

class UWBPC_ListButton_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1580 (size: 0x8)
    class UWidgetAnimation* Reset;                                                    // 0x1588 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x1590 (size: 0x8)
    class UWidgetAnimation* Hovered;                                                  // 0x1598 (size: 0x8)
    class UImage* FocusImage;                                                         // 0x15A0 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x15A8 (size: 0x8)
    FWBPC_ListButton_COnClicked OnClicked;                                            // 0x15B0 (size: 0x10)
    void OnClicked();
    FName RowName;                                                                    // 0x15C0 (size: 0x8)
    bool Unlocked;                                                                    // 0x15C8 (size: 0x1)
    FWBPC_ListButton_COnSelected OnSelected;                                          // 0x15D0 (size: 0x10)
    void OnSelected(class UWBPC_ListButton_C* SelectedButton);
    FLevelInfo Data;                                                                  // 0x15E0 (size: 0x48)

    void AutoSelect();
    void MakePurple();
    void MakeDefault();
    void MakeGold();
    void SetLabelText(FString InString);
    void GetRowName(FName& RowName);
    void SetRowName(FName RowName);
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
    void ExecuteUbergraph_WBPC_ListButton(int32 EntryPoint);
    void OnSelected__DelegateSignature(class UWBPC_ListButton_C* SelectedButton);
    void OnClicked__DelegateSignature();
}; // Size: 0x1628

#endif
