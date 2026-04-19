#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMFunction_DebugBaseMutable -FallbackName=RigVMFunction_DebugBaseMutable
#include "RigUnit_StartProfilingTimer.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable {
    GENERATED_BODY()
public:
    FRigUnit_StartProfilingTimer();
};

