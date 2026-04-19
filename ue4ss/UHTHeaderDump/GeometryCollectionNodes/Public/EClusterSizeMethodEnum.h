#pragma once
#include "CoreMinimal.h"
#include "EClusterSizeMethodEnum.generated.h"

UENUM(BlueprintType)
enum class EClusterSizeMethodEnum : uint8 {
    Dataflow_ClusterSizeMethod_ByNumber,
    Dataflow_ClusterSizeMethod_ByFractionOfInput,
    Dataflow_ClusterSizeMethod_BySize,
    Dataflow_ClusterSizeMethod_ByGrid,
};

