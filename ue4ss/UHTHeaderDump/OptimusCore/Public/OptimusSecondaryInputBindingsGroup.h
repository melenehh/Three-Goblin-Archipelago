#pragma once
#include "CoreMinimal.h"
#include "OptimusParameterBindingArray.h"
#include "OptimusValidatedName.h"
#include "OptimusSecondaryInputBindingsGroup.generated.h"

USTRUCT(BlueprintType)
struct FOptimusSecondaryInputBindingsGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusValidatedName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusParameterBindingArray BindingArray;
    
    OPTIMUSCORE_API FOptimusSecondaryInputBindingsGroup();
};

