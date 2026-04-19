#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorNegate.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorNegate : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorNegate();
};

