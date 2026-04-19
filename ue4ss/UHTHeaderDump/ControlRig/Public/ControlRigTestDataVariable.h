#pragma once
#include "CoreMinimal.h"
#include "ControlRigTestDataVariable.generated.h"

USTRUCT(BlueprintType)
struct CONTROLRIG_API FControlRigTestDataVariable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CPPType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    FControlRigTestDataVariable();
};

