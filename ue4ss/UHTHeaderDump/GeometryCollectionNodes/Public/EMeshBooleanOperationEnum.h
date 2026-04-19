#pragma once
#include "CoreMinimal.h"
#include "EMeshBooleanOperationEnum.generated.h"

UENUM(BlueprintType)
enum class EMeshBooleanOperationEnum : uint8 {
    Dataflow_MeshBoolean_Union,
    Dataflow_MeshBoolean_Intersect,
    Dataflow_MeshBoolean_Difference,
};

