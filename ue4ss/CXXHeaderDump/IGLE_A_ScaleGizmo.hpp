#ifndef UE4SS_SDK_IGLE_A_ScaleGizmo_HPP
#define UE4SS_SDK_IGLE_A_ScaleGizmo_HPP

class AIGLE_A_ScaleGizmo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* Scale;                                                // 0x02A0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* ScaleZ;                                               // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* ScaleY;                                               // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* ScaleX;                                               // 0x02C0 (size: 0x8)
    class UMaterialInstanceDynamic* MatScaleX;                                        // 0x02C8 (size: 0x8)
    FLinearColor ScaleXColor;                                                         // 0x02D0 (size: 0x10)
    class UMaterialInstanceDynamic* MatScaleY;                                        // 0x02E0 (size: 0x8)
    class UMaterialInstanceDynamic* MatScaleZ;                                        // 0x02E8 (size: 0x8)
    FLinearColor ScaleYColor;                                                         // 0x02F0 (size: 0x10)
    FLinearColor ScaleZColor;                                                         // 0x0300 (size: 0x10)
    class UMaterialInstanceDynamic* MatScaleSphere;                                   // 0x0310 (size: 0x8)
    FLinearColor ScaleSphereColor;                                                    // 0x0318 (size: 0x10)
    class AIGLE_A_Gizmo_C* Gizmo;                                                     // 0x0328 (size: 0x8)
    FVector PreUseScale;                                                              // 0x0330 (size: 0x18)
    double Sensitivity;                                                               // 0x0348 (size: 0x8)
    FVector PreUseIntersectionPoint;                                                  // 0x0350 (size: 0x18)
    FVector2D PreUseCursorLocation;                                                   // 0x0368 (size: 0x10)
    double MaxScaleDelta;                                                             // 0x0378 (size: 0x8)

    void SnapDeltaScale(double DeltaScale, double& ResultDeltaScale);
    FVector GetForwardVectorForHitAxis(class UPrimitiveComponent* InputPin);
    void OrientScaleArrows(FRotator WorldRotation);
    void OptimalCrossProductForCamera(FVector BaseAxisForward, FVector TestAForward, FVector TestBForward, FVector CameraForward, FVector& OptimalCrossBetweenBaseAndTest);
    void OptimalPlaneNormalForCameraAndHitAxis(class UPrimitiveComponent* HitComponent, FVector CameraDir, FVector& PlaneNormal);
    void GenerateScaleGizmo();
    void UpdateGizmoSpace(TEnumAsByte<IGLE_E_GizmoSpace::Type> New Gizmo Space);
    void TickGizmo();
    void GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter);
    void ExecuteUbergraph_IGLE_A_ScaleGizmo(int32 EntryPoint);
}; // Size: 0x380

#endif
