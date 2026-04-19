#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBase.h"
#include "RigVMFunction_MathFloatConstant.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatConstant : public FRigVMFunction_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FRigVMFunction_MathFloatConstant();
};

