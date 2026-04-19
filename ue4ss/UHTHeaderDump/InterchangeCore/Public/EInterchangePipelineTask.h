#pragma once
#include "CoreMinimal.h"
#include "EInterchangePipelineTask.generated.h"

UENUM(BlueprintType)
enum class EInterchangePipelineTask : uint8 {
    PostTranslator,
    PostFactory,
    PostImport,
    Export,
};

