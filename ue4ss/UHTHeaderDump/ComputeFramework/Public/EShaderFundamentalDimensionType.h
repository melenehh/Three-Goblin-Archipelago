#pragma once
#include "CoreMinimal.h"
#include "EShaderFundamentalDimensionType.generated.h"

UENUM(BlueprintType)
enum class EShaderFundamentalDimensionType : uint8 {
    Scalar,
    Vector,
    Matrix,
};

