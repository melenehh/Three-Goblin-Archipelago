#ifndef UE4SS_SDK_WBP_HatIcon_HPP
#define UE4SS_SDK_WBP_HatIcon_HPP

class UWBP_HatIcon_C : public UUserWidget
{
    class UImage* Icon;                                                               // 0x02C0 (size: 0x8)

    void SetTexture(class UTexture2D* Texture);
}; // Size: 0x2C8

#endif
