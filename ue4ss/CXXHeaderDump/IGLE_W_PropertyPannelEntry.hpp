#ifndef UE4SS_SDK_IGLE_W_PropertyPannelEntry_HPP
#define UE4SS_SDK_IGLE_W_PropertyPannelEntry_HPP

class UIGLE_W_PropertyPannelEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UTextBlock* PropertyNameText;                                               // 0x02C8 (size: 0x8)
    class UOverlay* PropertyValueHolder;                                              // 0x02D0 (size: 0x8)
    FString PropertyName;                                                             // 0x02D8 (size: 0x10)
    class AActor* PlacableActor;                                                      // 0x02E8 (size: 0x8)
    class UIGLE_InterfaceComponent* InterfaceComp;                                    // 0x02F0 (size: 0x8)
    FMargin PropertyValuePadding;                                                     // 0x02F8 (size: 0x10)

    void Construct();
    void ExecuteUbergraph_IGLE_W_PropertyPannelEntry(int32 EntryPoint);
}; // Size: 0x308

#endif
