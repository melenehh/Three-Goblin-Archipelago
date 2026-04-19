#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_ArrayAppend.h"
#include "RigVMDispatch_ArrayUnion.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_ArrayUnion : public FRigVMDispatch_ArrayAppend {
    GENERATED_BODY()
public:
    FRigVMDispatch_ArrayUnion();
};

