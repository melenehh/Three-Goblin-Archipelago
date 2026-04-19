#ifndef UE4SS_SDK_IGLE_W_ActionLog_HPP
#define UE4SS_SDK_IGLE_W_ActionLog_HPP

class UIGLE_W_ActionLog_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UScrollBox* ActionLogScrollBox;                                             // 0x02C8 (size: 0x8)
    double DelayPerActionText;                                                        // 0x02D0 (size: 0x8)

    void AddAction(FString Text, const FLinearColor Color);
    void ExecuteUbergraph_IGLE_W_ActionLog(int32 EntryPoint);
}; // Size: 0x2D8

#endif
