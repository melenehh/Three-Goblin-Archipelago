#ifndef UE4SS_SDK_BP_KeyPickup_HPP
#define UE4SS_SDK_BP_KeyPickup_HPP

class ABP_KeyPickup_C : public AKeyPickup
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* PS_KeyPickup_Magic;                               // 0x0300 (size: 0x8)

    void UpdateAppearance();
    void SetParticles(bool Enabled);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void OnPickup();
    void OnReset();
    void ExecuteUbergraph_BP_KeyPickup(int32 EntryPoint);
}; // Size: 0x308

#endif
