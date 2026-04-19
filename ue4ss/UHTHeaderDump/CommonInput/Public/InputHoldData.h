#pragma once
#include "CoreMinimal.h"
#include "InputHoldData.generated.h"

USTRUCT(BlueprintType)
struct FInputHoldData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldRollbackTime;
    
    COMMONINPUT_API FInputHoldData();
};

