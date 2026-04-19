#ifndef UE4SS_SDK_BP_SaveProgression_HPP
#define UE4SS_SDK_BP_SaveProgression_HPP

class UBP_SaveProgression_C : public USaveGame
{
    TSet<FName> CollectedPretzels;                                                    // 0x0028 (size: 0x50)
    TSet<FName> UnlockedTips;                                                         // 0x0078 (size: 0x50)
    TMap<FName, double> LevelTimes;                                                   // 0x00C8 (size: 0x50)
    TSubclassOf<class UBP_SkinComponentBase_C> SelectedSkin;                          // 0x0118 (size: 0x8)

}; // Size: 0x120

#endif
