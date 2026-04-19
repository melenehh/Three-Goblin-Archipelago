#pragma once
#include "CoreMinimal.h"
#include "OptimusDeformerInstanceComponentBinding.generated.h"

USTRUCT(BlueprintType)
struct FOptimusDeformerInstanceComponentBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProviderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentName;
    
    OPTIMUSCORE_API FOptimusDeformerInstanceComponentBinding();
};

