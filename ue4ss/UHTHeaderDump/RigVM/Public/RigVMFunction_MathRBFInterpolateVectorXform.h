#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "MathRBFInterpolateVectorXform_Target.h"
#include "RigVMFunction_MathRBFInterpolateVectorBase.h"
#include "RigVMFunction_MathRBFInterpolateVectorXform.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathRBFInterpolateVectorXform : public FRigVMFunction_MathRBFInterpolateVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateVectorXform_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Output;
    
    FRigVMFunction_MathRBFInterpolateVectorXform();
};

