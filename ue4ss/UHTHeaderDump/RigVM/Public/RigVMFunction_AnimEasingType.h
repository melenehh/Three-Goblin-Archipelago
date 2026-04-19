#pragma once
#include "CoreMinimal.h"
#include "ERigVMAnimEasingType.h"
#include "RigVMFunction_AnimBase.h"
#include "RigVMFunction_AnimEasingType.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_AnimEasingType : public FRigVMFunction_AnimBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMAnimEasingType Type;
    
    FRigVMFunction_AnimEasingType();
};

