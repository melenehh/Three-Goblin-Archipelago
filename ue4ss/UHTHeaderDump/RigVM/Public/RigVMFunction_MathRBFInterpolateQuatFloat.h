#pragma once
#include "CoreMinimal.h"
#include "MathRBFInterpolateQuatFloat_Target.h"
#include "RigVMFunction_MathRBFInterpolateQuatBase.h"
#include "RigVMFunction_MathRBFInterpolateQuatFloat.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathRBFInterpolateQuatFloat : public FRigVMFunction_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateQuatFloat_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Output;
    
    FRigVMFunction_MathRBFInterpolateQuatFloat();
};

