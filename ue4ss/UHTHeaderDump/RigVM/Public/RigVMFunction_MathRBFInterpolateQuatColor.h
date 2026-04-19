#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MathRBFInterpolateQuatColor_Target.h"
#include "RigVMFunction_MathRBFInterpolateQuatBase.h"
#include "RigVMFunction_MathRBFInterpolateQuatColor.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathRBFInterpolateQuatColor : public FRigVMFunction_MathRBFInterpolateQuatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMathRBFInterpolateQuatColor_Target> Targets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Output;
    
    FRigVMFunction_MathRBFInterpolateQuatColor();
};

