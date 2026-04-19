#pragma once
#include "CoreMinimal.h"
#include "RigVMStructMutable.h"
#include "RigVMFunction_DebugBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable {
    GENERATED_BODY()
public:
    FRigVMFunction_DebugBaseMutable();
};

