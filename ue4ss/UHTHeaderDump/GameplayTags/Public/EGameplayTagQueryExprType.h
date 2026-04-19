#pragma once
#include "CoreMinimal.h"
#include "EGameplayTagQueryExprType.generated.h"

UENUM(BlueprintType)
enum class EGameplayTagQueryExprType : uint8 {
    Undefined,
    AnyTagsMatch,
    AllTagsMatch,
    NoTagsMatch,
    AnyExprMatch,
    AllExprMatch,
    NoExprMatch,
};

