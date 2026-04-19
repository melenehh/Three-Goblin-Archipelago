#pragma once
#include "CoreMinimal.h"
#include "EOptimusBufferWriteType.generated.h"

UENUM(BlueprintType)
enum class EOptimusBufferWriteType : uint8 {
    Write,
    WriteAtomicAdd,
    WriteAtomicMin,
    WriteAtomicMax,
    Count,
};

