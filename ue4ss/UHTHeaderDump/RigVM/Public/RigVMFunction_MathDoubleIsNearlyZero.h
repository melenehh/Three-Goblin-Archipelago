#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleIsNearlyZero.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleIsNearlyZero : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_MathDoubleIsNearlyZero();
};

