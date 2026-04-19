#pragma once
#include "CoreMinimal.h"
#include "EInterchangeForceMeshType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeForceMeshType : uint8 {
    IFMT_None,
    IFMT_StaticMesh,
    IFMT_SkeletalMesh,
};

