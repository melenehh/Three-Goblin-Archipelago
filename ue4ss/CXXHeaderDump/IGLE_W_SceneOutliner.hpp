#ifndef UE4SS_SDK_IGLE_W_SceneOutliner_HPP
#define UE4SS_SDK_IGLE_W_SceneOutliner_HPP

class UIGLE_W_SceneOutliner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UScrollBox* OutlinerScrollBox;                                              // 0x02C8 (size: 0x8)
    class UIGLE_EditableTextBox_C* SearchBox;                                         // 0x02D0 (size: 0x8)
    TMap<class AActor*, class UIGLE_W_SceneOutliner_Entry_C*> PlacableEntries;        // 0x02D8 (size: 0x50)
    class AIGLE_Pawn_EditorBase_C* Parent;                                            // 0x0328 (size: 0x8)

    void SortOutlinerChildrenBySearchTerm(FString SearchString);
    void Construct();
    void OnPlacablePlacedInEditor(class AActor* PlacableActor);
    void OnPlacableDeletedInEditor(class AActor* PlacableActor);
    void OnSelectionUpdated(class AActor* Actor, bool CreateUndoAction);
    void BndEvt__SearchBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_IGLE_W_SceneOutliner(int32 EntryPoint);
}; // Size: 0x330

#endif
