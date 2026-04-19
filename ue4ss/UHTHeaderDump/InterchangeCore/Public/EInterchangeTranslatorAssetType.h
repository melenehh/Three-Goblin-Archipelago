#pragma once
#include "CoreMinimal.h"
#include "EInterchangeTranslatorAssetType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeTranslatorAssetType : uint8 {
    None,
    Textures,
    Materials,
    Meshes = 4,
    Animations = 8,
};

