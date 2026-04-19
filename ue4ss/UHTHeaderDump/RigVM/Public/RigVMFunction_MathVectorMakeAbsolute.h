#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_MathVectorBase.h"
#include "RigVMFunction_MathVectorMakeAbsolute.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorMakeAbsolute : public FRigVMFunction_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Local;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Global;
    
    FRigVMFunction_MathVectorMakeAbsolute();
};

