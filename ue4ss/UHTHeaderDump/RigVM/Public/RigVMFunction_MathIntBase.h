#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBase.h"
#include "RigVMFunction_MathIntBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntBase : public FRigVMFunction_MathBase {
    GENERATED_BODY()
public:
    FRigVMFunction_MathIntBase();
};

