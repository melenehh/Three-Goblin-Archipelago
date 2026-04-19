#pragma once
#include "CoreMinimal.h"
#include "ERotationOrderEnum.generated.h"

UENUM(BlueprintType)
enum class ERotationOrderEnum : uint8 {
    Dataflow_RotationOrder_XYZ,
    Dataflow_RotationOrder_YZX,
    Dataflow_RotationOrder_ZXY,
    Dataflow_RotationOrder_XZY,
    Dataflow_RotationOrder_YXZ,
    Dataflow_RotationOrder_ZYX,
};

