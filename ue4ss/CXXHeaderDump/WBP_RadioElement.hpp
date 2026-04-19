#ifndef UE4SS_SDK_WBP_RadioElement_HPP
#define UE4SS_SDK_WBP_RadioElement_HPP

class UWBP_RadioElement_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UWBPC_Button_C* BTN_Template;                                               // 0x0418 (size: 0x8)
    class UTextBlock* ButtonText;                                                     // 0x0420 (size: 0x8)
    FWBP_RadioElement_COnSelected OnSelected;                                         // 0x0428 (size: 0x10)
    void OnSelected(class UWBP_RadioElement_C* Element);
    int32 Index;                                                                      // 0x0438 (size: 0x4)

    class UWidget* BP_GetDesiredFocusTarget();
    void SetIndex(int32 Index);
    void SetText(FText Text);
    void Construct();
    void BndEvt__WBP_RadioElement_BTN_Template_K2Node_ComponentBoundEvent_1_CommonSelectedStateChangedBase__DelegateSignature(class UCommonButtonBase* Button, bool Selected);
    void ExecuteUbergraph_WBP_RadioElement(int32 EntryPoint);
    void OnSelected__DelegateSignature(class UWBP_RadioElement_C* Element);
}; // Size: 0x43C

#endif
