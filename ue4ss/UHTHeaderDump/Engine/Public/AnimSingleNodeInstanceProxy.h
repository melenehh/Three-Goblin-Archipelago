#pragma once
#include "CoreMinimal.h"
#include "AnimInstanceProxy.h"
#include "AnimSingleNodeInstanceProxy.generated.h"

USTRUCT(BlueprintType)
struct FAnimSingleNodeInstanceProxy : public FAnimInstanceProxy {
    GENERATED_BODY()
public:
    ENGINE_API FAnimSingleNodeInstanceProxy();
};

