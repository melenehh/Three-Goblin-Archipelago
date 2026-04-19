#ifndef UE4SS_SDK_WBP_NewLevelDialog_HPP
#define UE4SS_SDK_WBP_NewLevelDialog_HPP

class UWBP_NewLevelDialog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UEditableTextBox* EditableTextBox_100;                                      // 0x02C8 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x02D0 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02E0 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_3;                                              // 0x02E8 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_4;                                              // 0x02F0 (size: 0x8)
    FWBP_NewLevelDialog_COnCancel OnCancel;                                           // 0x02F8 (size: 0x10)
    void OnCancel();
    FWBP_NewLevelDialog_COnConfirm OnConfirm;                                         // 0x0308 (size: 0x10)
    void OnConfirm();

    void FilterCharacters(FString String, FString& Output);
    void OnShown();
    FText GetInputedText();
    void SetText(FText LabelText, FText ConfirmText, FText CancelText, FText InputText);
    void BndEvt__WBP_NewLevelDialog_WBPC_Button_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_NewLevelDialog_WBPC_Button_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void BndEvt__WBP_NewLevelDialog_EditableTextBox_100_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_NewLevelDialog(int32 EntryPoint);
    void OnConfirm__DelegateSignature();
    void OnCancel__DelegateSignature();
}; // Size: 0x318

#endif
