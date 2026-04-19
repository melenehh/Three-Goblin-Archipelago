#pragma once
#include "CoreMinimal.h"
#include "RigVMGraphFunctionData.h"
#include "RigVMGraphFunctionStore.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMGraphFunctionStore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMGraphFunctionData> PublicFunctions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRigVMGraphFunctionData> PrivateFunctions;
    
    FRigVMGraphFunctionStore();
};

