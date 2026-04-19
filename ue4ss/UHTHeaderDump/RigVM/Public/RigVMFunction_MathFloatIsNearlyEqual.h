#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBase.h"
#include "RigVMFunction_MathFloatIsNearlyEqual.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatIsNearlyEqual : public FRigVMFunction_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Tolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_MathFloatIsNearlyEqual();
};

