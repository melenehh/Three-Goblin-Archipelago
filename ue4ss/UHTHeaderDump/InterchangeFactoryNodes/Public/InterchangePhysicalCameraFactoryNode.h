#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=ECameraFocusMethod -FallbackName=ECameraFocusMethod
#include "InterchangeActorFactoryNode.h"
#include "InterchangePhysicalCameraFactoryNode.generated.h"

UCLASS(Blueprintable)
class INTERCHANGEFACTORYNODES_API UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode {
    GENERATED_BODY()
public:
    UInterchangePhysicalCameraFactoryNode();

    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorWidth(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomSensorHeight(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFocusMethod(const ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable)
    bool SetCustomFocalLength(const float& AttributeValue, bool bAddApplyDelegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSensorWidth(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomSensorHeight(float& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCustomFocalLength(float& AttributeValue) const;
    
};

