#ifndef UE4SS_SDK_IGLE_W_PlacableDescription_HPP
#define UE4SS_SDK_IGLE_W_PlacableDescription_HPP

class UIGLE_W_PlacableDescription_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02C8 (size: 0x8)
    class UTextBlock* DescriptionText;                                                // 0x02D0 (size: 0x8)
    FString Description;                                                              // 0x02D8 (size: 0x10)

    void ShowDescription(FString Description);
    void Hide Description();
    void ExecuteUbergraph_IGLE_W_PlacableDescription(int32 EntryPoint);
}; // Size: 0x2E8

#endif
