#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_StringBase.h"
#include "RigVMFunction_StringSplit.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StringSplit : public FRigVMFunction_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Separator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Result;
    
    FRigVMFunction_StringSplit();
};

