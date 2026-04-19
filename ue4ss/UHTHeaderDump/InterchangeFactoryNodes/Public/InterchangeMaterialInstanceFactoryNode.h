#pragma once
#include "CoreMinimal.h"
#include "InterchangeBaseMaterialFactoryNode.h"
#include "InterchangeMaterialInstanceFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeMaterialInstanceFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomParent(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInstanceClassName(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomParent(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomInstanceClassName(FString& AttributeValue) const;
    
};

