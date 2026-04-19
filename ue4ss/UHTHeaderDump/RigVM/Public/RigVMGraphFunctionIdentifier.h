#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "RigVMGraphFunctionIdentifier.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMGraphFunctionIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LibraryNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath HostObject;
    
    FRigVMGraphFunctionIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FRigVMGraphFunctionIdentifier) { return 0; }

