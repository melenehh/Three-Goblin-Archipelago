#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "EInterchangeTextureFilterMode.h"
#include "InterchangeTextureNode.generated.h"

UCLASS(Abstract, Blueprintable)
class INTERCHANGENODES_API UInterchangeTextureNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeTextureNode();

    UFUNCTION(BlueprintCallable)
    void SetPayLoadKey(const FString& PayloadKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSRGB(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFilter(const EInterchangeTextureFilterMode& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustombFlipGreenChannel(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSRGB(bool& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustombFlipGreenChannel(bool& AttributeValue) const;
    
};

