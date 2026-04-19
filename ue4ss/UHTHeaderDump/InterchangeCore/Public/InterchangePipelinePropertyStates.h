#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelinePropertyStatePerContext.h"
#include "InterchangePipelinePropertyStates.generated.h"

USTRUCT(BlueprintType)
struct FInterchangePipelinePropertyStates {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterchangePipelinePropertyStatePerContext ImportStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInterchangePipelinePropertyStatePerContext ReimportStates;
    
    INTERCHANGECORE_API FInterchangePipelinePropertyStates();
};

