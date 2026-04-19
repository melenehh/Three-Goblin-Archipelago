#pragma once
#include "CoreMinimal.h"
#include "RigVMFunction_StringBase.h"
#include "RigVMFunction_StringJoin.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMFunction_StringJoin : public FRigVMFunction_StringBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Values;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Separator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Result;
    
    FRigVMFunction_StringJoin();
};

