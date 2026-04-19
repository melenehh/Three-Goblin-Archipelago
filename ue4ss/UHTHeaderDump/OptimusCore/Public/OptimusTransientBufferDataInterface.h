#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataInterface.h"
#include "OptimusTransientBufferDataInterface.generated.h"

UCLASS(Blueprintable)
class OPTIMUSCORE_API UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface {
    GENERATED_BODY()
public:
    UOptimusTransientBufferDataInterface();

};

