#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Blueprint -FallbackName=Blueprint
#include "InterchangeBlueprintPipelineBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeBlueprintPipelineBase : public UBlueprint {
    GENERATED_BODY()
public:
    UInterchangeBlueprintPipelineBase();

};

