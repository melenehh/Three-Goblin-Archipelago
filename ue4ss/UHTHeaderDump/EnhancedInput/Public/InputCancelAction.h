#pragma once
#include "CoreMinimal.h"
#include "InputCancelAction.generated.h"

class UInputAction;

USTRUCT(BlueprintType)
struct FInputCancelAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CancelAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CancellationStates;
    
    ENHANCEDINPUT_API FInputCancelAction();
};

