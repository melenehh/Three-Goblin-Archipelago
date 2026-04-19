#pragma once
#include "CoreMinimal.h"
#include "EInterchangeTextureFilterMode.generated.h"

UENUM(BlueprintType)
enum class EInterchangeTextureFilterMode : uint8 {
    Nearest,
    Bilinear,
    Trilinear,
    Default,
};

