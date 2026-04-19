#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase
#include "InterchangeGLTFPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class INTERCHANGEPIPELINES_API UInterchangeGLTFPipeline : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGLTFMaterialInstanceLibrary;
    
    UInterchangeGLTFPipeline();

};

