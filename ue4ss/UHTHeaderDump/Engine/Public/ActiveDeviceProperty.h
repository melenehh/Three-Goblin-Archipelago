#pragma once
#include "CoreMinimal.h"
#include "ActiveDeviceProperty.generated.h"

class UInputDeviceProperty;

USTRUCT(BlueprintType)
struct FActiveDeviceProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInputDeviceProperty> Property;
    
    ENGINE_API FActiveDeviceProperty();
};

