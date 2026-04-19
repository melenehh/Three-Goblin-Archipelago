#pragma once
#include "CoreMinimal.h"
#include "RigVMStructMutable.h"
#include "RigVMFunction_SimBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_SimBaseMutable : public FRigVMStructMutable {
    GENERATED_BODY()
public:
    FRigVMFunction_SimBaseMutable();
};

