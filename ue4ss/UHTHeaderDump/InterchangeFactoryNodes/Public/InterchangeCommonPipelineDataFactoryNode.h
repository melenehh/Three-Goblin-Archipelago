#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeCommonPipelineDataFactoryNode.generated.h"

class UInterchangeBaseNodeContainer;

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeCommonPipelineDataFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomGlobalOffsetTransform(const UInterchangeBaseNodeContainer* NodeContainer, const FTransform& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetBakeMeshes(const UInterchangeBaseNodeContainer* NodeContainer, const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBakeMeshes(bool& AttributeValue) const;
    
};

