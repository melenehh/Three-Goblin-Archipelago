#ifndef UE4SS_SDK_WBP_CarouselArrow_HPP
#define UE4SS_SDK_WBP_CarouselArrow_HPP

class UWBP_CarouselArrow_C : public UCommonButtonBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1580 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x1588 (size: 0x8)
    class UWidgetAnimation* Hovered;                                                  // 0x1590 (size: 0x8)
    class UImage* ArrowImage;                                                         // 0x1598 (size: 0x8)
    class UImage* Glow;                                                               // 0x15A0 (size: 0x8)
    bool Flip;                                                                        // 0x15A8 (size: 0x1)
    bool Gold;                                                                        // 0x15A9 (size: 0x1)
    FWBP_CarouselArrow_COnClicked OnClicked;                                          // 0x15B0 (size: 0x10)
    void OnClicked();

    void PlayClick();
    void PreConstruct(bool IsDesignTime);
    void BP_OnHovered();
    void BP_OnUnhovered();
    void BP_OnClicked();
    void ExecuteUbergraph_WBP_CarouselArrow(int32 EntryPoint);
    void OnClicked__DelegateSignature();
}; // Size: 0x15C0

#endif
