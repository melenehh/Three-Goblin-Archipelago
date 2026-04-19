#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleConstant.h"
#include "RigVMFunction_MathDoubleConstHalfPi.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleConstHalfPi : public FRigVMFunction_MathDoubleConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleConstHalfPi();
};

