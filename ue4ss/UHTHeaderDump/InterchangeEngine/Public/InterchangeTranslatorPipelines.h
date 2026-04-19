#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "InterchangeTranslatorPipelines.generated.h"

class UInterchangeTranslatorBase;

USTRUCT(BlueprintType)
struct FInterchangeTranslatorPipelines {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UInterchangeTranslatorBase> Translator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> Pipelines;
    
    INTERCHANGEENGINE_API FInterchangeTranslatorPipelines();
};

