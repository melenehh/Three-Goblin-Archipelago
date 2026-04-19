#pragma once
#include "CoreMinimal.h"
#include "AISightEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAISightEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SeenActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Observer;
    
    AIMODULE_API FAISightEvent();
};

