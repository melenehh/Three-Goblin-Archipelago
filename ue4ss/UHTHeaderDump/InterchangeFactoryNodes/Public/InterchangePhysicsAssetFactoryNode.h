#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangePhysicsAssetFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangePhysicsAssetFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletalMeshUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializePhysicsAssetNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSkeletalMeshUid(FString& AttributeValue) const;
    
};

