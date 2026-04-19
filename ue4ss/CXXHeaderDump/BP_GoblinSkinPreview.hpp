#ifndef UE4SS_SDK_BP_GoblinSkinPreview_HPP
#define UE4SS_SDK_BP_GoblinSkinPreview_HPP

class ABP_GoblinSkinPreview_C : public ABP_GoblinCorpse_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    float GotoStandingAnim_Blend_68B4C5BB4D0B4B45BDC9BA9A5AC69D17;                    // 0x02B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GotoStandingAnim__Direction_68B4C5BB4D0B4B45BDC9BA9A5AC69D17; // 0x02B4 (size: 0x1)
    class UTimelineComponent* GotoStandingAnim;                                       // 0x02B8 (size: 0x8)
    float GotoCheerAnim_Blend_A956DA58CC5E47C8B9B279C25659CAB5;                       // 0x02C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> GotoCheerAnim__Direction_A956DA58CC5E47C8B9B279C25659CAB5; // 0x02C4 (size: 0x1)
    class UTimelineComponent* GotoCheerAnim;                                          // 0x02C8 (size: 0x8)

    void RemoveComponent(class UActorComponent* Component);
    void GotoCheerAnim__FinishedFunc();
    void GotoCheerAnim__UpdateFunc();
    void GotoStandingAnim__FinishedFunc();
    void GotoStandingAnim__UpdateFunc();
    void Cheer();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_BP_GoblinSkinPreview(int32 EntryPoint);
}; // Size: 0x2D0

#endif
