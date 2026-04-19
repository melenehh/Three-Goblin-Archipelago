#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box2D -FallbackName=Box2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Matrix -FallbackName=Matrix
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EObjectTypeQuery -FallbackName=EObjectTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "IGLEActorReference.h"
#include "IGLELevelSave.h"
#include "IGLEPlacableSave.h"
#include "StringFloatPair.h"
#include "IGLE_FL.generated.h"

class AActor;
class APlayerController;
class UIGLE_ActionBufferObject;
class UObject;
class UPrimitiveComponent;
class UUserDefinedEnum;

UCLASS(Blueprintable)
class INGAMELEVELEDITOR_API UIGLE_FL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGLE_FL();

    UFUNCTION(BlueprintCallable)
    static void IGLE_WriteBytesToFile(const FString& AbsolutePath, const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<uint8> IGLE_TransformToBytes(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> IGLE_TraceTypeQueryToCollisionChannel(TEnumAsByte<ETraceTypeQuery> TraceTypeQuery);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IGLE_TraceConvex(UObject* WorldContextObject, const TArray<FVector>& Verticies, const FTransform& ShapeTransfom, TEnumAsByte<ETraceTypeQuery> TraceChannel, const FVector& Start, const FVector& End, const TArray<AActor*> ActorsToIgnore, TArray<FHitResult>& OutHits);
    
    UFUNCTION(BlueprintCallable)
    static bool IGLE_SweepActorWithWorld(AActor* Target, TEnumAsByte<ETraceTypeQuery> TraceChannel, const FVector& Start, const FVector& End, TArray<FHitResult>& OutHits, UPrimitiveComponent* OverrideComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static uint8 IGLE_StringToEnum(const FString& String, TSoftObjectPtr<UUserDefinedEnum> EnumClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UClass* IGLE_StringToClass(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void IGLE_SortStringArrayBySimilarity(const FString& base, const TArray<FString>& InputArray, TArray<FStringFloatPair>& OutputArray, bool IgnoreCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat IGLE_Slerp(const FQuat& A, const FQuat& B, float Alpha);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_SetRenderViewport(bool ShouldRender);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_SetCullingEnabledForActor(AActor* Actor, bool EnableCulling);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> IGLE_SerializeObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    static bool IGLE_ReadBytesFromFile(const FString& AbsolutePath, TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintPure)
    static int64 IGLE_RandomInt64();
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_ProjectWorldToScreen(const FVector& WorldPos, const FBox2D& Viewport, const FMatrix& ViewMatrix, const FMatrix& ProjectionMatrix, FVector2D& ResultingScreenPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TEnumAsByte<ECollisionChannel> IGLE_ObjectTypeQueryToCollisionChannel(TEnumAsByte<EObjectTypeQuery> ObjectTypeQuery);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator IGLE_MultiplyRotator(const FRotator& A, const FRotator& B);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix IGLE_MakeCustomProjectionMatrix(const FVector2D& ViewportSize, float FOV, float NearPlane, float FarPlane, bool InverseZMatrix, bool NoFarPlane);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IGLE_MakeActorReference(AActor* Actor, FIGLEActorReference& Reference);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AActor* IGLE_LoadPlacableSave(UObject* WorldContextObject, const FIGLEPlacableSave& SaveToLoad);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> IGLE_LevelSaveToBytes(const FIGLELevelSave& LevelSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IGLE_IsObjectTransactionalAndTransient(const UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> IGLE_GetFilesWithExtension(const FString& AbsolutePath, const FString& Extension);
    
    UFUNCTION(BlueprintCallable)
    static FBox2D IGLE_GetConstrainedViewRectangle(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> IGLE_GetAllSubdirectories(const FString& AbsolutePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* IGLE_GetActorReference(UObject* WorldContextObject, FIGLEActorReference Reference);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_DeserializeObject(UObject* Object, const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_DeprojectScreenToWorld(const FVector2D& RelativeViewportPos, const FBox2D& Viewport, const FMatrix& ViewMatrix, const FMatrix& ProjectionMatrix, FVector& WorldPosition, FVector& WorldDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator IGLE_DeltaRotator(const FRotator& A, const FRotator& B);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_DeleteFile(const FString& AbsolutePath);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_DeleteDir(const FString& AbsolutePath);
    
    UFUNCTION(BlueprintCallable)
    static bool IGLE_CreatePlacableSave(AActor* PlacableActorTarget, FIGLEPlacableSave& OutSave);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_CreateDir(const FString& AbsolutePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString IGLE_ClassToString(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_CallUndoForActionBufferObject(UIGLE_ActionBufferObject* ActionBufferObject);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_CallRedoForActionBufferObject(UIGLE_ActionBufferObject* ActionBufferObject);
    
    UFUNCTION(BlueprintCallable)
    static void IGLE_CallInitializeForActionBufferObject(UIGLE_ActionBufferObject* ActionBufferObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform IGLE_BytesToTransform(const TArray<uint8>& Bytes);
    
    UFUNCTION(BlueprintCallable)
    static FIGLELevelSave IGLE_BytesToLevelSave(const TArray<uint8>& LevelSaveBytes);
    
};

