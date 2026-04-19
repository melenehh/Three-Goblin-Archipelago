#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_MathIntBase.h"
#include "RigVMFunction_MathIntGreaterEqual.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathIntGreaterEqual : public FRigVMFunction_MathIntBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Result;
    
    FRigVMFunction_MathIntGreaterEqual();
};

