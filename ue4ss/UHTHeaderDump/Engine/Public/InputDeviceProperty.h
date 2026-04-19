#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "InputDeviceProperty.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UInputDeviceProperty : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PropertyDuration;
    
public:
    UInputDeviceProperty();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetDeviceProperty(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceID, bool bForceReset);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EvaluateDeviceProperty(const FPlatformUserId PlatformUser, const FInputDeviceId DeviceID, const float DeltaTime, const float Duration);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDeviceProperty(const FPlatformUserId UserId, const FInputDeviceId DeviceID);
    
};

