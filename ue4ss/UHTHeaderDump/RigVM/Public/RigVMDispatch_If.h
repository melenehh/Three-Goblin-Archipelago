#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_If.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_If : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_If();
};

