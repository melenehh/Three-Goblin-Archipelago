#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "PerPlatformFrameRate.generated.h"

USTRUCT(BlueprintType)
struct FPerPlatformFrameRate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate Default;
    
    ENGINE_API FPerPlatformFrameRate();
};

