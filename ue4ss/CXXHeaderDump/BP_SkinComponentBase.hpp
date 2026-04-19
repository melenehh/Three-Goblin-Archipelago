#ifndef UE4SS_SDK_BP_SkinComponentBase_HPP
#define UE4SS_SDK_BP_SkinComponentBase_HPP

class UBP_SkinComponentBase_C : public USceneComponent
{
    TSubclassOf<class UGoblinAnimInstance> AnimBPOverride;                            // 0x02A0 (size: 0x8)
    class USkeletalMesh* MeshOverride;                                                // 0x02A8 (size: 0x8)
    bool ShowDefaultHat;                                                              // 0x02B0 (size: 0x1)
    TSubclassOf<class AActor> FallActor;                                              // 0x02B8 (size: 0x8)

    void OnSkinSelectReset();
    void OnSkinSelectPreview(class ABP_GoblinSkinPreview_C* Goblin);
    void OnAttachedToGoblin(class ABP_GoblinCharacter_C* GoblinCharacter);
}; // Size: 0x2C0

#endif
