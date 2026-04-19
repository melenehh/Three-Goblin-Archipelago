#ifndef UE4SS_SDK_IGLE_W_PlacableTransform_HPP
#define UE4SS_SDK_IGLE_W_PlacableTransform_HPP

class UIGLE_W_PlacableTransform_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_W_Vec3Edit_C* LocationVec3Edit;                                       // 0x02C8 (size: 0x8)
    class UIGLE_W_Vec3Edit_C* RotationVec3Edit;                                       // 0x02D0 (size: 0x8)
    class UIGLE_W_Vec3Edit_C* ScaleVec3Edit;                                          // 0x02D8 (size: 0x8)
    FTransform TransformTarget;                                                       // 0x02E0 (size: 0x60)
    FIGLE_W_PlacableTransform_COnTransformChanged OnTransformChanged;                 // 0x0340 (size: 0x10)
    void OnTransformChanged(FTransform NewTransform);

    void Construct();
    void OnVectorValueChanged_Location(FVector NewValue);
    void UpdateTransform(FTransform NewTransform);
    void OnVectorValueChanged_Rotation(FVector NewValue);
    void OnVectorValueChanged_Scale(FVector NewValue);
    void ExecuteUbergraph_IGLE_W_PlacableTransform(int32 EntryPoint);
    void OnTransformChanged__DelegateSignature(FTransform NewTransform);
}; // Size: 0x350

#endif
