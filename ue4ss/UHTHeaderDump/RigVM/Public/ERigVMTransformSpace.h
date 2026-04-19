#pragma once
#include "CoreMinimal.h"
#include "ERigVMTransformSpace.generated.h"

UENUM(BlueprintType)
enum class ERigVMTransformSpace : uint8 {
    LocalSpace,
    GlobalSpace,
    Max,
};

