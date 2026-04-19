#pragma once
#include "CoreMinimal.h"
#include "InterchangeLightFactoryNode.h"
#include "InterchangeRectLightFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeRectLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSourceHeight(float& AttributeValue) const;
    
};

