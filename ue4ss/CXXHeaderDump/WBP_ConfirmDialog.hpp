#ifndef UE4SS_SDK_WBP_ConfirmDialog_HPP
#define UE4SS_SDK_WBP_ConfirmDialog_HPP

class UWBP_ConfirmDialog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UTextBlock* Text_Small;                                                     // 0x02C8 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02D0 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_3;                                              // 0x02D8 (size: 0x8)
    class UWBPC_Button_C* WBPC_Button_4;                                              // 0x02E0 (size: 0x8)
    FWBP_ConfirmDialog_COnYesResponse OnYesResponse;                                  // 0x02E8 (size: 0x10)
    void OnYesResponse();
    FWBP_ConfirmDialog_COnNoResponse OnNoResponse;                                    // 0x02F8 (size: 0x10)
    void OnNoResponse();

    void OnShown();
    void SetText(FText MainText, FText SmallText);
    void BndEvt__WBP_NewLevelDialog_WBPC_Button_3_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
    void BndEvt__WBP_NewLevelDialog_WBPC_Button_4_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_ConfirmDialog(int32 EntryPoint);
    void OnNoResponse__DelegateSignature();
    void OnYesResponse__DelegateSignature();
}; // Size: 0x308

#endif
