#ifndef UE4SS_SDK_IGLE_A_RotationGizmo_HPP
#define UE4SS_SDK_IGLE_A_RotationGizmo_HPP

class AIGLE_A_RotationGizmo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0298 (size: 0x8)
    class UStaticMeshComponent* RotationZ;                                            // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* RotationY;                                            // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* RotationX;                                            // 0x02B0 (size: 0x8)
    class USceneComponent* Root;                                                      // 0x02B8 (size: 0x8)
    class UMaterialInstanceDynamic* MatRotationX;                                     // 0x02C0 (size: 0x8)
    FLinearColor RotationXColor;                                                      // 0x02C8 (size: 0x10)
    class UMaterialInstanceDynamic* MatRotationY;                                     // 0x02D8 (size: 0x8)
    class UMaterialInstanceDynamic* MatRotationZ;                                     // 0x02E0 (size: 0x8)
    FLinearColor RotationYColor;                                                      // 0x02E8 (size: 0x10)
    FLinearColor RotationZColor;                                                      // 0x02F8 (size: 0x10)
    FVector PreUseWorldMousePlanePosition;                                            // 0x0308 (size: 0x18)
    class AIGLE_A_Gizmo_C* Gizmo;                                                     // 0x0320 (size: 0x8)
    FVector CurrentWorldMousePlanePosition;                                           // 0x0328 (size: 0x18)
    FVector PreUsePlaneNormal;                                                        // 0x0340 (size: 0x18)
    double MaxCursorDistanceFromGizmoMultiplier;                                      // 0x0358 (size: 0x8)
    FQuat DeltaRotationQuat;                                                          // 0x0360 (size: 0x20)
    FVector LastWorldMousePlanePosition;                                              // 0x0380 (size: 0x18)

    void RotationSnapCompleted?(FQuat CurrentDeltaQuat, double AngleSnap, bool& Result);
    void SnapDeltaQuat(FQuat DeltaQuat, double SnapAngle, FQuat& Result Quat);
    void OrientRotationRings(FRotator WorldRotation);
    void GenerateRotationGizmo();
    void UpdateGizmoSpace(TEnumAsByte<IGLE_E_GizmoSpace::Type> New Gizmo Space);
    void TickGizmo();
    void GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter);
    void ExecuteUbergraph_IGLE_A_RotationGizmo(int32 EntryPoint);
}; // Size: 0x398

#endif
