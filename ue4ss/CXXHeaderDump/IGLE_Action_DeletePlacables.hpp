#ifndef UE4SS_SDK_IGLE_Action_DeletePlacables_HPP
#define UE4SS_SDK_IGLE_Action_DeletePlacables_HPP

class UIGLE_Action_DeletePlacables_C : public UIGLE_ActionBuffer_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    TArray<class AActor*> DeletedPlacables;                                           // 0x0040 (size: 0x10)
    class AIGLE_Pawn_EditorBase_C* EditorPawn;                                        // 0x0050 (size: 0x8)
    TArray<FIGLEPlacableSave> DeletedPlacables_Save;                                  // 0x0058 (size: 0x10)
    TArray<class AActor*> DeletionUndonePlacables;                                    // 0x0068 (size: 0x10)

    void GetFriendlyActionName(FString& OutName);
    void Initialize();
    void UndoAction();
    void RedoAction();
    void ExecuteUbergraph_IGLE_Action_DeletePlacables(int32 EntryPoint);
}; // Size: 0x78

#endif
