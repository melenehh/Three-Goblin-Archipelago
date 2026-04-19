#pragma once
#include "CoreMinimal.h"
#include "EBlendSpacePerBoneBlendMode.generated.h"

UENUM(BlueprintType)
enum class EBlendSpacePerBoneBlendMode : uint8 {
    ManualPerBoneOverride,
    BlendProfile,
};

