#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleUnaryOp.h"
#include "RigVMFunction_MathDoubleAtan.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleAtan : public FRigVMFunction_MathDoubleUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathDoubleAtan();
};

