#ifndef UE4SS_SDK_AP_Splash_HPP
#define UE4SS_SDK_AP_Splash_HPP

class UAP_Splash_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)

    void PreBeginPlay();
    void PostBeginPlay();
    void ExecuteUbergraph_AP_Splash(int32 EntryPoint);
}; // Size: 0x2C8

#endif
