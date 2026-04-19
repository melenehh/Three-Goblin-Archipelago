#pragma once
#include "CoreMinimal.h"
#include "RootMotionSourceSettings.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionSourceSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Flags;
    
    ENGINE_API FRootMotionSourceSettings();
};

