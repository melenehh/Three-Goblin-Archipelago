#ifndef UE4SS_SDK_BP_LD49GameMode_Menu_HPP
#define UE4SS_SDK_BP_LD49GameMode_Menu_HPP

class ABP_LD49GameMode_Menu_C : public ABP_LD49GameModeBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0438 (size: 0x8)

    void ForcePauseGame();
    void ExecuteUbergraph_BP_LD49GameMode_Menu(int32 EntryPoint);
}; // Size: 0x440

#endif
