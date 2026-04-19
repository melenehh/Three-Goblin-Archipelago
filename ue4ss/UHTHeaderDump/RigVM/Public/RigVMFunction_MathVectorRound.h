#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathVectorUnaryOp.h"
#include "RigVMFunction_MathVectorRound.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorRound : public FRigVMFunction_MathVectorUnaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathVectorRound();
};

