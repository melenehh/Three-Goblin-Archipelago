#ifndef UE4SS_SDK_WBP_PropertyValueMultilineString_HPP
#define UE4SS_SDK_WBP_PropertyValueMultilineString_HPP

class UWBP_PropertyValueMultilineString_C : public UIGLE_W_PropertyValueWidgetBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    class UMultiLineEditableTextBox* MultiLineEditableTextBox_301;                    // 0x02D0 (size: 0x8)

    void Construct();
    void BndEvt__WBP_PropertyValueDescription_MultiLineEditableTextBox_301_K2Node_ComponentBoundEvent_1_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__WBP_PropertyValueMultilineString_MultiLineEditableTextBox_301_K2Node_ComponentBoundEvent_2_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_WBP_PropertyValueMultilineString(int32 EntryPoint);
}; // Size: 0x2D8

#endif
