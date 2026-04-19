#pragma once
#include "CoreMinimal.h"
#include "ActorInstanceHandle.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FActorInstanceHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> Actor;
    
public:
    ENGINE_API FActorInstanceHandle();
};

