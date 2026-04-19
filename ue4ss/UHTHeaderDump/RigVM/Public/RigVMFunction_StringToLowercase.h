#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_StringBase.h"
#include "RigVMFunction_StringToLowercase.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StringToLowercase : public FRigVMFunction_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    FRigVMFunction_StringToLowercase();
};

