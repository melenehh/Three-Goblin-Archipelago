#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=EulerTransform -FallbackName=EulerTransform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RigVMFunction_MathTransformBase.h"
#include "RigVMFunction_MathTransformFromEulerTransformV2.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathTransformFromEulerTransformV2 : public FRigVMFunction_MathTransformBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEulerTransform Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Result;
    
    FRigVMFunction_MathTransformFromEulerTransformV2();
};

