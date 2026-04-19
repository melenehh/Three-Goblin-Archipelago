#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArrayAppend.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayAppend : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayAppend();
};

