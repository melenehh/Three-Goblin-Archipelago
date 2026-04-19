#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightNode.h"
#include "InterchangeRectLightNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeRectLightNode : public UInterchangeLightNode {
    GENERATED_BODY()
public:
    UInterchangeRectLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceWidth(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceHeight(float AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceHeight(float& AttributeValue) const;
    
};

