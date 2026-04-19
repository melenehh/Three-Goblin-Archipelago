#ifndef UE4SS_SDK_BP_Skin_Crown_HPP
#define UE4SS_SDK_BP_Skin_Crown_HPP

class UBP_Skin_Crown_C : public UBP_SkinComponentBase_C
{
    class UStaticMesh* CrownMesh;                                                     // 0x02C0 (size: 0x8)
    class ABP_GoblinSkinPreview_C* SkinPreviewGoblin;                                 // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* PreviewCrown;                                         // 0x02D0 (size: 0x8)

    void OnSkinSelectReset();
    void OnSkinSelectPreview(class ABP_GoblinSkinPreview_C* Goblin);
    void OnAttachedToGoblin(class ABP_GoblinCharacter_C* GoblinCharacter);
}; // Size: 0x2D8

#endif
