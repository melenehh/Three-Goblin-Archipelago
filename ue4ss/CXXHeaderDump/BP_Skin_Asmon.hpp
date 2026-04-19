#ifndef UE4SS_SDK_BP_Skin_Asmon_HPP
#define UE4SS_SDK_BP_Skin_Asmon_HPP

class UBP_Skin_Asmon_C : public UBP_SkinComponentBase_C
{
    class UStaticMesh* AsmonMesh;                                                     // 0x02C0 (size: 0x8)
    class UActorComponent* SkinSelectTempMesh;                                        // 0x02C8 (size: 0x8)
    class ABP_GoblinSkinPreview_C* PreviewGoblin;                                     // 0x02D0 (size: 0x8)

    void OnSkinSelectReset();
    void OnSkinSelectPreview(class ABP_GoblinSkinPreview_C* Goblin);
    void OnAttachedToGoblin(class ABP_GoblinCharacter_C* GoblinCharacter);
}; // Size: 0x2D8

#endif
