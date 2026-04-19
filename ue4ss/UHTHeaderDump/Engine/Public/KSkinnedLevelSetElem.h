#pragma once
#include "CoreMinimal.h"
#include "KShapeElem.h"
#include "KSkinnedLevelSetElem.generated.h"

USTRUCT(BlueprintType)
struct FKSkinnedLevelSetElem : public FKShapeElem {
    GENERATED_BODY()
public:
    ENGINE_API FKSkinnedLevelSetElem();
};

