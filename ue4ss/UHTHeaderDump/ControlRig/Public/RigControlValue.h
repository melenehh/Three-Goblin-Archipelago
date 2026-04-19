#pragma once
#include "CoreMinimal.h"
#include "RigControlValueStorage.h"
#include "RigControlValue.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FRigControlValue {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigControlValueStorage FloatStorage;
    
public:
    FRigControlValue();
};

