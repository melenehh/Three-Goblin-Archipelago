#ifndef UE4SS_SDK_BP_GoblinController_HPP
#define UE4SS_SDK_BP_GoblinController_HPP

class ABP_GoblinController_C : public AGoblinController
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0858 (size: 0x8)
    class UWBP_VideoTutorialControls_C* VideoTutorialWidget;                          // 0x0860 (size: 0x8)
    class UWBP_PauseMenu_C* PauseMenuWidget;                                          // 0x0868 (size: 0x8)

    void HideMessage();
    void DisplayMessage(const FText& Message, float Duration);
    void InpActEvt_Escape_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_Gamepad_Special_Right_K2Node_InputKeyEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ForcePause();
    void ExecuteUbergraph_BP_GoblinController(int32 EntryPoint);
}; // Size: 0x870

#endif
