#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathFloatBase.h"
#include "RigVMFunction_MathFloatRound.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathFloatRound : public FRigVMFunction_MathFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Int;
    
    FRigVMFunction_MathFloatRound();
};

