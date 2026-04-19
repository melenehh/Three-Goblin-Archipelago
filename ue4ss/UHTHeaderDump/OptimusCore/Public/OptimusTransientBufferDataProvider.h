#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataProvider.h"
#include "OptimusTransientBufferDataProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class OPTIMUSCORE_API UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider {
    GENERATED_BODY()
public:
    UOptimusTransientBufferDataProvider();

};

