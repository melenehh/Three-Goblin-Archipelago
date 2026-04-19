#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "EInterchangeMeshPayLoadType.h"
#include "InterchangeMeshNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeMeshNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMeshNode();

    UFUNCTION(BlueprintCallable)
    bool SetSlotMaterialDependencyUid(const FString& SlotName, const FString& MaterialDependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkinnedMesh(const bool bIsSkinnedMesh);
    
    UFUNCTION(BlueprintCallable)
    bool SetSkeletonDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetSceneInstanceUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    void SetPayLoadKey(const FString& PayloadKey, const EInterchangeMeshPayLoadType& PayLoadType);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTargetName(const FString& MorphTargetName);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTargetDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool SetMorphTarget(const bool bIsMorphTarget);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomVertexCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomUVCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomPolygonCount(const int32& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexTangent(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexNormal(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexColor(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasVertexBinormal(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomHasSmoothGroup(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomBoundingBox(const FBox& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSlotMaterialDependencyUid(const FString& SlotName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSkeletonDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSceneInstanceUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMorphTargetDependencyUid(const FString& DependencyUid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkinnedMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMorphTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSlotMaterialDependencyUid(const FString& SlotName, FString& OutMaterialDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSlotMaterialDependencies(TMap<FString, FString>& OutMaterialDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkeletonDependency(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSkeletonDependencies(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkeletonDependeciesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSceneInstanceUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSceneInstanceUids(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSceneInstanceUid(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMorphTargetName(FString& OutMorphTargetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMorphTargetDependency(const int32 Index, FString& OutDependency) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMorphTargetDependencies(TArray<FString>& OutDependencies) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMorphTargetDependeciesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomVertexCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUVCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomPolygonCount(int32& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomHasVertexTangent(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomHasVertexNormal(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomHasVertexColor(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomHasVertexBinormal(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomHasSmoothGroup(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomBoundingBox(FBox& AttributeValue) const;
    
};

