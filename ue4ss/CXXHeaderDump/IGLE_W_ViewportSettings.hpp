#ifndef UE4SS_SDK_IGLE_W_ViewportSettings_HPP
#define UE4SS_SDK_IGLE_W_ViewportSettings_HPP

class UIGLE_W_ViewportSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_Example_ComboBox_C* RotationSnapComboBox;                             // 0x02C8 (size: 0x8)
    class UIGLE_Example_ComboBox_C* ScaleSnapComboBox;                                // 0x02D0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* SpaceButton;                                 // 0x02D8 (size: 0x8)
    class UTextBlock* SpaceText;                                                      // 0x02E0 (size: 0x8)
    class UIGLE_Example_ComboBox_C* TranslationSnapComboBox;                          // 0x02E8 (size: 0x8)

    void Construct();
    void UpdateValues();
    void BndEvt__TranslationSnapComboBox_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__SpaceButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RotationSnapComboBox_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ScaleSnapComboBox_K2Node_ComponentBoundEvent_4_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_IGLE_W_ViewportSettings(int32 EntryPoint);
}; // Size: 0x2F0

#endif
