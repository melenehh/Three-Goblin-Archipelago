#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleConstant.h"
#include "RigVMFunction_MathDoubleConstE.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleConstE : public FRigVMFunction_MathDoubleConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleConstE();
};

