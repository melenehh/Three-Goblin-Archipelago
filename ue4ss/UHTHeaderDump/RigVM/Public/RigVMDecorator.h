#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMDecorator.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDecorator : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigVMDecorator();
};

