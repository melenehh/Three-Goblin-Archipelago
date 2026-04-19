#pragma once
#include "CoreMinimal.h"
#include "EChunkSeekTableMode.generated.h"

UENUM(BlueprintType)
enum class EChunkSeekTableMode : uint8 {
    ConstantSamplesPerEntry,
    VariableSamplesPerEntry,
};

