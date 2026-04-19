#pragma once
#include "CoreMinimal.h"
#include "AIMoveRequest.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAIMoveRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> GoalActor;
    
public:
    AIMODULE_API FAIMoveRequest();
};

