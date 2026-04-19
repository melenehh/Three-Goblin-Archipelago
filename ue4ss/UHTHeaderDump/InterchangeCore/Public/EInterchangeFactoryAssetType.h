#pragma once
#include "CoreMinimal.h"
#include "EInterchangeFactoryAssetType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeFactoryAssetType : uint8 {
    None,
    Textures,
    Materials,
    Meshes,
    Animations,
    Physics,
};

