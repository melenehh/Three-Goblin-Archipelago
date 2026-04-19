#ifndef UE4SS_SDK_IGLE_Action_PlacePlacable_HPP
#define UE4SS_SDK_IGLE_Action_PlacePlacable_HPP

class UIGLE_Action_PlacePlacable_C : public UIGLE_ActionBuffer_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0038 (size: 0x8)
    class AActor* PlacedPlacable;                                                     // 0x0040 (size: 0x8)
    FIGLEPlacableSave PlacedPlacable_Save;                                            // 0x0050 (size: 0xF0)
    class AIGLE_Pawn_EditorBase_C* EditorPawn;                                        // 0x0140 (size: 0x8)
    FIGLEActorReference PlacedPlacable_Ref;                                           // 0x0148 (size: 0x18)

    void GetFriendlyActionName(FString& OutName);
    void Initialize();
    void UndoAction();
    void RedoAction();
    void ExecuteUbergraph_IGLE_Action_PlacePlacable(int32 EntryPoint);
}; // Size: 0x160

#endif
