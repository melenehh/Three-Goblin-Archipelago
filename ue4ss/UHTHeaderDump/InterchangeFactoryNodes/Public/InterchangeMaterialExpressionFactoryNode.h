#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeFactoryBaseNode -FallbackName=InterchangeFactoryBaseNode
#include "InterchangeMaterialExpressionFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialExpressionFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomExpressionClassName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomExpressionClassName(FString& AttributeValue) const;
    
};

