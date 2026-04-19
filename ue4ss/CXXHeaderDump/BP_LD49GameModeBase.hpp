#ifndef UE4SS_SDK_BP_LD49GameModeBase_HPP
#define UE4SS_SDK_BP_LD49GameModeBase_HPP

class ABP_LD49GameModeBase_C : public ALD49GameModeBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0410 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0418 (size: 0x8)
    FBP_LD49GameModeBase_COnFail OnFail;                                              // 0x0420 (size: 0x10)
    void OnFail();
    FRandomStream RandomStream;                                                       // 0x0430 (size: 0x8)

    void Get Time of Day(int32& CurrentHour, int32& Current Minute);
    void Set Time of Day(int32 Hour, int32 Minute);
    void IsPlayingFromLevelEditor(bool& FromEditor);
    void IsPlayingCustomLevel(bool& Custom);
    void GetRandomFloat(double& Output);
    void OnEnteringMenu();
    void OnReturningFromMenu();
    void ReceiveBeginPlay();
    void ForcePauseGame();
    void ExecuteUbergraph_BP_LD49GameModeBase(int32 EntryPoint);
    void OnFail__DelegateSignature();
}; // Size: 0x438

#endif
