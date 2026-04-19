#pragma once
#include "CoreMinimal.h"
#include "PerPlatformInt.generated.h"

USTRUCT(BlueprintType)
struct FPerPlatformInt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Default;
    
    ENGINE_API FPerPlatformInt();
};

