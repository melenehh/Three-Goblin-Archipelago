#include "IGLE_FL.h"

UIGLE_FL::UIGLE_FL() {
}

void UIGLE_FL::IGLE_WriteBytesToFile(const FString& AbsolutePath, const TArray<uint8>& Bytes) {
}

TArray<uint8> UIGLE_FL::IGLE_TransformToBytes(const FTransform& Transform) {
    return TArray<uint8>();
}

TEnumAsByte<ECollisionChannel> UIGLE_FL::IGLE_TraceTypeQueryToCollisionChannel(TEnumAsByte<ETraceTypeQuery> TraceTypeQuery) {
    return ECC_WorldStatic;
}

bool UIGLE_FL::IGLE_TraceConvex(UObject* WorldContextObject, const TArray<FVector>& Verticies, const FTransform& ShapeTransfom, TEnumAsByte<ETraceTypeQuery> TraceChannel, const FVector& Start, const FVector& End, const TArray<AActor*> ActorsToIgnore, TArray<FHitResult>& OutHits) {
    return false;
}

bool UIGLE_FL::IGLE_SweepActorWithWorld(AActor* Target, TEnumAsByte<ETraceTypeQuery> TraceChannel, const FVector& Start, const FVector& End, TArray<FHitResult>& OutHits, UPrimitiveComponent* OverrideComponent) {
    return false;
}

uint8 UIGLE_FL::IGLE_StringToEnum(const FString& String, TSoftObjectPtr<UUserDefinedEnum> EnumClass) {
    return 0;
}

UClass* UIGLE_FL::IGLE_StringToClass(const FString& String) {
    return NULL;
}

void UIGLE_FL::IGLE_SortStringArrayBySimilarity(const FString& base, const TArray<FString>& InputArray, TArray<FStringFloatPair>& OutputArray, bool IgnoreCase) {
}

FQuat UIGLE_FL::IGLE_Slerp(const FQuat& A, const FQuat& B, float Alpha) {
    return FQuat{};
}

void UIGLE_FL::IGLE_SetRenderViewport(bool ShouldRender) {
}

void UIGLE_FL::IGLE_SetCullingEnabledForActor(AActor* Actor, bool EnableCulling) {
}

TArray<uint8> UIGLE_FL::IGLE_SerializeObject(UObject* Object) {
    return TArray<uint8>();
}

bool UIGLE_FL::IGLE_ReadBytesFromFile(const FString& AbsolutePath, TArray<uint8>& Bytes) {
    return false;
}

int64 UIGLE_FL::IGLE_RandomInt64() {
    return 0;
}

void UIGLE_FL::IGLE_ProjectWorldToScreen(const FVector& WorldPos, const FBox2D& Viewport, const FMatrix& ViewMatrix, const FMatrix& ProjectionMatrix, FVector2D& ResultingScreenPos) {
}

TEnumAsByte<ECollisionChannel> UIGLE_FL::IGLE_ObjectTypeQueryToCollisionChannel(TEnumAsByte<EObjectTypeQuery> ObjectTypeQuery) {
    return ECC_WorldStatic;
}

FRotator UIGLE_FL::IGLE_MultiplyRotator(const FRotator& A, const FRotator& B) {
    return FRotator{};
}

FMatrix UIGLE_FL::IGLE_MakeCustomProjectionMatrix(const FVector2D& ViewportSize, float FOV, float NearPlane, float FarPlane, bool InverseZMatrix, bool NoFarPlane) {
    return FMatrix{};
}

bool UIGLE_FL::IGLE_MakeActorReference(AActor* Actor, FIGLEActorReference& Reference) {
    return false;
}

AActor* UIGLE_FL::IGLE_LoadPlacableSave(UObject* WorldContextObject, const FIGLEPlacableSave& SaveToLoad) {
    return NULL;
}

TArray<uint8> UIGLE_FL::IGLE_LevelSaveToBytes(const FIGLELevelSave& LevelSave) {
    return TArray<uint8>();
}

bool UIGLE_FL::IGLE_IsObjectTransactionalAndTransient(const UObject* Target) {
    return false;
}

TArray<FString> UIGLE_FL::IGLE_GetFilesWithExtension(const FString& AbsolutePath, const FString& Extension) {
    return TArray<FString>();
}

FBox2D UIGLE_FL::IGLE_GetConstrainedViewRectangle(APlayerController* PlayerController) {
    return FBox2D{};
}

TArray<FString> UIGLE_FL::IGLE_GetAllSubdirectories(const FString& AbsolutePath) {
    return TArray<FString>();
}

AActor* UIGLE_FL::IGLE_GetActorReference(UObject* WorldContextObject, FIGLEActorReference Reference) {
    return NULL;
}

void UIGLE_FL::IGLE_DeserializeObject(UObject* Object, const TArray<uint8>& Bytes) {
}

void UIGLE_FL::IGLE_DeprojectScreenToWorld(const FVector2D& RelativeViewportPos, const FBox2D& Viewport, const FMatrix& ViewMatrix, const FMatrix& ProjectionMatrix, FVector& WorldPosition, FVector& WorldDirection) {
}

FRotator UIGLE_FL::IGLE_DeltaRotator(const FRotator& A, const FRotator& B) {
    return FRotator{};
}

void UIGLE_FL::IGLE_DeleteFile(const FString& AbsolutePath) {
}

void UIGLE_FL::IGLE_DeleteDir(const FString& AbsolutePath) {
}

bool UIGLE_FL::IGLE_CreatePlacableSave(AActor* PlacableActorTarget, FIGLEPlacableSave& OutSave) {
    return false;
}

void UIGLE_FL::IGLE_CreateDir(const FString& AbsolutePath) {
}

FString UIGLE_FL::IGLE_ClassToString(UClass* Class) {
    return TEXT("");
}

void UIGLE_FL::IGLE_CallUndoForActionBufferObject(UIGLE_ActionBufferObject* ActionBufferObject) {
}

void UIGLE_FL::IGLE_CallRedoForActionBufferObject(UIGLE_ActionBufferObject* ActionBufferObject) {
}

void UIGLE_FL::IGLE_CallInitializeForActionBufferObject(UIGLE_ActionBufferObject* ActionBufferObject) {
}

FTransform UIGLE_FL::IGLE_BytesToTransform(const TArray<uint8>& Bytes) {
    return FTransform{};
}

FIGLELevelSave UIGLE_FL::IGLE_BytesToLevelSave(const TArray<uint8>& LevelSaveBytes) {
    return FIGLELevelSave{};
}


