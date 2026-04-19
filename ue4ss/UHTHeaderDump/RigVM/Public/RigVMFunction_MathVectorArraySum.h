#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_MathVectorBase.h"
#include "RigVMFunction_MathVectorArraySum.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorArraySum : public FRigVMFunction_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Array;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Sum;
    
    FRigVMFunction_MathVectorArraySum();
};

