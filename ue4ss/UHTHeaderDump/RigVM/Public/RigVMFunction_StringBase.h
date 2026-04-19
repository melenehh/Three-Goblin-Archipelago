#pragma once
#include "CoreMinimal.h"
#include "RigVMStruct.h"
#include "RigVMFunction_StringBase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StringBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    FRigVMFunction_StringBase();
};

