#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECameraProjectionMode -FallbackName=ECameraProjectionMode
#include "InterchangeActorFactoryNode.h"
#include "InterchangeStandardCameraFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangeStandardCameraFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomWidth(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomProjectionMode(const TEnumAsByte<ECameraProjectionMode::Type>& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomNearClipPlane(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFieldOfView(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFarClipPlane(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomAspectRatio(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode::Type>& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomNearClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFieldOfView(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFarClipPlane(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomAspectRatio(float& AttributeValue) const;
    
};

