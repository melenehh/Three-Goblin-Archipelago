#pragma once
#include "CoreMinimal.h"
#include "ESelectSubjectTypeEnum.generated.h"

UENUM(BlueprintType)
enum class ESelectSubjectTypeEnum : uint8 {
    Dataflow_SelectSubjectType_Vertices,
    Dataflow_SelectSubjectType_BoundingBox,
    Dataflow_SelectSubjectType_Centroid,
};

