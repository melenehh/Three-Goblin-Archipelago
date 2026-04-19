#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "InterchangeTranslatorPipelines.h"
#include "InterchangePipelineStack.generated.h"

USTRUCT(BlueprintType)
struct FInterchangePipelineStack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> Pipelines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterchangeTranslatorPipelines> PerTranslatorPipelines;
    
    INTERCHANGEENGINE_API FInterchangePipelineStack();
};

