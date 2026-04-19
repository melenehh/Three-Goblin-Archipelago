#pragma once
#include "CoreMinimal.h"
#include "InterchangePointLightNode.h"
#include "InterchangeSpotLightNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeSpotLightNode : public UInterchangePointLightNode {
    GENERATED_BODY()
public:
    UInterchangeSpotLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomOuterConeAngle(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInnerConeAngle(float AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomOuterConeAngle(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomInnerConeAngle(float& AttributeValue) const;
    
};

