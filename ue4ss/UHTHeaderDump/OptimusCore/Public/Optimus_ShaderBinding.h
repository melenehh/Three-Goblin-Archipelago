#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.h"
#include "Optimus_ShaderBinding.generated.h"

USTRUCT(BlueprintType)
struct FOptimus_ShaderBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    OPTIMUSCORE_API FOptimus_ShaderBinding();
};

