#pragma once
#include "CoreMinimal.h"
#include "EOptimusDeformerStatus.generated.h"

UENUM()
enum class EOptimusDeformerStatus : int32 {
    Compiled,
    CompiledWithWarnings,
    Modified,
    HasErrors,
};

