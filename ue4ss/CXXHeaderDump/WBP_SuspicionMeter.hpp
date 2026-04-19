#ifndef UE4SS_SDK_WBP_SuspicionMeter_HPP
#define UE4SS_SDK_WBP_SuspicionMeter_HPP

class UWBP_SuspicionMeter_C : public USuspicionMeterWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UImage* BackgroundImage;                                                    // 0x02D0 (size: 0x8)
    class UImage* BorderImage;                                                        // 0x02D8 (size: 0x8)
    class UOverlay* Container;                                                        // 0x02E0 (size: 0x8)
    class UImage* FillImage;                                                          // 0x02E8 (size: 0x8)
    FSlateColor YellowColor;                                                          // 0x02F0 (size: 0x14)
    FSlateColor RedColor;                                                             // 0x0304 (size: 0x14)
    FSlateColor WhiteColor;                                                           // 0x0318 (size: 0x14)
    FSlateColor BlackColor;                                                           // 0x032C (size: 0x14)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_WBP_SuspicionMeter(int32 EntryPoint);
}; // Size: 0x340

#endif
