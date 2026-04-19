#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_MathVectorBase.h"
#include "RigVMFunction_MathVectorFromDouble.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorFromDouble : public FRigVMFunction_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Result;
    
    FRigVMFunction_MathVectorFromDouble();
};

