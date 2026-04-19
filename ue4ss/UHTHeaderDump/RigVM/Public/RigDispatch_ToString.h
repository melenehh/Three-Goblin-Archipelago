#pragma once
#include "CoreMinimal.h"
#include "RigVMDispatchFactory.h"
#include "RigDispatch_ToString.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_ToString : public FRigVMDispatchFactory {
    GENERATED_BODY()
public:
    RIGVM_API FRigDispatch_ToString();
};

