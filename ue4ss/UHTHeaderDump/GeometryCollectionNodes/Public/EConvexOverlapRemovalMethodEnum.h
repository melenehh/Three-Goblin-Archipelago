#pragma once
#include "CoreMinimal.h"
#include "EConvexOverlapRemovalMethodEnum.generated.h"

UENUM(BlueprintType)
enum class EConvexOverlapRemovalMethodEnum : uint8 {
    Dataflow_EConvexOverlapRemovalMethod_None,
    Dataflow_EConvexOverlapRemovalMethod_All,
    Dataflow_EConvexOverlapRemovalMethod_OnlyClusters,
    Dataflow_EConvexOverlapRemovalMethod_OnlyClustersVsClusters,
};

