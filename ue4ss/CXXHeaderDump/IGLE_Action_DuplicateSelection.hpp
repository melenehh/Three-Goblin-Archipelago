#ifndef UE4SS_SDK_IGLE_Action_DuplicateSelection_HPP
#define UE4SS_SDK_IGLE_Action_DuplicateSelection_HPP

class UIGLE_Action_DuplicateSelection_C : public UIGLE_ActionBuffer_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<class AActor*> CreatedActors;                                              // 0x0040 (size: 0x10)
    TArray<FIGLEActorReference> CreatedActors_Refs;                                   // 0x0050 (size: 0x10)
    TArray<FIGLEPlacableSave> DeletedActors_Saves;                                    // 0x0060 (size: 0x10)
    class AIGLE_Pawn_EditorBase_C* EditorPawn;                                        // 0x0070 (size: 0x8)
    class UIGLE_Action_ChangeSelection_C* DuplicateSelectionChangedAction;            // 0x0078 (size: 0x8)

    void GetFriendlyActionName(FString& OutName);
    void Initialize();
    void UndoAction();
    void RedoAction();
    void ExecuteUbergraph_IGLE_Action_DuplicateSelection(int32 EntryPoint);
}; // Size: 0x80

#endif
