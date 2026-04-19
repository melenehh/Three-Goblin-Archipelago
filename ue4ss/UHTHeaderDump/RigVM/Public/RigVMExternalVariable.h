#pragma once
#include "CoreMinimal.h"
#include "RigVMExternalVariableDef.h"
#include "RigVMExternalVariable.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMExternalVariable : public FRigVMExternalVariableDef {
    GENERATED_BODY()
public:
    FRigVMExternalVariable();
};

