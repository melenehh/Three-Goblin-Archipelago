#pragma once
#include "CoreMinimal.h"
#include "SimpleIndexedHandleBase.h"
#include "IndexedHandleBase.generated.h"

USTRUCT(BlueprintType)
struct FIndexedHandleBase : public FSimpleIndexedHandleBase {
    GENERATED_BODY()
public:
    AIMODULE_API FIndexedHandleBase();
};

