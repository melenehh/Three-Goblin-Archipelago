#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorAbs.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorAbs : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorAbs();
};

