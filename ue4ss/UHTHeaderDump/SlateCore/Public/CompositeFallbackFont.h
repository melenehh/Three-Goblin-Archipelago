#pragma once
#include "CoreMinimal.h"
#include "Typeface.h"
#include "CompositeFallbackFont.generated.h"

USTRUCT(BlueprintType)
struct FCompositeFallbackFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTypeface Typeface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScalingFactor;
    
    SLATECORE_API FCompositeFallbackFont();
};

