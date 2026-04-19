#pragma once
#include "CoreMinimal.h"
#include "EStandardGroupNameEnum.generated.h"

UENUM(BlueprintType)
enum class EStandardGroupNameEnum : uint8 {
    Dataflow_EStandardGroupNameEnum_Transform,
    Dataflow_EStandardGroupNameEnum_Geometry,
    Dataflow_EStandardGroupNameEnum_Faces,
    Dataflow_EStandardGroupNameEnum_Vertices,
    Dataflow_EStandardGroupNameEnum_Material,
    Dataflow_EStandardGroupNameEnum_Breaking,
    Dataflow_EStandardGroupNameEnum_Custom,
};

