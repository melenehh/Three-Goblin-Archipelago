#pragma once
#include "CoreMinimal.h"
#include "PerPlatformFloat.generated.h"

USTRUCT(BlueprintType)
struct FPerPlatformFloat {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Default;
    
    ENGINE_API FPerPlatformFloat();
};

