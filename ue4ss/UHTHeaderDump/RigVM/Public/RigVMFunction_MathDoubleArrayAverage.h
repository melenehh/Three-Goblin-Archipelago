#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathDoubleBase.h"
#include "RigVMFunction_MathDoubleArrayAverage.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathDoubleArrayAverage : public FRigVMFunction_MathDoubleBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> Array;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Average;
    
    FRigVMFunction_MathDoubleArrayAverage();
};

