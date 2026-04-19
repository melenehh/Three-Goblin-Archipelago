#pragma once
#include "CoreMinimal.h"
#include "EHardwareDevicePrimaryType.h"
#include "HardwareDeviceIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FHardwareDeviceIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HardwareDeviceIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHardwareDevicePrimaryType PrimaryDeviceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SupportedFeaturesMask;
    
    ENGINE_API FHardwareDeviceIdentifier();
};

