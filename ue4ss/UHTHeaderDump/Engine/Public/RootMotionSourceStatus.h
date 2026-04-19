#pragma once
#include "CoreMinimal.h"
#include "RootMotionSourceStatus.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionSourceStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    ENGINE_API FRootMotionSourceStatus();
};

