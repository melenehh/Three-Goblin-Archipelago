#pragma once
#include "CoreMinimal.h"
#include "EShaderFundamentalType.generated.h"

UENUM(BlueprintType)
enum class EShaderFundamentalType : uint8 {
    Bool,
    Int,
    Uint,
    Float,
    Struct,
    None = 255,
};

