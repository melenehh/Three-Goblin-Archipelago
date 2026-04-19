#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialXShaders.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMaterialXShaders : uint8 {
    StandardSurface,
    StandardSurfaceTransmission,
    SurfaceUnlit,
    UsdPreviewSurface,
    MaxShaderCount,
};

