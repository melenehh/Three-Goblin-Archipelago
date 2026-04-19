#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase
#include "InterchangePythonPipelineBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangePythonPipelineBase : public UInterchangePipelineBase {
    GENERATED_BODY()
public:
    UInterchangePythonPipelineBase();

};

