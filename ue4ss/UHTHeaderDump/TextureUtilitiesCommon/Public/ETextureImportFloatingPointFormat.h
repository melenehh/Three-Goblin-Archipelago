#pragma once
#include "CoreMinimal.h"
#include "ETextureImportFloatingPointFormat.generated.h"

UENUM(BlueprintType)
enum class ETextureImportFloatingPointFormat : uint8 {
    HDR_F16,
    HDRCompressed_BC6,
    HDR_F32_or_F16,
    PreviousDefault = HDR_F16,
};

