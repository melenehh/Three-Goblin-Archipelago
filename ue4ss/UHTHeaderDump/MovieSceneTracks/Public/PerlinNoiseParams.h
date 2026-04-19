#pragma once
#include "CoreMinimal.h"
#include "PerlinNoiseParams.generated.h"

USTRUCT(BlueprintType)
struct FPerlinNoiseParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Frequency;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Amplitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    MOVIESCENETRACKS_API FPerlinNoiseParams();
};

