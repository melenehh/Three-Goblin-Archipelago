#ifndef UE4SS_SDK_IGLE_W_Vec3Edit_HPP
#define UE4SS_SDK_IGLE_W_Vec3Edit_HPP

class UIGLE_W_Vec3Edit_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* X;                                           // 0x02C8 (size: 0x8)
    class UIGLE_SpinBox_C* X_SpinBox;                                                 // 0x02D0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* Y;                                           // 0x02D8 (size: 0x8)
    class UIGLE_SpinBox_C* Y_SpinBox;                                                 // 0x02E0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* Z;                                           // 0x02E8 (size: 0x8)
    class UIGLE_SpinBox_C* Z_SpinBox;                                                 // 0x02F0 (size: 0x8)
    FVector VectorValue;                                                              // 0x02F8 (size: 0x18)
    FIGLE_W_Vec3Edit_COnVectorValueChanged OnVectorValueChanged;                      // 0x0310 (size: 0x10)
    void OnVectorValueChanged(FVector NewValue);
    FVector ResetVectorValue;                                                         // 0x0320 (size: 0x18)

    void BreakAndTruncateVector(FVector Vector, int32 ForcedDecimalPlaces, double& X, double& Y, double& Z);
    void BndEvt__X_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Y_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Z_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__X_SpinBox_K2Node_ComponentBoundEvent_3_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Y_SpinBox_K2Node_ComponentBoundEvent_4_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void BndEvt__Z_SpinBox_K2Node_ComponentBoundEvent_5_OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
    void CallOnVectorValueChanged(FVector NewValue);
    void Construct();
    void UpdateVectorValue(FVector VectorValue);
    void BndEvt__X_SpinBox_K2Node_ComponentBoundEvent_10_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Y_SpinBox_K2Node_ComponentBoundEvent_11_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Z_SpinBox_K2Node_ComponentBoundEvent_12_OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_IGLE_W_Vec3Edit(int32 EntryPoint);
    void OnVectorValueChanged__DelegateSignature(FVector NewValue);
}; // Size: 0x338

#endif
