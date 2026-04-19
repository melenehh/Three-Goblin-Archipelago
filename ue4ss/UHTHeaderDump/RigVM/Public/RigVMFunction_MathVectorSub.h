#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorSub.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorSub : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorSub();
};

