#pragma once
#include "CoreMinimal.h"
#include "SequentialIDBase.generated.h"

USTRUCT(BlueprintType)
struct FSequentialIDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
public:
    AIMODULE_API FSequentialIDBase();
};

