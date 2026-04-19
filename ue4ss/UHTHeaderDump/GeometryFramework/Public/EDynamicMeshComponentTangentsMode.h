#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshComponentTangentsMode.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshComponentTangentsMode : uint8 {
    NoTangents,
    AutoCalculated,
    ExternallyProvided,
    Default = 255,
};

