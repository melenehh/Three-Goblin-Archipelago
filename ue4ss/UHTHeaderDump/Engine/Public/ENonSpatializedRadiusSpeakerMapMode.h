#pragma once
#include "CoreMinimal.h"
#include "ENonSpatializedRadiusSpeakerMapMode.generated.h"

UENUM(BlueprintType)
enum class ENonSpatializedRadiusSpeakerMapMode : uint8 {
    OmniDirectional,
    Direct2D,
    Surround2D,
};

