#ifndef UE4SS_SDK_IGLE_W_ActionLogEntry_HPP
#define UE4SS_SDK_IGLE_W_ActionLogEntry_HPP

class UIGLE_W_ActionLogEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02C8 (size: 0x8)
    class UTextBlock* ActionTextBlock;                                                // 0x02D0 (size: 0x8)
    FString Text;                                                                     // 0x02D8 (size: 0x10)
    double Delay;                                                                     // 0x02E8 (size: 0x8)
    FLinearColor Color;                                                               // 0x02F0 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_IGLE_W_ActionLogEntry(int32 EntryPoint);
}; // Size: 0x300

#endif
