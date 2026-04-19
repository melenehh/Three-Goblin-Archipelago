#ifndef UE4SS_SDK_IGLE_W_PlacableCategoryEntry_HPP
#define UE4SS_SDK_IGLE_W_PlacableCategoryEntry_HPP

class UIGLE_W_PlacableCategoryEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_Example_Button_Opaque_C* CategoryButton;                              // 0x02C8 (size: 0x8)
    class UTextBlock* CategoryNameText;                                               // 0x02D0 (size: 0x8)
    class UIGLE_W_EditorHUD_C* Parent;                                                // 0x02D8 (size: 0x8)
    FString CategoryNameInput;                                                        // 0x02E0 (size: 0x10)

    void BndEvt__CategoryButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_IGLE_W_PlacableCategoryEntry(int32 EntryPoint);
}; // Size: 0x2F0

#endif
