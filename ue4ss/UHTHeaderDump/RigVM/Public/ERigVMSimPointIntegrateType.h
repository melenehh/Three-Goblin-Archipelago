#pragma once
#include "CoreMinimal.h"
#include "ERigVMSimPointIntegrateType.generated.h"

UENUM(BlueprintType)
enum class ERigVMSimPointIntegrateType : uint8 {
    Verlet,
    SemiExplicitEuler,
};

