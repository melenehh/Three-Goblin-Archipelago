#ifndef UE4SS_SDK_WBP_HUD_HPP
#define UE4SS_SDK_WBP_HUD_HPP

class UWBP_HUD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* SwitchScreen;                                             // 0x02C8 (size: 0x8)
    class UWidgetAnimation* Hide;                                                     // 0x02D0 (size: 0x8)
    class UImage* Fade;                                                               // 0x02D8 (size: 0x8)
    class UWBP_ControlsPrompt_C* WBP_ControlsPrompt_C_12;                             // 0x02E0 (size: 0x8)
    class UWBP_DifficultyIndicator_C* WBP_DifficultyIndicator;                        // 0x02E8 (size: 0x8)
    class UWBP_DisguiseIndicator_C* WBP_DisguiseIndicator_C_0;                        // 0x02F0 (size: 0x8)
    class UWBP_HUDTimer_C* WBP_HUDTimer;                                              // 0x02F8 (size: 0x8)
    class UWBP_KeyIndicator_C* WBP_KeyIndicator_C_0;                                  // 0x0300 (size: 0x8)
    class UWBP_MessageText_C* WBP_MessageText_C_0;                                    // 0x0308 (size: 0x8)

    void GetMessageWidget(class UWBP_MessageText_C*& Widget);
    void RefreshItems();
    void Construct();
    void ExecuteUbergraph_WBP_HUD(int32 EntryPoint);
}; // Size: 0x310

#endif
