#ifndef UE4SS_SDK_MainMenuMap_HPP
#define UE4SS_SDK_MainMenuMap_HPP

class AMainMenuMap_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class ABP_CinematicPawn_C* BP_CinematicPawn_2_ExecuteUbergraph_MainMenuMap_RefProperty; // 0x02A8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_MainMenuMap(int32 EntryPoint);
}; // Size: 0x2B0

#endif
