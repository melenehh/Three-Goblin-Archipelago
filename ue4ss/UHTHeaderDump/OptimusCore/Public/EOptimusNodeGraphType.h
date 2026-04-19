#pragma once
#include "CoreMinimal.h"
#include "EOptimusNodeGraphType.generated.h"

UENUM()
enum class EOptimusNodeGraphType : int32 {
    Setup,
    Update,
    ExternalTrigger,
    Function,
    SubGraph,
    Transient,
};

