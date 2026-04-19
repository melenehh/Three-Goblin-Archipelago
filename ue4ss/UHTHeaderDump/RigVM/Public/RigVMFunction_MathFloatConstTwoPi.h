#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatConstant.h"
#include "RigVMFunction_MathFloatConstTwoPi.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatConstTwoPi : public FRigVMFunction_MathFloatConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatConstTwoPi();
};

