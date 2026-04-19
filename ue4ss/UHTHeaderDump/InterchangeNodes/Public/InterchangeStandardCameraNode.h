#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeBaseNode -FallbackName=InterchangeBaseNode
#include "EInterchangeCameraProjectionType.h"
#include "InterchangeStandardCameraNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGENODES_API UInterchangeStandardCameraNode : public UInterchangeBaseNode {
    GENERATED_BODY()
public:
    UInterchangeStandardCameraNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomWidth(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomProjectionMode(const EInterchangeCameraProjectionType& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomNearClipPlane(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFieldOfView(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFarClipPlane(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAspectRatio(const float& AttributeValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomNearClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFieldOfView(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFarClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAspectRatio(float& AttributeValue) const;
    
};

