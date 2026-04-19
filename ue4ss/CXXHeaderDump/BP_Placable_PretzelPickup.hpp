#ifndef UE4SS_SDK_BP_Placable_PretzelPickup_HPP
#define UE4SS_SDK_BP_Placable_PretzelPickup_HPP

class ABP_Placable_PretzelPickup_C : public ABP_PretzelPickup_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UIGLE_InterfaceComponent* IGLE_Interface;                                   // 0x0308 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Placable_PretzelPickup(int32 EntryPoint);
}; // Size: 0x310

#endif
