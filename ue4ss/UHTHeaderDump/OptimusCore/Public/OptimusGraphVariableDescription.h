#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ShaderValueTypeHandle -FallbackName=ShaderValueTypeHandle
#include "OptimusGraphVariableDescription.generated.h"

USTRUCT(BlueprintType)
struct FOptimusGraphVariableDescription {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShaderValueTypeHandle ValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Offset;
    
    OPTIMUSCORE_API FOptimusGraphVariableDescription();
};

