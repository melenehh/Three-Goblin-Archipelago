#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorBinaryOp.h"
#include "RigVMFunction_MathVectorDiv.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorDiv : public FRigVMFunction_MathVectorBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorDiv();
};

