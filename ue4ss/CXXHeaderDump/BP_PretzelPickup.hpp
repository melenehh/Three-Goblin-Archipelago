#ifndef UE4SS_SDK_BP_PretzelPickup_HPP
#define UE4SS_SDK_BP_PretzelPickup_HPP

class ABP_PretzelPickup_C : public APretzelPickup
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)

    void UpdateMaterial();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void PickedUp(class APickup* Pickup);
    void ExecuteUbergraph_BP_PretzelPickup(int32 EntryPoint);
}; // Size: 0x300

#endif
