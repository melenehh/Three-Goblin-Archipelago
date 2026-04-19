#pragma once
#include "CoreMinimal.h"
#include "EAppMsgCategory.generated.h"

UENUM(BlueprintType)
enum class EAppMsgCategory : uint8 {
    Warning,
    Error,
    Success,
    Info,
};

