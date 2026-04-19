#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeviceProfileFragment.generated.h"

UCLASS(Blueprintable, MinimalAPI, PerObjectConfig, Config=DeviceProfiles)
class UDeviceProfileFragment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CVars;
    
    UDeviceProfileFragment();

};

