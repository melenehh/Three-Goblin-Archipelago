#pragma once
#include "CoreMinimal.h"
#include "AITouchEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAITouchEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TouchReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
    AIMODULE_API FAITouchEvent();
};

