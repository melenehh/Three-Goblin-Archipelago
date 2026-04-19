#ifndef UE4SS_SDK_WBP_MessageText_HPP
#define UE4SS_SDK_WBP_MessageText_HPP

class UWBP_MessageText_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* Disappear;                                                // 0x02C8 (size: 0x8)
    class UWidgetAnimation* Appear;                                                   // 0x02D0 (size: 0x8)
    class UImage* Image_31;                                                           // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_22;                                                   // 0x02E0 (size: 0x8)

    void SetText(FText Text);
    void Hide(bool Immediate);
    void Show();
    void Construct();
    void ExecuteUbergraph_WBP_MessageText(int32 EntryPoint);
}; // Size: 0x2E8

#endif
