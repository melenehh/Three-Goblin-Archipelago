#ifndef UE4SS_SDK_WBP_HUDTimer_HPP
#define UE4SS_SDK_WBP_HUDTimer_HPP

class UWBP_HUDTimer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UImage* Image_56;                                                           // 0x02C8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02D0 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x02D8 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_HUDTimer(int32 EntryPoint);
}; // Size: 0x2E0

#endif
