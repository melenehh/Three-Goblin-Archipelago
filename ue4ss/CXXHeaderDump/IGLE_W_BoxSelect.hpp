#ifndef UE4SS_SDK_IGLE_W_BoxSelect_HPP
#define UE4SS_SDK_IGLE_W_BoxSelect_HPP

class UIGLE_W_BoxSelect_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UImage* BoxSelectImage;                                                     // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicMat;                                       // 0x02D0 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_IGLE_W_BoxSelect(int32 EntryPoint);
}; // Size: 0x2D8

#endif
