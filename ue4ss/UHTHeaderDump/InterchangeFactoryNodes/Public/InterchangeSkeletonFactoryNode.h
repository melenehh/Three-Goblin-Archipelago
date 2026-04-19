#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeSkeletonFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeSkeletonFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseTimeZeroForBindPose(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSkeletalMeshFactoryNodeUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomRootJointUid(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    void InitializeSkeletonNode(const FString& UniqueID, const FString& DisplayLabel, const FString& InAssetClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetObjectClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomRootJointUid(FString& AttributeValue) const;
    
};

