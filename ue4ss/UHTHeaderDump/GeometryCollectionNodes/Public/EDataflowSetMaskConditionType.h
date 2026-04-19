#pragma once
#include "CoreMinimal.h"
#include "EDataflowSetMaskConditionType.generated.h"

UENUM(BlueprintType)
enum class EDataflowSetMaskConditionType : uint8 {
    Dataflow_SetMaskConditionType_Always,
    Dataflow_SetMaskConditionType_IFF_NOT_Interior,
    Dataflow_SetMaskConditionType_IFF_NOT_Exterior,
};

