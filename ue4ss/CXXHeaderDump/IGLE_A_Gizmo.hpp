#ifndef UE4SS_SDK_IGLE_A_Gizmo_HPP
#define UE4SS_SDK_IGLE_A_Gizmo_HPP

class AIGLE_A_Gizmo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UChildActorComponent* ActiveGizmo;                                          // 0x02A0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A8 (size: 0x8)
    class AIGLE_Pawn_EditorBase_C* Parent;                                            // 0x02B0 (size: 0x8)
    TEnumAsByte<IGLE_E_GizmoMode::Type> Mode;                                         // 0x02B8 (size: 0x1)
    TEnumAsByte<IGLE_E_GizmoSpace::Type> Space;                                       // 0x02B9 (size: 0x1)
    TEnumAsByte<EObjectTypeQuery> GizmoObjectType;                                    // 0x02BA (size: 0x1)
    double MaxGizmoScanDistance;                                                      // 0x02C0 (size: 0x8)
    bool IsUsingGizmo;                                                                // 0x02C8 (size: 0x1)
    FHitResult CurrentGizmoHit;                                                       // 0x02D0 (size: 0xE8)
    bool IsHoveringGizmo;                                                             // 0x03B8 (size: 0x1)
    double OnHoverDesaturation;                                                       // 0x03C0 (size: 0x8)
    FTransform PreUseTransform;                                                       // 0x03D0 (size: 0x60)
    FHitResult LastGizmoHit;                                                          // 0x0430 (size: 0xE8)
    bool CanScanForGizmo;                                                             // 0x0518 (size: 0x1)
    FTransform LastFrameTransform;                                                    // 0x0520 (size: 0x60)
    double TranslationSnap;                                                           // 0x0580 (size: 0x8)
    double RotationAngleSnap;                                                         // 0x0588 (size: 0x8)
    double ScaleSnap;                                                                 // 0x0590 (size: 0x8)
    bool EnableTranslationSnap;                                                       // 0x0598 (size: 0x1)
    bool EnableRotationSnap;                                                          // 0x0599 (size: 0x1)
    bool EnableScaleSnap;                                                             // 0x059A (size: 0x1)
    bool WasUsingGizmo;                                                               // 0x059B (size: 0x1)
    bool ScaleGizmoToView;                                                            // 0x059C (size: 0x1)
    double GizmoScreenSpaceSize;                                                      // 0x05A0 (size: 0x8)
    double MinDepthForAutoScale;                                                      // 0x05A8 (size: 0x8)
    TMap<class AActor*, class FTransform> PreUseSelectionTransforms;                  // 0x05B0 (size: 0x50)
    TMap<class AActor*, class FTransform> PostUseSelectionTransforms;                 // 0x0600 (size: 0x50)
    bool TemporarySnapEnabled;                                                        // 0x0650 (size: 0x1)

    void ShouldSnapForMode(TEnumAsByte<IGLE_E_GizmoMode::Type> Mode, bool& ShouldSnap);
    void ForceInverseGizmoScale(class USceneComponent* Component, FVector InitialRelativeScale);
    void GetOrderedValuesForActorTransformKeys(TArray<class AActor*>& Actors, TMap<class AActor*, class FTransform> InMap, TArray<FTransform>& OutTransforms);
    void GetGizmoSnappingSettings(double& TranslationSnap, double& RotationAngleSnap, double& ScaleSnap);
    void ViewSpaceScanLine(FVector& Start, FVector& End);
    void ScanForGizmo(FHitResult& HitResult, bool& HitMyself);
    void GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter);
    void TickGizmo();
    void UpdateGizmoSpace(TEnumAsByte<IGLE_E_GizmoSpace::Type> New Gizmo Space);
    void ReceiveBeginPlay();
    void SetGizmoMode(TEnumAsByte<IGLE_E_GizmoMode::Type> Mode, bool Create Undo Action);
    void ReceiveTick(float DeltaSeconds);
    void SetStencilValueForGizmo(bool Render Custom Depth, int32 Stencil Value);
    void SetGizmoSpace(TEnumAsByte<IGLE_E_GizmoSpace::Type> New Space, const bool Create Undo Action);
    void OnUseGizmoUsageChanged();
    void Tick_ScaleGizmoToView();
    void ExecuteUbergraph_IGLE_A_Gizmo(int32 EntryPoint);
}; // Size: 0x651

#endif
