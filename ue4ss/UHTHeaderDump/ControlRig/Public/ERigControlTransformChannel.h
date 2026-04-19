#pragma once
#include "CoreMinimal.h"
#include "ERigControlTransformChannel.generated.h"

UENUM(BlueprintType)
enum class ERigControlTransformChannel : uint8 {
    TranslationX,
    TranslationY,
    TranslationZ,
    Pitch,
    Yaw,
    Roll,
    ScaleX,
    ScaleY,
    ScaleZ,
};

