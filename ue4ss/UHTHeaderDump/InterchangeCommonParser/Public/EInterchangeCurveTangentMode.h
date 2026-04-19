#pragma once
#include "CoreMinimal.h"
#include "EInterchangeCurveTangentMode.generated.h"

UENUM(BlueprintType)
enum class EInterchangeCurveTangentMode : uint8 {
    Auto,
    User,
    Break,
    None,
};

