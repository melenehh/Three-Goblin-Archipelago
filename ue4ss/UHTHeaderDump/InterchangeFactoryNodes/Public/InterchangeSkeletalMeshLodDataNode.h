#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeSkeletalMeshLodDataNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletalMeshLodDataNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletonUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMeshUid(const FString& MeshName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAllMeshes();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMeshUidsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMeshUids(TArray<FString>& OutMeshNames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSkeletonUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddMeshUid(const FString& MeshName);
    
};

