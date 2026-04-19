#pragma once
#include "CoreMinimal.h"
#include "RigDispatchFactory.h"
#include "RigDispatch_GetUserData.generated.h"

USTRUCT(BlueprintType)
struct FRigDispatch_GetUserData : public FRigDispatchFactory {
    GENERATED_BODY()
public:
    CONTROLRIG_API FRigDispatch_GetUserData();
};

