#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeStaticMeshLodDataNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeStaticMeshLodDataNode();

    UFUNCTION(BlueprintCallable)
    bool SetOneConvexHullPerUCX(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetImportCollision(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveSphereCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConvexCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCapsuleCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBoxCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllSphereCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllConvexCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllCapsuleCollisionMeshes();
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllBoxCollisionMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSphereCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOneConvexHullPerUCX(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetImportCollision(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetConvexCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapsuleCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoxCollisionMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddSphereCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddConvexCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddCapsuleCollisionMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool AddBoxCollisionMeshUid(const FString& MeshName);
    
};

