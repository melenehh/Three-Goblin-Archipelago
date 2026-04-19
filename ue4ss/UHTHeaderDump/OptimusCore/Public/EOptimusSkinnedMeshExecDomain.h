#pragma once
#include "CoreMinimal.h"
#include "EOptimusSkinnedMeshExecDomain.generated.h"

UENUM(BlueprintType)
enum class EOptimusSkinnedMeshExecDomain : uint8 {
    None,
    Vertex,
    Triangle,
};

