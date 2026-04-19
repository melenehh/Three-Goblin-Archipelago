#pragma once
#include "CoreMinimal.h"
#include "AITeamStimulusEvent.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAITeamStimulusEvent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Broadcaster;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Enemy;
    
    AIMODULE_API FAITeamStimulusEvent();
};

