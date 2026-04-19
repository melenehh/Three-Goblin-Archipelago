#ifndef UE4SS_SDK_IGLE_W_PropertiesPannel_HPP
#define UE4SS_SDK_IGLE_W_PropertiesPannel_HPP

class UIGLE_W_PropertiesPannel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_EditableTextBox_C* EditablePlacableName;                              // 0x02C8 (size: 0x8)
    class UIGLE_W_PlacableTransform_C* PlacableTransformEdit;                         // 0x02D0 (size: 0x8)
    class UVerticalBox* PropertiesPannelVerticalBox;                                  // 0x02D8 (size: 0x8)
    class UScrollBox* PropertiesScrollBox;                                            // 0x02E0 (size: 0x8)
    class AActor* PlacableActor;                                                      // 0x02E8 (size: 0x8)

    void Construct();
    void BndEvt__EditablePlacableName_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void SetPlacableActorTarget(class AActor* PlacableActor);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnTransformChanged(FTransform NewTransform);
    void ClearPannel();
    void ExecuteUbergraph_IGLE_W_PropertiesPannel(int32 EntryPoint);
}; // Size: 0x2F0

#endif
