#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleSign.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleSign : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleSign();
};

