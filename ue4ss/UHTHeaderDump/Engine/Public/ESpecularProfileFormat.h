#pragma once
#include "CoreMinimal.h"
#include "ESpecularProfileFormat.generated.h"

UENUM(BlueprintType)
enum class ESpecularProfileFormat : uint8 {
    ViewLightVector,
    HalfVector,
};

