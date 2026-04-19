#pragma once
#include "CoreMinimal.h"
#include "EOptimusDiagnosticLevel.generated.h"

UENUM(BlueprintType)
enum class EOptimusDiagnosticLevel : uint8 {
    None,
    Info,
    Warning,
    Error,
};

