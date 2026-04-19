#ifndef UE4SS_SDK_IGLE_Action_TransformSelection_HPP
#define UE4SS_SDK_IGLE_Action_TransformSelection_HPP

class UIGLE_Action_TransformSelection_C : public UIGLE_ActionBuffer_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<class AActor*> Selection;                                                  // 0x0040 (size: 0x10)
    TArray<FTransform> OldTransforms;                                                 // 0x0050 (size: 0x10)
    class AIGLE_Pawn_EditorBase_C* EditorPawn;                                        // 0x0060 (size: 0x8)
    TArray<FIGLEActorReference> Selection_Refs;                                       // 0x0068 (size: 0x10)
    TArray<FTransform> NewTransforms;                                                 // 0x0078 (size: 0x10)

    void GetFriendlyActionName(FString& OutName);
    void UndoAction();
    void RedoAction();
    void Initialize();
    void ExecuteUbergraph_IGLE_Action_TransformSelection(int32 EntryPoint);
}; // Size: 0x88

#endif
