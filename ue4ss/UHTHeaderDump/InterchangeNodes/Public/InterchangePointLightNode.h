#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightNode.h"
#include "InterchangePointLightNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangePointLightNode : public UInterchangeLightNode {
    GENERATED_BODY()
public:
    UInterchangePointLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLightFalloffExponent(float AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomLightFalloffExponent(float& AttributeValue) const;
    
};

