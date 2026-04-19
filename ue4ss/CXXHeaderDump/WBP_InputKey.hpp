#ifndef UE4SS_SDK_WBP_InputKey_HPP
#define UE4SS_SDK_WBP_InputKey_HPP

class UWBP_InputKey_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* ReleaseGlow;                                              // 0x02C8 (size: 0x8)
    class UWidgetAnimation* PressGlow;                                                // 0x02D0 (size: 0x8)
    class UImage* Background;                                                         // 0x02D8 (size: 0x8)
    class UImage* Glow;                                                               // 0x02E0 (size: 0x8)
    class UImage* Pressed;                                                            // 0x02E8 (size: 0x8)
    class UImage* PS_Icon;                                                            // 0x02F0 (size: 0x8)
    class UScaleBox* ScaleBox_0;                                                      // 0x02F8 (size: 0x8)
    class USizeBox* SizeBox_1;                                                        // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_Key;                                                  // 0x0308 (size: 0x8)
    FText Text;                                                                       // 0x0310 (size: 0x18)
    int32 Shape;                                                                      // 0x0328 (size: 0x4)
    int32 Icon;                                                                       // 0x032C (size: 0x4)
    bool AllowExpand;                                                                 // 0x0330 (size: 0x1)

    void UpdateLook();
    void SetPressed(bool Pressed);
    void SetKey(FText Text);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_WBP_InputKey(int32 EntryPoint);
}; // Size: 0x331

#endif
