#pragma once
#include "CoreMinimal.h"
#include "EOptimusGroomExecDomain.generated.h"

UENUM(BlueprintType)
enum class EOptimusGroomExecDomain : uint8 {
    None,
    ControlPoint,
    Curve,
};

