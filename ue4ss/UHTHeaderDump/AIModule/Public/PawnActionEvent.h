#pragma once
#include "CoreMinimal.h"
#include "PawnActionEvent.generated.h"

class UDEPRECATED_PawnAction;

USTRUCT(BlueprintType)
struct FPawnActionEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* Action;
    
    AIMODULE_API FPawnActionEvent();
};

