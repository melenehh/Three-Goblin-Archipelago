#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "SwitchCustomInput.generated.h"

USTRUCT(BlueprintType)
struct FSwitchCustomInput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    ENGINE_API FSwitchCustomInput();
};

