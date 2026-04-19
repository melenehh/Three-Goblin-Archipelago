#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBase.h"
#include "RigVMFunction_MathIntArrayAverage.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntArrayAverage : public FRigVMFunction_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Average;
    
    FRigVMFunction_MathIntArrayAverage();
};

