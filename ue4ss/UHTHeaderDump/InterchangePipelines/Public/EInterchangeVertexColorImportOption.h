#pragma once
#include "CoreMinimal.h"
#include "EInterchangeVertexColorImportOption.generated.h"

UENUM(BlueprintType)
enum class EInterchangeVertexColorImportOption : uint8 {
    IVCIO_Replace,
    IVCIO_Ignore,
    IVCIO_Override,
};

