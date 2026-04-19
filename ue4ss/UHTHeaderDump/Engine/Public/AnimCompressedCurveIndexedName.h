#pragma once
#include "CoreMinimal.h"
#include "AnimCompressedCurveIndexedName.generated.h"

USTRUCT(BlueprintType)
struct FAnimCompressedCurveIndexedName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CurveName;
    
    ENGINE_API FAnimCompressedCurveIndexedName();
};

