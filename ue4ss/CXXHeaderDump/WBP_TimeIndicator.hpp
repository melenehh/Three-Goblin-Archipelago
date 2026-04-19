#ifndef UE4SS_SDK_WBP_TimeIndicator_HPP
#define UE4SS_SDK_WBP_TimeIndicator_HPP

class UWBP_TimeIndicator_C : public UUserWidget
{
    class UImage* Image_56;                                                           // 0x02C0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02C8 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x02D0 (size: 0x8)

    void Set Time(double Seconds);
}; // Size: 0x2D8

#endif
