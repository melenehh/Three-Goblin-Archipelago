#pragma once
#include "CoreMinimal.h"
#include "MathRBFInterpolateVectorFloat_Target.h"
#include "RigVMFunction_MathRBFInterpolateVectorBase.h"
#include "RigVMFunction_MathRBFInterpolateVectorFloat.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathRBFInterpolateVectorFloat : public FRigVMFunction_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateVectorFloat_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Output;
    
    FRigVMFunction_MathRBFInterpolateVectorFloat();
};

