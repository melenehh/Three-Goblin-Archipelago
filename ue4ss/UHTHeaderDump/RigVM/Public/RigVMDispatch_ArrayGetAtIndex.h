#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayBase.h"
#include "RigVMDispatch_ArrayGetAtIndex.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayGetAtIndex : public FRigVMDispatch_ArrayBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayGetAtIndex();
};

