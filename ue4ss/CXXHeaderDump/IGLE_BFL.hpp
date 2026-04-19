#ifndef UE4SS_SDK_IGLE_BFL_HPP
#define UE4SS_SDK_IGLE_BFL_HPP

class UIGLE_BFL_C : public UBlueprintFunctionLibrary
{

    bool IsPublished(class UObject* __WorldContext);
    void PublishLevel(class UObject* __WorldContext, int64& ID, bool& Success);
    void IGLE QuickLoadLevel_Editor(class UObject* __WorldContext);
    void IGLE QuickSaveLevel_Editor(class UObject* __WorldContext);
    void IGLE SaveLevel(FString AbsolutePathToLevel, class UIGLE_CustomDataObjectBase_C* CustomDataObject, class UObject* __WorldContext);
    void IGLE Load Level(FString AbsoluteLevelPath, class UObject* OuterForDataObject, class UObject* __WorldContext, class UIGLE_CustomDataObjectBase_C*& CustomDataObject);
    void IGLE ParseOptionString(FString OptionName, FString OptionsString, class UObject* __WorldContext, FString& Value, bool& OptionExists);
    void IGLE TryCallOnPropertyValueChanged(class UIGLE_PropertyValueObject* PropertyValueObject, class UObject* __WorldContext, bool& Success);
    void IGLE TryGetPropertyOwner(class UIGLE_PropertyValueObject* PropertyValueObject, class UObject* __WorldContext, class UIGLE_InterfaceComponent*& Owner, bool& Value);
    void IGLE SetGlobalSettings(FIGLE_ST_GlobalSettings NewSettings, class UObject* __WorldContext);
    void IGLE GetFileNameFromPath(FString Path, class UObject* __WorldContext, FString& Filename);
    void IGLE GetGlobalSettings(class UObject* __WorldContext, FIGLE_ST_GlobalSettings& Settings);
    void IGLE GetAllPlacableActorsInLevel(class UObject* __WorldContext, TArray<class AActor*>& AllPlacableActors);
    void IGLE SetStencilForAllPrimitiveComponents(class AActor* Target Actor, bool Render Custom Depth, int32 Stencil Value, class UObject* __WorldContext);
    void IGLE TryGetEditorPawn(class UObject* __WorldContext, class AIGLE_Pawn_Example_C*& IGLE Editor Pawn);
}; // Size: 0x28

#endif
