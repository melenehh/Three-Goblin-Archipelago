#pragma once
#include "CoreMinimal.h"
#include "RigVMFourPointBezier.h"
#include "RigVMFunction_MathVectorBase.h"
#include "RigVMFunction_MathVectorMakeBezierFourPoint.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMFourPointBezier Bezier;
    
    FRigVMFunction_MathVectorMakeBezierFourPoint();
};

