#ifndef UE4SS_SDK_WBP_VideoTutorialControls_HPP
#define UE4SS_SDK_WBP_VideoTutorialControls_HPP

class UWBP_VideoTutorialControls_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyA;                                             // 0x02C8 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyD;                                             // 0x02D0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyI;                                             // 0x02D8 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyJ;                                             // 0x02E0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyK;                                             // 0x02E8 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyL;                                             // 0x02F0 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyS;                                             // 0x02F8 (size: 0x8)
    class UWBP_InputKey_C* WBP_InputKeyW;                                             // 0x0300 (size: 0x8)

    void Key Event(FKey Key, bool Pressed, bool Released);
    void Construct();
    void ExecuteUbergraph_WBP_VideoTutorialControls(int32 EntryPoint);
}; // Size: 0x308

#endif
