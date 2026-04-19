#pragma once
#include "CoreMinimal.h"
#include "InterchangePointLightFactoryNode.h"
#include "InterchangeSpotLightFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeSpotLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomOuterConeAngle(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomInnerConeAngle(float& AttributeValue) const;
    
};

