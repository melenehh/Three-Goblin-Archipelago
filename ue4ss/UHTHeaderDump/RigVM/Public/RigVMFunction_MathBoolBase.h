#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathBoolBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    FRigVMFunction_MathBoolBase();
};

