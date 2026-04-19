#pragma once
#include "CoreMinimal.h"
#include "EGroomGuideType.generated.h"

UENUM(BlueprintType)
enum class EGroomGuideType : uint8 {
    Imported,
    Generated,
    Rigged,
};

