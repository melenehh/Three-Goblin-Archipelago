#pragma once
#include "CoreMinimal.h"
#include "AnimCurveParam.generated.h"

USTRUCT(BlueprintType)
struct FAnimCurveParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    ENGINE_API FAnimCurveParam();
};

