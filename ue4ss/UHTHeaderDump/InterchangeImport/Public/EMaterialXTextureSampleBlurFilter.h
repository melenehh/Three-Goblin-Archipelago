#pragma once
#include "CoreMinimal.h"
#include "EMaterialXTextureSampleBlurFilter.generated.h"

UENUM(BlueprintType)
enum class EMaterialXTextureSampleBlurFilter : uint8 {
    Box,
    Gaussian,
};

