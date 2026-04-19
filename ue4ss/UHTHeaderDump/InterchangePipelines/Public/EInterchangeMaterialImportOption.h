#pragma once
#include "CoreMinimal.h"
#include "EInterchangeMaterialImportOption.generated.h"

UENUM(BlueprintType)
enum class EInterchangeMaterialImportOption : uint8 {
    ImportAsMaterials,
    ImportAsMaterialInstances,
};

