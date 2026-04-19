#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigVMFunction_MathTransformBase.h"
#include "RigVMFunction_MathTransformMakeRelative.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathTransformMakeRelative : public FRigVMFunction_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Global;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Local;
    
    FRigVMFunction_MathTransformMakeRelative();
};

