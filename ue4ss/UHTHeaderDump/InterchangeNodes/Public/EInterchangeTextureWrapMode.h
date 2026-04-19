#pragma once
#include "CoreMinimal.h"
#include "EInterchangeTextureWrapMode.generated.h"

UENUM(BlueprintType)
enum class EInterchangeTextureWrapMode : uint8 {
    Wrap,
    Clamp,
    Mirror,
};

