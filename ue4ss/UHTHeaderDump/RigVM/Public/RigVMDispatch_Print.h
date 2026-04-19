#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigVMDispatch_Print.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDispatch_Print : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    FRigVMDispatch_Print();
};

