#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayReset.h"
#include "RigVMDispatch_ArrayReverse.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayReverse : public FRigVMDispatch_ArrayReset {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayReverse();
};

