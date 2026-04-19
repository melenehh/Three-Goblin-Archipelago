#pragma once
#include "CoreMinimal.h"
#include "ETextureImportPNGInfill.generated.h"

UENUM(BlueprintType)
enum class ETextureImportPNGInfill : uint8 {
    Default,
    Never,
    OnlyOnBinaryTransparency,
    Always,
};

