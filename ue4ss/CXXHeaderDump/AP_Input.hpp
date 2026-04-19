#ifndef UE4SS_SDK_AP_Input_HPP
#define UE4SS_SDK_AP_Input_HPP

class UAP_Input_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UButton* AddressFocus;                                                      // 0x02C8 (size: 0x8)
    class UEditableTextBox* AddressInput;                                             // 0x02D0 (size: 0x8)
    class UCanvasPanel* AP_Panel;                                                     // 0x02D8 (size: 0x8)
    class UButton* ConnectButton;                                                     // 0x02E0 (size: 0x8)
    class UVerticalBox* InfoBox;                                                      // 0x02E8 (size: 0x8)
    class UButton* PasswordFocus;                                                     // 0x02F0 (size: 0x8)
    class UEditableTextBox* PasswordInput;                                            // 0x02F8 (size: 0x8)
    class UButton* SlotFocus;                                                         // 0x0300 (size: 0x8)
    class UEditableTextBox* SlotInput;                                                // 0x0308 (size: 0x8)
    bool keepFocus;                                                                   // 0x0310 (size: 0x1)
    FString Password;                                                                 // 0x0318 (size: 0x10)
    FString Address;                                                                  // 0x0328 (size: 0x10)
    FString SlotName;                                                                 // 0x0338 (size: 0x10)
    bool AddressCommit;                                                               // 0x0348 (size: 0x1)
    bool SlotCommit;                                                                  // 0x0349 (size: 0x1)
    bool PasswordCommit;                                                              // 0x034A (size: 0x1)

    void SetVariables(FString& AddressOutput, FString& SlotOutput, FString& PasswordOutput);
    void InpActEvt_Enter_K2Node_InputKeyEvent_0(FKey Key);
    void BndEvt__AP_Input_AddressFocus_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__AP_Input_SlotFocus_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__AP_Input_PasswordFocus_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__AP_Input_PasswordInput_K2Node_ComponentBoundEvent_6_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__AP_Input_AddressInput_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__AP_Input_SlotInput_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void PrintToModLoader(FString Message);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__AP_Input_ConnectButton_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_AP_Input(int32 EntryPoint);
}; // Size: 0x34B

#endif
