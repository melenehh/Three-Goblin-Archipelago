#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightUnits -FallbackName=ELightUnits
#include "InterchangeBaseLightFactoryNode.h"
#include "InterchangeLightFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeLightFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIESTexture(const FString& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIntensityUnits(ELightUnits& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIESTexture(FString& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAttenuationRadius(float& AttributeValue) const;
    
};

