#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreBase.h"
#include "RigVMDispatch_CoreEquals.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_CoreEquals : public FRigVMDispatch_CoreBase {
    GENERATED_BODY()
public:
    FRigVMDispatch_CoreEquals();
};

