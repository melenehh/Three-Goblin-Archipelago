#pragma once
#include "CoreMinimal.h"
#include "OptimusVariableMetaDataEntry.generated.h"

USTRUCT(BlueprintType)
struct FOptimusVariableMetaDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Value;
    
    OPTIMUSCORE_API FOptimusVariableMetaDataEntry();
};

