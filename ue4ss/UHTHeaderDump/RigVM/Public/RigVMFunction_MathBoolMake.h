#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathBoolBase.h"
#include "RigVMFunction_MathBoolMake.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathBoolMake : public FRigVMFunction_MathBoolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Value;
    
    FRigVMFunction_MathBoolMake();
};

