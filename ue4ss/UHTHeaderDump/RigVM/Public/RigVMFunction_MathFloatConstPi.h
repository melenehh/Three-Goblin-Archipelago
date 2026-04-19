#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatConstant.h"
#include "RigVMFunction_MathFloatConstPi.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatConstPi : public FRigVMFunction_MathFloatConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatConstPi();
};

