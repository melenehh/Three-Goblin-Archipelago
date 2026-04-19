#pragma once
#include "CoreMinimal.h"
#include "PawnActionStack.generated.h"

class UDEPRECATED_PawnAction;

USTRUCT(BlueprintType)
struct FPawnActionStack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDEPRECATED_PawnAction* TopAction;
    
public:
    AIMODULE_API FPawnActionStack();
};

