#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataProvider.h"
#include "OptimusPersistentBufferDataProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OPTIMUSCORE_API UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider {
    GENERATED_BODY()
public:
    UOptimusPersistentBufferDataProvider();

};

