#ifndef UE4SS_SDK_IGLE_W_SceneOutliner_Entry_HPP
#define UE4SS_SDK_IGLE_W_SceneOutliner_Entry_HPP

class UIGLE_W_SceneOutliner_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_Example_BeveledBorder_C* BeveledBorder;                               // 0x02C8 (size: 0x8)
    class UImage* PlacableIconImage;                                                  // 0x02D0 (size: 0x8)
    class UTextBlock* PlacableID;                                                     // 0x02D8 (size: 0x8)
    class UTextBlock* PlacableName;                                                   // 0x02E0 (size: 0x8)
    class UIGLE_Example_Button_Translucent_C* SelectionButton;                        // 0x02E8 (size: 0x8)
    class AActor* PlacableActor;                                                      // 0x02F0 (size: 0x8)
    class UIGLE_W_SceneOutliner_C* Parent;                                            // 0x02F8 (size: 0x8)
    bool Selected;                                                                    // 0x0300 (size: 0x1)
    FLinearColor InterlacedBorderColor;                                               // 0x0304 (size: 0x10)
    class UMaterialInstanceDynamic* DynamicIconMaterialInstance;                      // 0x0318 (size: 0x8)
    class UMaterialInterface* IconMaterial;                                           // 0x0320 (size: 0x8)

    FText GetPlacableID();
    FText GetPlacableName();
    void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void OnSelectionUpdated();
    void ExecuteUbergraph_IGLE_W_SceneOutliner_Entry(int32 EntryPoint);
}; // Size: 0x328

#endif
