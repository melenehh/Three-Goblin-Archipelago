#pragma once
#include "CoreMinimal.h"
#include "EPathTracingBufferTextureId.generated.h"

UENUM(BlueprintType)
enum EPathTracingBufferTextureId {
    PTBT_Radiance,
    PTBT_DenoisedRadiance,
    PTBT_Albedo,
    PTBT_Normal,
    PTBT_Variance,
};

