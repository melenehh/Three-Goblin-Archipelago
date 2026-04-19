#pragma once
#include "CoreMinimal.h"
#include "AIDataProviderValue.h"
#include "AIDataProviderStructValue.generated.h"

USTRUCT(BlueprintType)
struct FAIDataProviderStructValue : public FAIDataProviderValue {
    GENERATED_BODY()
public:
    AIMODULE_API FAIDataProviderStructValue();
};

