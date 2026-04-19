#pragma once
#include "CoreMinimal.h"
#include "ERigVMFunctionArgumentDirection.generated.h"

UENUM(BlueprintType)
enum class ERigVMFunctionArgumentDirection : uint8 {
    Input,
    Output,
    Invalid,
};

