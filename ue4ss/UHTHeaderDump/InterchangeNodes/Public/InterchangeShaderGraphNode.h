#pragma once
#include "CoreMinimal.h"
#include "InterchangeShaderNode.h"
#include "InterchangeShaderGraphNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeShaderGraphNode : public UInterchangeShaderNode {
    GENERATED_BODY()
public:
    UInterchangeShaderGraphNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomTwoSidedTransmission(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomTwoSided(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomScreenSpaceReflections(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomOpacityMaskClipValue(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomIsAShaderFunction(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTwoSidedTransmission(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomTwoSided(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomScreenSpaceReflections(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomOpacityMaskClipValue(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomIsAShaderFunction(bool& AttributeValue) const;
    
};

