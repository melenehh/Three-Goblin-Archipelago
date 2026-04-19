#pragma once
#include "CoreMinimal.h"
#include "EGroomCacheImportType.generated.h"

UENUM(BlueprintType)
enum class EGroomCacheImportType : uint8 {
    None,
    Strands,
    Guides,
    All,
};

