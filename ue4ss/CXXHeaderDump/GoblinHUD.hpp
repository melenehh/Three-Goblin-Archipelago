#ifndef UE4SS_SDK_GoblinHUD_HPP
#define UE4SS_SDK_GoblinHUD_HPP

class AGoblinHUD_C : public AHUD
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0390 (size: 0x8)
    class UWBP_HUD_C* HUDWidget;                                                      // 0x0398 (size: 0x8)
    bool Visible;                                                                     // 0x03A0 (size: 0x1)

    void Set HUD Visibility(bool Visible, bool instant);
    void RefreshItems();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GoblinHUD(int32 EntryPoint);
}; // Size: 0x3A1

#endif
