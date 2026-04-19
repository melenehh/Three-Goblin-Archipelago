#ifndef UE4SS_SDK_BP_HatPickup_HPP
#define UE4SS_SDK_BP_HatPickup_HPP

class ABP_HatPickup_C : public AHatPickup
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)

    void Update Appearance();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void K2_OnReset();
    void ExecuteUbergraph_BP_HatPickup(int32 EntryPoint);
}; // Size: 0x300

#endif
