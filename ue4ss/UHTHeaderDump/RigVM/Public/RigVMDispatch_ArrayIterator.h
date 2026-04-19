#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArrayIterator.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayIterator : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayIterator();
};

