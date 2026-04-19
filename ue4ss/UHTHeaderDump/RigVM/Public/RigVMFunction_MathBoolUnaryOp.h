#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBase.h"
#include "RigVMFunction_MathBoolUnaryOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolUnaryOp : public FRigVMFunction_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_MathBoolUnaryOp();
};

