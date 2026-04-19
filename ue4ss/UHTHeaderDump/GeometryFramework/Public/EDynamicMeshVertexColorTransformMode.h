#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshVertexColorTransformMode.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshVertexColorTransformMode : uint8 {
    NoTransform,
    LinearToSRGB,
    SRGBToLinear,
};

