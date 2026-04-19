#pragma once
#include "CoreMinimal.h"
#include "EReimportStrategyFlags.generated.h"

UENUM(BlueprintType)
enum class EReimportStrategyFlags : uint8 {
    ApplyNoProperties,
    ApplyPipelineProperties,
    ApplyEditorChangedProperties,
};

