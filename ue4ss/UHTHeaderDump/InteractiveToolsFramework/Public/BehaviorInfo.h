#pragma once
#include "CoreMinimal.h"
#include "BehaviorInfo.generated.h"

class UInputBehavior;

USTRUCT(BlueprintType)
struct FBehaviorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputBehavior* Behavior;
    
    INTERACTIVETOOLSFRAMEWORK_API FBehaviorInfo();
};

