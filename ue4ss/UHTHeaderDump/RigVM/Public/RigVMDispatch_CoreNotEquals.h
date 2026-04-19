#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatch_CoreEquals.h"
#include "RigVMDispatch_CoreNotEquals.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_CoreNotEquals : public FRigVMDispatch_CoreEquals {
    GENERATED_BODY()
public:
    FRigVMDispatch_CoreNotEquals();
};

