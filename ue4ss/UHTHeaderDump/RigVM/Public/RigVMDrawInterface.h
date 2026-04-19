#pragma once
#include "CoreMinimal.h"
#include "RigVMDrawContainer.h"
#include "RigVMDrawInterface.generated.h"

USTRUCT(BlueprintType)
struct RIGVM_API FRigVMDrawInterface : public FRigVMDrawContainer {
    GENERATED_BODY()
public:
    FRigVMDrawInterface();
};

