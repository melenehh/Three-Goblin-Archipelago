#ifndef UE4SS_SDK_WBP_KeyIndicator_HPP
#define UE4SS_SDK_WBP_KeyIndicator_HPP

class UWBP_KeyIndicator_C : public UUserWidget
{
    class UImage* Bronze;                                                             // 0x02C0 (size: 0x8)
    class UImage* Gold;                                                               // 0x02C8 (size: 0x8)
    class UImage* Image_56;                                                           // 0x02D0 (size: 0x8)
    class UImage* Magic;                                                              // 0x02D8 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02E0 (size: 0x8)
    class UImage* Silver;                                                             // 0x02E8 (size: 0x8)

    void Refresh();
}; // Size: 0x2F0

#endif
