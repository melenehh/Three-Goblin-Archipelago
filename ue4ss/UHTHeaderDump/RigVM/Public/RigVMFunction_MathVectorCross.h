#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorCross.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorCross : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorCross();
};

