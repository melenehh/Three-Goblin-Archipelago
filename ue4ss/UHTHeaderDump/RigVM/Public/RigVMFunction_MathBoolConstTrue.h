#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolConstant.h"
#include "RigVMFunction_MathBoolConstTrue.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolConstTrue : public FRigVMFunction_MathBoolConstant {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBoolConstTrue();
};

