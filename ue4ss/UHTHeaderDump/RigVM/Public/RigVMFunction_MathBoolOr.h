#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryAggregateOp.h"
#include "RigVMFunction_MathBoolOr.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolOr : public FRigVMFunction_MathBoolBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBoolOr();
};

