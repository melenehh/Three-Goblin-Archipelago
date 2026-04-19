#pragma once
#include "CoreMinimal.h"
#include "EDynamicMeshChangeType.generated.h"

UENUM(BlueprintType)
enum class EDynamicMeshChangeType : uint8 {
    GeneralEdit,
    MeshChange,
    MeshReplacementChange,
    MeshVertexChange,
    DeformationEdit,
    AttributeEdit,
};

