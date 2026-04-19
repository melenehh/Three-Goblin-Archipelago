#ifndef UE4SS_SDK_WBP_PretzelIndicator_HPP
#define UE4SS_SDK_WBP_PretzelIndicator_HPP

class UWBP_PretzelIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UImage* Icon;                                                               // 0x02C8 (size: 0x8)
    class UImage* Image_56;                                                           // 0x02D0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02D8 (size: 0x8)
    class UTextBlock* Text;                                                           // 0x02E0 (size: 0x8)

    void Set Amount(int32 Amount, int32 Total);
    void Construct();
    void ExecuteUbergraph_WBP_PretzelIndicator(int32 EntryPoint);
}; // Size: 0x2E8

#endif
