#pragma once
#include "CoreMinimal.h"
#include "CachedAnimTransitionData.generated.h"

USTRUCT(BlueprintType)
struct FCachedAnimTransitionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StateMachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FromStateName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ToStateName;
    
    ENGINE_API FCachedAnimTransitionData();
};

