#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangeBaseLightNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeBaseLightNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeBaseLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomUseTemperature(bool AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTemperature(float AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomLightColor(const FLinearColor& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensity(float AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomUseTemperature(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTemperature(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomLightColor(FLinearColor& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIntensity(float& AttributeValue) const;
    
};

