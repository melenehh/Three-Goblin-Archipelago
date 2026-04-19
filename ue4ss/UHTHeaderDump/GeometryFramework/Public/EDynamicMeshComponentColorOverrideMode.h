#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshComponentColorOverrideMode.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshComponentColorOverrideMode : uint8 {
    None,
    VertexColors,
    Polygroups,
    Constant,
};

