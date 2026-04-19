#ifndef UE4SS_SDK_WBP_ControlsPrompt_HPP
#define UE4SS_SDK_WBP_ControlsPrompt_HPP

class UWBP_ControlsPrompt_C : public UUserWidget
{
    class UImage* Image_44;                                                           // 0x02C0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKey_8;                                            // 0x02C8 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKey_9;                                            // 0x02D0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKey_14;                                           // 0x02D8 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKey_15;                                           // 0x02E0 (size: 0x8)
    class UWBP_InputKey_C* WBP_LeanBackward;                                          // 0x02E8 (size: 0x8)
    class UWBP_InputKey_C* WBP_LeanForward;                                           // 0x02F0 (size: 0x8)
    class UWBP_InputKey_C* WBP_LeanLeft;                                              // 0x02F8 (size: 0x8)
    class UWBP_InputKey_C* WBP_LeanRight;                                             // 0x0300 (size: 0x8)
    class UWBP_InputKey_C* WBP_MoveBackward;                                          // 0x0308 (size: 0x8)
    class UWBP_InputKey_C* WBP_MoveForward;                                           // 0x0310 (size: 0x8)
    class UWBP_InputKey_C* WBP_MoveLeft;                                              // 0x0318 (size: 0x8)
    class UWBP_InputKey_C* WBP_MoveRight;                                             // 0x0320 (size: 0x8)
    class UWBP_InputKey_C* WBP_TurnLeft;                                              // 0x0328 (size: 0x8)
    class UWBP_InputKey_C* WBP_TurnRight;                                             // 0x0330 (size: 0x8)

    void Refresh();
    void UpdateLabels();
    void UpdateLabelsOld();
}; // Size: 0x338

#endif
