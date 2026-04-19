#pragma once
#include "CoreMinimal.h"
#include "EComputeKernelFlags.generated.h"

UENUM(BlueprintType)
enum class EComputeKernelFlags : uint8 {
    IsDefaultKernel = 1,
    IsolatedMemoryWrites,
};

