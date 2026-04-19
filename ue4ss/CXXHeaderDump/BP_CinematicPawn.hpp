#ifndef UE4SS_SDK_BP_CinematicPawn_HPP
#define UE4SS_SDK_BP_CinematicPawn_HPP

class ABP_CinematicPawn_C : public ADefaultPawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0350 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_CinematicPawn(int32 EntryPoint);
}; // Size: 0x358

#endif
