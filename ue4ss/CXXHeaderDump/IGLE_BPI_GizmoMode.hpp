#ifndef UE4SS_SDK_IGLE_BPI_GizmoMode_HPP
#define UE4SS_SDK_IGLE_BPI_GizmoMode_HPP

class IIGLE_BPI_GizmoMode_C : public IInterface
{

    void UpdateGizmoSpace(TEnumAsByte<IGLE_E_GizmoSpace::Type> New Gizmo Space);
    void TickGizmo();
    void GenerateGizmo(class AIGLE_A_Gizmo_C* GizmoOuter);
}; // Size: 0x28

#endif
