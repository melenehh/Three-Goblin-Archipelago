#ifndef UE4SS_SDK_WBP_DisguiseIndicator_HPP
#define UE4SS_SDK_WBP_DisguiseIndicator_HPP

class UWBP_DisguiseIndicator_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UHorizontalBox* BarbarianBox;                                               // 0x02C8 (size: 0x8)
    class UImage* Image_56;                                                           // 0x02D0 (size: 0x8)
    class UHorizontalBox* MageBox;                                                    // 0x02D8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02E0 (size: 0x8)
    int32 MageLevel;                                                                  // 0x02E8 (size: 0x4)
    int32 BarbarianLevel;                                                             // 0x02EC (size: 0x4)

    void Refresh();
    void UpdateIcons();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_DisguiseIndicator(int32 EntryPoint);
}; // Size: 0x2F0

#endif
