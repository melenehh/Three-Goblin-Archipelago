#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBinaryOp.h"
#include "RigVMFunction_MathIntDiv.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntDiv : public FRigVMFunction_MathIntBinaryOp {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntDiv();
};

