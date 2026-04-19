#ifndef UE4SS_SDK_IGLE_W_Placable_HPP
#define UE4SS_SDK_IGLE_W_Placable_HPP

class UIGLE_W_Placable_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UIGLE_Example_Button_Translucent_C* IGLE_Example_Button_Translucent_C_142;  // 0x02C8 (size: 0x8)
    class UImage* PlacableIcon;                                                       // 0x02D0 (size: 0x8)
    class UTextBlock* PlacableName;                                                   // 0x02D8 (size: 0x8)
    FIGLEPlacableActorInfo PlacableActorInfo;                                         // 0x02E0 (size: 0x68)
    class UTexture* OverrideActorIcon;                                                // 0x0348 (size: 0x8)
    class UMaterial* IconMaterial;                                                    // 0x0350 (size: 0x8)
    class UMaterialInstanceDynamic* DynamicIconMaterial;                              // 0x0358 (size: 0x8)
    class UIGLE_W_PlacableDescription_C* PlacableDescription;                         // 0x0360 (size: 0x8)

    void Construct();
    void BndEvt__IGLE_Example_Button_Translucent_C_142_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__IGLE_Example_Button_Translucent_C_142_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__IGLE_Example_Button_Translucent_C_142_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_IGLE_W_Placable(int32 EntryPoint);
}; // Size: 0x368

#endif
