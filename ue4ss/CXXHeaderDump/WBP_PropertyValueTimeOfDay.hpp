#ifndef UE4SS_SDK_WBP_PropertyValueTimeOfDay_HPP
#define UE4SS_SDK_WBP_PropertyValueTimeOfDay_HPP

class UWBP_PropertyValueTimeOfDay_C : public UIGLE_W_PropertyValueWidgetBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* IGLE_Example_Button_Opaque_C;                // 0x02D0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* IGLE_Example_Button_Opaque_C_1;              // 0x02D8 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* IGLE_Example_Button_Opaque_C_2;              // 0x02E0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* IGLE_Example_Button_Opaque_C_243;            // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02F0 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x02F8 (size: 0x8)

    int32 WrapMinute(int32 A);
    int32 WrapHour(int32 A);
    void UpdateLabel();
    void Construct();
    void BndEvt__WBP_PropertyValueTimeOfDay_IGLE_Example_Button_Opaque_C_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PropertyValueTimeOfDay_IGLE_Example_Button_Opaque_C_243_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PropertyValueTimeOfDay_IGLE_Example_Button_Opaque_C_1_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__WBP_PropertyValueTimeOfDay_IGLE_Example_Button_Opaque_C_2_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_PropertyValueTimeOfDay(int32 EntryPoint);
}; // Size: 0x300

#endif
