#pragma once
#include "CoreMinimal.h"
#include "RigVMUnaryOp.h"
#include "RigVMJumpToBranchOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMJumpToBranchOp : public FRigVMUnaryOp {
    GENERATED_BODY()
public:
    FRigVMJumpToBranchOp();
};

