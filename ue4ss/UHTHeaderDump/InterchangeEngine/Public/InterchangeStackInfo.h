#pragma once
#include "CoreMinimal.h"
#include "InterchangeStackInfo.generated.h"

class UInterchangePipelineBase;

USTRUCT(BlueprintType)
struct FInterchangeStackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInterchangePipelineBase*> Pipelines;
    
    INTERCHANGEENGINE_API FInterchangeStackInfo();
};

