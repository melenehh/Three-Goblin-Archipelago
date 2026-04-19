#pragma once
#include "CoreMinimal.h"
#include "AnimCurveBase.generated.h"

USTRUCT(BlueprintType)
struct FAnimCurveBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurveTypeFlags;
    
public:
    ENGINE_API FAnimCurveBase();
};

