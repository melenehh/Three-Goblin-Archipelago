#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "InterchangePhysicalCameraNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangePhysicalCameraNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangePhysicalCameraNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorWidth(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorHeight(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFocalLength(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomEnableDepthOfField(const bool& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSensorWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSensorHeight(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFocalLength(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomEnableDepthOfField(bool& AttributeValue) const;
    
};

