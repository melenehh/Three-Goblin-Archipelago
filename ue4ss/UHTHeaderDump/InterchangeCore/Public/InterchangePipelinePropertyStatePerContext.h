#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelinePropertyStatePerContext.generated.h"

USTRUCT(BlueprintType)
struct FInterchangePipelinePropertyStatePerContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    INTERCHANGECORE_API FInterchangePipelinePropertyStatePerContext();
};

