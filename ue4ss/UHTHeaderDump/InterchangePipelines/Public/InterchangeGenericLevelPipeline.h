#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=EReimportStrategyFlags -FallbackName=EReimportStrategyFlags
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase
#include "InterchangeGenericLevelPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGenericLevelPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EReimportStrategyFlags ReimportPropertyStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteMissingActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceReimportDeletedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceReimportDeletedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteMissingAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePhysicalInsteadOfStandardPerspectiveCamera;
    
public:
    UInterchangeGenericLevelPipeline();

};

