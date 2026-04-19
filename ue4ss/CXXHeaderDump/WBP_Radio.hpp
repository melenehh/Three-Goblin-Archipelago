#ifndef UE4SS_SDK_WBP_Radio_HPP
#define UE4SS_SDK_WBP_Radio_HPP

class UWBP_Radio_C : public UCommonActivatableWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class UHorizontalBox* Container;                                                  // 0x0418 (size: 0x8)
    TArray<FText> ButtonTexts;                                                        // 0x0420 (size: 0x10)
    int32 SelectedButtonIndex;                                                        // 0x0430 (size: 0x4)
    FMargin ElementPadding;                                                           // 0x0434 (size: 0x10)
    FWBP_Radio_CSelectionChanged SelectionChanged;                                    // 0x0448 (size: 0x10)
    void SelectionChanged(int32 Index);

    class UWidget* BP_GetDesiredFocusTarget();
    void GetButtonAtIndex(int32 Index, class UWBPC_Button_C*& Button);
    void SetSelectedIndex(int32 Index);
    void PreConstruct(bool IsDesignTime);
    void OnRadioClicked(class UWBP_RadioElement_C* Element);
    void Construct();
    void ExecuteUbergraph_WBP_Radio(int32 EntryPoint);
    void SelectionChanged__DelegateSignature(int32 Index);
}; // Size: 0x458

#endif
