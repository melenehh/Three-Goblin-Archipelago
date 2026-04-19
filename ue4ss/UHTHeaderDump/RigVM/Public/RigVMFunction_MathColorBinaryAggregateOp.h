#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "RigVMFunction_MathColorBase.h"
#include "RigVMFunction_MathColorBinaryAggregateOp.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_MathColorBinaryAggregateOp : public FRigVMFunction_MathColorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Result;
    
    FRigVMFunction_MathColorBinaryAggregateOp();
};

