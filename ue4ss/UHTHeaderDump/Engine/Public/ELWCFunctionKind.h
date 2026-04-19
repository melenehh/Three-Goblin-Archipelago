#pragma once
#include "CoreMinimal.h"
#include "ELWCFunctionKind.generated.h"

UENUM(BlueprintType)
enum class ELWCFunctionKind : uint8 {
    Constructor,
    Promote,
    Demote,
    Add,
    Subtract,
    Divide,
    MultiplyVectorVector,
    MultiplyVectorMatrix,
    MultiplyMatrixMatrix,
    Other,
    Max,
};

