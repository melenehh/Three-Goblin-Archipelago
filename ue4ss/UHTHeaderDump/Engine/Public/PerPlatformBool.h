#pragma once
#include "CoreMinimal.h"
#include "PerPlatformBool.generated.h"

USTRUCT(BlueprintType)
struct FPerPlatformBool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Default;
    
    ENGINE_API FPerPlatformBool();
};

