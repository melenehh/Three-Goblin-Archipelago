#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatConstant.h"
#include "RigVMFunction_MathFloatConstHalfPi.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatConstHalfPi : public FRigVMFunction_MathFloatConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatConstHalfPi();
};

