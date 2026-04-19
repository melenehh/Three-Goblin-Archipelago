#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleAcos.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleAcos : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleAcos();
};

