#pragma once
#include "CoreMinimal.h"
#include "EInterchangeNodeContainerType.generated.h"

UENUM(BlueprintType)
enum class EInterchangeNodeContainerType : uint8 {
    None,
    TranslatedScene,
    TranslatedAsset,
    FactoryData,
};

