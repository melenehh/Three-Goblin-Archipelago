#pragma once
#include "CoreMinimal.h"
#include "OptimusDataTypeRef.h"
#include "OptimusNode_GetVariable_DuplicationInfo.generated.h"

USTRUCT(BlueprintType)
struct FOptimusNode_GetVariable_DuplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariableName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusDataTypeRef DataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefaultValue;
    
    OPTIMUSCORE_API FOptimusNode_GetVariable_DuplicationInfo();
};

