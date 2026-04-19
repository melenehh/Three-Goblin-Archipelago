#pragma once
#include "CoreMinimal.h"
#include "InputDevicePropertyHandle.generated.h"

USTRUCT(BlueprintType)
struct FInputDevicePropertyHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InternalId;
    
public:
    ENGINE_API FInputDevicePropertyHandle();
};

