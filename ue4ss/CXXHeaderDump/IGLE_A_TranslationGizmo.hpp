#ifndef UE4SS_SDK_IGLE_A_TranslationGizmo_HPP
#define UE4SS_SDK_IGLE_A_TranslationGizmo_HPP

class AIGLE_A_TranslationGizmo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Translation;                                          // 0x02A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* TranslationY;                                         // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* TranslationZ;                                         // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* TranslationX;                                         // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* MatTranslationX;                                  // 0x02C8 (size: 0x8)
    FLinearColor TranslationXColor;                                                   // 0x02D0 (size: 0x10)
    class UMaterialInstanceDynamic* MatTranslationY;                                  // 0x02E0 (size: 0x8)
    class UMaterialInstanceDynamic* MatTranslationZ;                                  // 0x02E8 (size: 0x8)
    FLinearColor TranslationYColor;                                                   // 0x02F0 (size: 0x10)
    FLinearColor TranslationZColor;                                                   // 0x0300 (size: 0x10)
    class UMaterialInstanceDynamic* MatTranslationSphere;                             // 0x0310 (size: 0x8)
    FLinearColor TranslationSphereColor;                                              // 0x0318 (size: 0x10)
    FVector PreUseDeltaDesiredTranslation;                                            // 0x0328 (size: 0x18)
    class AIGLE_A_Gizmo_C* Gizmo;                                                     // 0x0340 (size: 0x8)
    FVector PreUseDeltaTranslation;                                                   // 0x0348 (size: 0x18)

    void OrientTranslationArrows(FRotator WorldRotation);
    void OptimalCrossProductForCamera(FVector BaseAxisForward, FVector TestAForward, FVector TestBForward, FVector CameraForward, FVector& OptimalCrossBetweenBaseAndTest);
    void OptimalPlaneNormalForCameraAndHitAxis(class UPrimitiveComponent* HitComponent, FVector CameraDir, FVector& PlaneNormal);
    void GenerateTranslationGizmo();
    void UpdateGizmoSpace(TEnumAsByte<IGLE_E_GizmoSpace::Type> New Gizmo Space);
    void TickGizmo();
    void GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter);
    void ExecuteUbergraph_IGLE_A_TranslationGizmo(int32 EntryPoint);
}; // Size: 0x360

#endif
