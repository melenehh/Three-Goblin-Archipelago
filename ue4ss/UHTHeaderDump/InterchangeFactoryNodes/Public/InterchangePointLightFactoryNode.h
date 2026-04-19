#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightFactoryNode.h"
#include "InterchangePointLightFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangePointLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomLightFalloffExponent(float& AttributeValue) const;
    
};

