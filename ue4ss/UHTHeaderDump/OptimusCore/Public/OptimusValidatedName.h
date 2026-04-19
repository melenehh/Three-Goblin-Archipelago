#pragma once
#include "CoreMinimal.h"
#include "OptimusValidatedName.generated.h"

USTRUCT(BlueprintType)
struct OPTIMUSCORE_API FOptimusValidatedName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    FOptimusValidatedName();
};

