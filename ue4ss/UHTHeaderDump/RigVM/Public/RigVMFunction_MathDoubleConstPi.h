#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleConstant.h"
#include "RigVMFunction_MathDoubleConstPi.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleConstPi : public FRigVMFunction_MathDoubleConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleConstPi();
};

