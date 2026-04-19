#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorRad.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorRad : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorRad();
};

