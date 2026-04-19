#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBaseMutable.h"
#include "RigVMDispatch_ArraySetAtIndex.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArraySetAtIndex : public FRigVMDispatch_ArrayBaseMutable {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArraySetAtIndex();
};

