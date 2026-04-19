#pragma once
#include "CoreMinimal.h"
#include "EShaderResourceType.generated.h"

UENUM(BlueprintType)
enum class EShaderResourceType : uint8 {
    None,
    Texture1D,
    Texture2D,
    Texture3D,
    TextureCube,
    Buffer,
    StructuredBuffer,
    ByteAddressBuffer,
};

