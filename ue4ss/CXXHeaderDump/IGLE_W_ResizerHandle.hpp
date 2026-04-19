#ifndef UE4SS_SDK_IGLE_W_ResizerHandle_HPP
#define UE4SS_SDK_IGLE_W_ResizerHandle_HPP

class UIGLE_W_ResizerHandle_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UBorder* HighlightLine;                                                     // 0x02C8 (size: 0x8)
    class UBorder* Resizer;                                                           // 0x02D0 (size: 0x8)
    FVector2D LastCursorLocation;                                                     // 0x02D8 (size: 0x10)
    bool IsGrabbed;                                                                   // 0x02E8 (size: 0x1)
    FIGLE_W_ResizerHandle_COnMouseResized OnMouseResized;                             // 0x02F0 (size: 0x10)
    void OnMouseResized(FVector2D DeltaVector);
    FVector2D CurrentCursorLocation;                                                  // 0x0300 (size: 0x10)
    bool IsGeometryHovered;                                                           // 0x0310 (size: 0x1)
    bool HeightDominant;                                                              // 0x0311 (size: 0x1)
    FVector2D PreUseCursorLocation;                                                   // 0x0318 (size: 0x10)

    bool CanUseResizeHandle();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SnapCursorToResizeDirection();
    void ExecuteUbergraph_IGLE_W_ResizerHandle(int32 EntryPoint);
    void OnMouseResized__DelegateSignature(FVector2D DeltaVector);
}; // Size: 0x328

#endif
