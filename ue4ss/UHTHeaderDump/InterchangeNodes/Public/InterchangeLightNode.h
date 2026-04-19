#pragma once
#include "CoreMinimal.h"
#include "EInterchangeLightUnits.h"
#include "InterchangeBaseLightNode.h"
#include "InterchangeLightNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeLightNode : public UInterchangeBaseLightNode {
    GENERATED_BODY()
public:
    UInterchangeLightNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensityUnits(const EInterchangeLightUnits& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESTexture(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttenuationRadius(float AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIESTexture(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttenuationRadius(float& AttributeValue) const;
    
};

