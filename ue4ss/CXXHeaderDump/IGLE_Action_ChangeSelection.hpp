#ifndef UE4SS_SDK_IGLE_Action_ChangeSelection_HPP
#define UE4SS_SDK_IGLE_Action_ChangeSelection_HPP

class UIGLE_Action_ChangeSelection_C : public UIGLE_ActionBuffer_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TSet<AActor*> OldSelection;                                                       // 0x0040 (size: 0x50)
    TSet<AActor*> NewSelection;                                                       // 0x0090 (size: 0x50)
    TSet<FIGLEActorReference> OldSelection_Refs;                                      // 0x00E0 (size: 0x50)
    TSet<FIGLEActorReference> NewSelection_Refs;                                      // 0x0130 (size: 0x50)
    class AIGLE_Pawn_EditorBase_C* EditorPawn;                                        // 0x0180 (size: 0x8)

    void GetFriendlyActionName(FString& OutName);
    void RedoSelection();
    void UndoSelection();
    void UndoAction();
    void RedoAction();
    void Initialize();
    void ExecuteUbergraph_IGLE_Action_ChangeSelection(int32 EntryPoint);
}; // Size: 0x188

#endif
