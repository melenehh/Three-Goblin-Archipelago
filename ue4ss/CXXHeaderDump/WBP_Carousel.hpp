#ifndef UE4SS_SDK_WBP_Carousel_HPP
#define UE4SS_SDK_WBP_Carousel_HPP

class UWBP_Carousel_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1580 (size: 0x8)
    class UWidgetAnimation* Hovered;                                                  // 0x1588 (size: 0x8)
    class UImage* Background;                                                         // 0x1590 (size: 0x8)
    class UCommonWidgetCarousel* CommonWidgetCarousel_28;                             // 0x1598 (size: 0x8)
    class UImage* FocusImage;                                                         // 0x15A0 (size: 0x8)
    class UTextBlock* OptionText;                                                     // 0x15A8 (size: 0x8)
    class UWBP_CarouselArrow_C* WBP_CarouselArrow_Left;                               // 0x15B0 (size: 0x8)
    class UWBP_CarouselArrow_C* WBP_CarouselArrow_Right;                              // 0x15B8 (size: 0x8)
    TArray<FText> Choices;                                                            // 0x15C0 (size: 0x10)
    int32 SelectedIndex;                                                              // 0x15D0 (size: 0x4)
    FWBP_Carousel_COnSelectionChanged OnSelectionChanged;                             // 0x15D8 (size: 0x10)
    void OnSelectionChanged(int32 Index);

    int32 FindSelection(const FText& ItemToFind);
    double GetPercentage();
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void UpdateArrows();
    void GetSelection(FText& Output, int32& SelectedIndex);
    void SelectIndex(int32 SelectedIndex);
    void SelectRight();
    void SelectLeft();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__WBP_Carousel_WBP_CarouselArrow_Left_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_Carousel_WBP_CarouselArrow_Right_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BP_OnHovered();
    void BP_OnUnhovered();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BP_OnFocusReceived();
    void BP_OnFocusLost();
    void ExecuteUbergraph_WBP_Carousel(int32 EntryPoint);
    void OnSelectionChanged__DelegateSignature(int32 Index);
}; // Size: 0x15E8

#endif
