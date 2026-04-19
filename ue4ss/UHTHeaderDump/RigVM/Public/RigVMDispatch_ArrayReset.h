#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArrayReset.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayReset : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayReset();
};

