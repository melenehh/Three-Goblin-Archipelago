#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatConstant.h"
#include "RigVMFunction_MathFloatConstE.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatConstE : public FRigVMFunction_MathFloatConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathFloatConstE();
};

