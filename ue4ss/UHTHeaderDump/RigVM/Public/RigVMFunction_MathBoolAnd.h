#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryAggregateOp.h"
#include "RigVMFunction_MathBoolAnd.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolAnd : public FRigVMFunction_MathBoolBinaryAggregateOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBoolAnd();
};

