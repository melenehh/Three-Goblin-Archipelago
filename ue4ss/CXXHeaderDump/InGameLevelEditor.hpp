#ifndef UE4SS_SDK_InGameLevelEditor_HPP
#define UE4SS_SDK_InGameLevelEditor_HPP

struct FIGLEActorReference
{
    class AActor* ActorRef;                                                           // 0x0000 (size: 0x8)
    int64 ActorID;                                                                    // 0x0008 (size: 0x8)
    TSubclassOf<class AActor> ActorClass;                                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FIGLELevelSave
{
    TArray<FIGLEPlacableSave> SavedPlacables;                                         // 0x0000 (size: 0x10)
    TArray<uint8> CustomData;                                                         // 0x0010 (size: 0x10)
    FString levelName;                                                                // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FIGLEPlacableActorInfo : public FTableRowBase
{
    TSubclassOf<class AActor> PlacableActorClass;                                     // 0x0008 (size: 0x8)
    FString PlacableName;                                                             // 0x0010 (size: 0x10)
    FString PlacableCategory;                                                         // 0x0020 (size: 0x10)
    FString PlacableDescription;                                                      // 0x0030 (size: 0x10)
    TSoftObjectPtr<UTexture2D> PlacableIcon;                                          // 0x0040 (size: 0x28)

}; // Size: 0x68

struct FIGLEPlacableSave
{
    int64 ActorID;                                                                    // 0x0000 (size: 0x8)
    FString ActorRuntimeName;                                                         // 0x0008 (size: 0x10)
    FSoftClassPath ActorClass;                                                        // 0x0018 (size: 0x20)
    FTransform ActorWorldTransform;                                                   // 0x0040 (size: 0x60)
    TMap<class FString, class FIGLEPropertyData> PropertyDataMap;                     // 0x00A0 (size: 0x50)

}; // Size: 0xF0

struct FIGLEProperty
{
    FString PropertyName;                                                             // 0x0000 (size: 0x10)
    FString PropertyCategory;                                                         // 0x0010 (size: 0x10)
    TMap<class FString, class FString> PropertyOptions;                               // 0x0020 (size: 0x50)
    TSubclassOf<class UIGLE_PropertyValueObject> PropertyValueObjectClass;            // 0x0070 (size: 0x8)
    class UIGLE_PropertyValueObject* PropertyValue;                                   // 0x0078 (size: 0x8)

}; // Size: 0x80

struct FIGLEPropertyData
{
    TArray<uint8> PropertyBuffer;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStringFloatPair
{
    FString String;                                                                   // 0x0000 (size: 0x10)
    float float;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

class UIGLE_ActionBufferObject : public UObject
{

    void UndoAction();
    void RedoAction();
    void Initialize();
    void GetFriendlyActionName(FString& OutName);
}; // Size: 0x30

class UIGLE_AsyncRegisterPlacables : public UBlueprintAsyncActionBase
{
    FIGLE_AsyncRegisterPlacablesOnPlacablesRegistered OnPlacablesRegistered;          // 0x0030 (size: 0x10)
    void OnPlacablesRegistered(const TArray<class AActor*>& TempActors);

    class UIGLE_AsyncRegisterPlacables* AsyncRegisterPlacables(const class UObject* WorldContextObject, const TArray<FString>& ContentPaths, bool DeferDestruction);
}; // Size: 0x60

class UIGLE_FL : public UBlueprintFunctionLibrary
{

    void IGLE_WriteBytesToFile(FString AbsolutePath, const TArray<uint8>& Bytes);
    TArray<uint8> IGLE_TransformToBytes(const FTransform& Transform);
    TEnumAsByte<ECollisionChannel> IGLE_TraceTypeQueryToCollisionChannel(TEnumAsByte<ETraceTypeQuery> TraceTypeQuery);
    bool IGLE_TraceConvex(class UObject* WorldContextObject, const TArray<FVector>& Verticies, const FTransform& ShapeTransfom, TEnumAsByte<ETraceTypeQuery> TraceChannel, const FVector& Start, const FVector& End, const TArray<class AActor*> ActorsToIgnore, TArray<FHitResult>& OutHits);
    bool IGLE_SweepActorWithWorld(class AActor* Target, TEnumAsByte<ETraceTypeQuery> TraceChannel, const FVector& Start, const FVector& End, TArray<FHitResult>& OutHits, class UPrimitiveComponent* OverrideComponent);
    uint8 IGLE_StringToEnum(FString String, TSoftObjectPtr<UUserDefinedEnum> EnumClass);
    UClass* IGLE_StringToClass(FString String);
    void IGLE_SortStringArrayBySimilarity(FString base, const TArray<FString>& InputArray, TArray<FStringFloatPair>& OutputArray, bool IgnoreCase);
    FQuat IGLE_Slerp(const FQuat& A, const FQuat& B, float Alpha);
    void IGLE_SetRenderViewport(bool ShouldRender);
    void IGLE_SetCullingEnabledForActor(class AActor* Actor, bool EnableCulling);
    TArray<uint8> IGLE_SerializeObject(class UObject* Object);
    bool IGLE_ReadBytesFromFile(FString AbsolutePath, TArray<uint8>& Bytes);
    int64 IGLE_RandomInt64();
    void IGLE_ProjectWorldToScreen(const FVector& WorldPos, const FBox2D& Viewport, const FMatrix& ViewMatrix, const FMatrix& ProjectionMatrix, FVector2D& ResultingScreenPos);
    TEnumAsByte<ECollisionChannel> IGLE_ObjectTypeQueryToCollisionChannel(TEnumAsByte<EObjectTypeQuery> ObjectTypeQuery);
    FRotator IGLE_MultiplyRotator(const FRotator& A, const FRotator& B);
    FMatrix IGLE_MakeCustomProjectionMatrix(const FVector2D& ViewportSize, float FOV, float NearPlane, float FarPlane, bool InverseZMatrix, bool NoFarPlane);
    bool IGLE_MakeActorReference(class AActor* Actor, FIGLEActorReference& Reference);
    class AActor* IGLE_LoadPlacableSave(class UObject* WorldContextObject, const FIGLEPlacableSave& SaveToLoad);
    TArray<uint8> IGLE_LevelSaveToBytes(const FIGLELevelSave& LevelSave);
    bool IGLE_IsObjectTransactionalAndTransient(const class UObject* Target);
    TArray<FString> IGLE_GetFilesWithExtension(FString AbsolutePath, FString Extension);
    FBox2D IGLE_GetConstrainedViewRectangle(class APlayerController* PlayerController);
    TArray<FString> IGLE_GetAllSubdirectories(FString AbsolutePath);
    class AActor* IGLE_GetActorReference(class UObject* WorldContextObject, FIGLEActorReference Reference);
    void IGLE_DeserializeObject(class UObject* Object, const TArray<uint8>& Bytes);
    void IGLE_DeprojectScreenToWorld(const FVector2D& RelativeViewportPos, const FBox2D& Viewport, const FMatrix& ViewMatrix, const FMatrix& ProjectionMatrix, FVector& WorldPosition, FVector& WorldDirection);
    FRotator IGLE_DeltaRotator(const FRotator& A, const FRotator& B);
    void IGLE_DeleteFile(FString AbsolutePath);
    void IGLE_DeleteDir(FString AbsolutePath);
    bool IGLE_CreatePlacableSave(class AActor* PlacableActorTarget, FIGLEPlacableSave& OutSave);
    void IGLE_CreateDir(FString AbsolutePath);
    FString IGLE_ClassToString(UClass* Class);
    void IGLE_CallUndoForActionBufferObject(class UIGLE_ActionBufferObject* ActionBufferObject);
    void IGLE_CallRedoForActionBufferObject(class UIGLE_ActionBufferObject* ActionBufferObject);
    void IGLE_CallInitializeForActionBufferObject(class UIGLE_ActionBufferObject* ActionBufferObject);
    FTransform IGLE_BytesToTransform(const TArray<uint8>& Bytes);
    FIGLELevelSave IGLE_BytesToLevelSave(const TArray<uint8>& LevelSaveBytes);
}; // Size: 0x28

class UIGLE_InterfaceComponent : public UActorComponent
{
    FString PlacableName;                                                             // 0x00A0 (size: 0x10)
    FString PlacableDescription;                                                      // 0x00B0 (size: 0x10)
    FString PlacableCategory;                                                         // 0x00C0 (size: 0x10)
    TSoftObjectPtr<UTexture2D> PlacableIcon;                                          // 0x00D0 (size: 0x28)
    TArray<FIGLEProperty> Properties;                                                 // 0x00F8 (size: 0x10)
    FIGLE_InterfaceComponentOnPropertyValueChanged OnPropertyValueChanged;            // 0x0108 (size: 0x10)
    void IGLE_OnPropertyValueChanged(FString PropertyName);
    bool CallOnPropertyChangedOnLoad;                                                 // 0x0118 (size: 0x1)
    int64 ActorID;                                                                    // 0x0120 (size: 0x8)
    FString RuntimePlacableName;                                                      // 0x0128 (size: 0x10)

    void SetRuntimeName(FString NewRuntimeName);
    void OnOwnerDestroyed(class AActor* Owner);
    bool GetPropertyValueByName(FString PropertyName, class UIGLE_PropertyValueObject*& Value);
    bool GetPropertyByValueObject(class UIGLE_PropertyValueObject* PropertyValueObject, FIGLEProperty& Property);
    bool GetPropertyByName(FString PropertyName, FIGLEProperty& Property);
    void CallOnPropertyValueChanged(FString PropertyName);
}; // Size: 0x138

class UIGLE_PropertyValueObject : public UObject
{
}; // Size: 0x28

class UIGLE_RuntimeSubsystem : public UGameInstanceSubsystem
{
    TSet<FIGLEPlacableActorInfo> PlacableActorInfoSet;                                // 0x0030 (size: 0x50)
    bool IsInLevelEditorMode;                                                         // 0x0080 (size: 0x1)
    FIGLE_RuntimeSubsystemOnPlacablePlacedInEditor OnPlacablePlacedInEditor;          // 0x0088 (size: 0x10)
    void OnPlacableUpdated(class AActor* PlacableActor);
    FIGLE_RuntimeSubsystemOnPlacableDeletedInEditor OnPlacableDeletedInEditor;        // 0x0098 (size: 0x10)
    void OnPlacableUpdated(class AActor* PlacableActor);

    void RegisterPlacableActorInfoFromDataTable(class UDataTable* DataTable);
    void RegisterPlacableActorInfoFromClasses(const TArray<FString>& ContentPaths, TArray<class AActor*>& TransientActors, bool DeferDestruction);
    void RegisterPlacableActorInfo(const FIGLEPlacableActorInfo& Info);
}; // Size: 0xA8

#endif
