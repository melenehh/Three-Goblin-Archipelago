#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InputDeviceId -FallbackName=InputDeviceId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PlatformUserId -FallbackName=PlatformUserId
#include "ActivateDevicePropertyParams.h"
#include "ActiveDeviceProperty.h"
#include "EngineSubsystem.h"
#include "HardwareDeviceIdentifier.h"
#include "HardwareInputDeviceChangedDelegate.h"
#include "InputDevicePropertyHandle.h"
#include "Templates/SubclassOf.h"
#include "InputDeviceSubsystem.generated.h"

class UInputDeviceProperty;

UCLASS(Blueprintable, MinimalAPI)
class UInputDeviceSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHardwareInputDeviceChanged OnInputHardwareDeviceChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FActiveDeviceProperty> ActiveProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FInputDevicePropertyHandle> PropertiesPendingRemoval;
    
public:
    UInputDeviceSubsystem();

    UFUNCTION(BlueprintCallable)
    void RemoveDevicePropertyHandles(const TSet<FInputDevicePropertyHandle>& HandlesToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveDevicePropertyByHandle(const FInputDevicePropertyHandle HandleToRemove);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllDeviceProperties();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPropertyActive(const FInputDevicePropertyHandle Handle) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHardwareDeviceIdentifier GetMostRecentlyUsedHardwareDevice(const FPlatformUserId InUserId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHardwareDeviceIdentifier GetInputDeviceHardwareIdentifier(const FInputDeviceId InputDevice) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInputDeviceProperty* GetActiveDeviceProperty(const FInputDevicePropertyHandle Handle) const;
    
    UFUNCTION(BlueprintCallable)
    FInputDevicePropertyHandle ActivateDevicePropertyOfClass(TSubclassOf<UInputDeviceProperty> PropertyClass, const FActivateDevicePropertyParams& Params);
    
};

