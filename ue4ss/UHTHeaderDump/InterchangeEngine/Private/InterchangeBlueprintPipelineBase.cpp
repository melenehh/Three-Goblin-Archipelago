#include "InterchangeBlueprintPipelineBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangePipelineBase -FallbackName=InterchangePipelineBase

UInterchangeBlueprintPipelineBase::UInterchangeBlueprintPipelineBase() {
    this->ParentClass = UInterchangePipelineBase::StaticClass();
}


