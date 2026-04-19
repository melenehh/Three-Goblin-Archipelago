#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayBaseMutable : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayBaseMutable();
};

