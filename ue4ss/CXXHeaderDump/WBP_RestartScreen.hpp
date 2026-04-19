#ifndef UE4SS_SDK_WBP_RestartScreen_HPP
#define UE4SS_SDK_WBP_RestartScreen_HPP

class UWBP_RestartScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* ScreenIn;                                                 // 0x02C8 (size: 0x8)
    class UTextBlock* EasyModeHint;                                                   // 0x02D0 (size: 0x8)
    class UImage* Image_109;                                                          // 0x02D8 (size: 0x8)
    class UHorizontalBox* TextContainer;                                              // 0x02E0 (size: 0x8)
    class UTextBlock* TextGamepad;                                                    // 0x02E8 (size: 0x8)
    class UTextBlock* TextGamepad_1;                                                  // 0x02F0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKey_C_0;                                          // 0x02F8 (size: 0x8)
    class UAudioComponent* LoseSound;                                                 // 0x0300 (size: 0x8)
    FText RestartKey;                                                                 // 0x0308 (size: 0x18)

    void Construct();
    void CustomEvent_0();
    void UpdateText();
    void ExecuteUbergraph_WBP_RestartScreen(int32 EntryPoint);
}; // Size: 0x320

#endif
