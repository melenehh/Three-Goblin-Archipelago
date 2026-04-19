#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_StringBase.h"
#include "RigVMFunction_StringConcat.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StringConcat : public FRigVMFunction_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    FRigVMFunction_StringConcat();
};

