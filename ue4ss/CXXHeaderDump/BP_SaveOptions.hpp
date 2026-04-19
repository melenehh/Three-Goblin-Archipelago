#ifndef UE4SS_SDK_BP_SaveOptions_HPP
#define UE4SS_SDK_BP_SaveOptions_HPP

class UBP_SaveOptions_C : public USaveGame
{
    int32 VisualMode;                                                                 // 0x0028 (size: 0x4)
    int32 ControlScheme;                                                              // 0x002C (size: 0x4)
    int32 MusicVolume;                                                                // 0x0030 (size: 0x4)
    int32 SoundVolume;                                                                // 0x0034 (size: 0x4)
    int32 Resolution;                                                                 // 0x0038 (size: 0x4)
    int32 Display;                                                                    // 0x003C (size: 0x4)
    int32 Quality;                                                                    // 0x0040 (size: 0x4)
    int32 Difficulty;                                                                 // 0x0044 (size: 0x4)
    int32 FpsLimit;                                                                   // 0x0048 (size: 0x4)
    int32 VSync;                                                                      // 0x004C (size: 0x4)
    int32 HUD_Tutorial;                                                               // 0x0050 (size: 0x4)
    int32 HUD_Timer;                                                                  // 0x0054 (size: 0x4)
    int32 HUD_Difficulty;                                                             // 0x0058 (size: 0x4)
    bool DidCheckForSteamDeck;                                                        // 0x005C (size: 0x1)

}; // Size: 0x5D

#endif
