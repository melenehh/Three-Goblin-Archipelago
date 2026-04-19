#ifndef UE4SS_SDK_IGLE_W_Viewport_HPP
#define UE4SS_SDK_IGLE_W_Viewport_HPP

class UIGLE_W_Viewport_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UImage* Viewport;                                                           // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* ViewportMaterial;                                 // 0x02D0 (size: 0x8)

    void Construct();
    void SetViewportBaseViewTexture(class UTexture* Texture);
    void SetViewportSecondaryViewTexture(class UTexture* Texture);
    void ExecuteUbergraph_IGLE_W_Viewport(int32 EntryPoint);
}; // Size: 0x2D8

#endif
