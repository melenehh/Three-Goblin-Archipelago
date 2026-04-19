#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorUnit.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorUnit : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorUnit();
};

