#ifndef UE4SS_SDK_BP_SaveCustomLevelProgression_HPP
#define UE4SS_SDK_BP_SaveCustomLevelProgression_HPP

class UBP_SaveCustomLevelProgression_C : public USaveGame
{
    TSet<FName> CustomLevelPretzels;                                                  // 0x0028 (size: 0x50)
    TMap<FName, double> CustomLevelTimes;                                             // 0x0078 (size: 0x50)

}; // Size: 0xC8

#endif
