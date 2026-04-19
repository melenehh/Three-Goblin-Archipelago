#pragma once
#include "CoreMinimal.h"
#include "ERangeSettingEnum.generated.h"

UENUM(BlueprintType)
enum class ERangeSettingEnum : uint8 {
    Dataflow_RangeSetting_InsideRange,
    Dataflow_RangeSetting_OutsideRange,
};

