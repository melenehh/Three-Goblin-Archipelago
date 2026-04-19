#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBinaryOp.h"
#include "RigVMFunction_MathBoolNand2.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolNand2 : public FRigVMFunction_MathBoolBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBoolNand2();
};

