#pragma once
#include "CoreMinimal.h"
#include "EAlphaBlendOption.h"
#include "AlphaBlendArgs.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FAlphaBlendArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CustomCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlphaBlendOption BlendOption;
    
    ENGINE_API FAlphaBlendArgs();
};

