#pragma once
#include "CoreMinimal.h"
#include "ELoadingIconType.generated.h"

UENUM(BlueprintType)
enum class ELoadingIconType : uint8 {
    LIT_Throbber,
    LIT_CircularThrobber,
    LIT_ImageSequence,
    LIT_Material,
};

