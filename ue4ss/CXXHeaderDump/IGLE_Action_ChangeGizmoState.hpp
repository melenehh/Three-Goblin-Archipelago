#ifndef UE4SS_SDK_IGLE_Action_ChangeGizmoState_HPP
#define UE4SS_SDK_IGLE_Action_ChangeGizmoState_HPP

class UIGLE_Action_ChangeGizmoState_C : public UIGLE_ActionBuffer_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class AIGLE_Pawn_EditorBase_C* Parent;                                            // 0x0040 (size: 0x8)
    TEnumAsByte<IGLE_E_GizmoSpace::Type> OldGizmoSpace;                               // 0x0048 (size: 0x1)
    TEnumAsByte<IGLE_E_GizmoSpace::Type> NewGizmoSpace;                               // 0x0049 (size: 0x1)
    TEnumAsByte<IGLE_E_GizmoMode::Type> OldGizmoMode;                                 // 0x004A (size: 0x1)
    TEnumAsByte<IGLE_E_GizmoMode::Type> NewGizmoMode;                                 // 0x004B (size: 0x1)

    void GetFriendlyActionName(FString& OutName);
    void UndoAction();
    void RedoAction();
    void ExecuteUbergraph_IGLE_Action_ChangeGizmoState(int32 EntryPoint);
}; // Size: 0x4C

#endif
