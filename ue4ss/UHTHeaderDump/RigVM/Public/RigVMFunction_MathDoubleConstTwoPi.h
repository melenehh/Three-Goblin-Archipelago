#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleConstant.h"
#include "RigVMFunction_MathDoubleConstTwoPi.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleConstTwoPi : public FRigVMFunction_MathDoubleConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleConstTwoPi();
};

