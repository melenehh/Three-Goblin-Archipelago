#pragma once
#include "CoreMinimal.h"
#include "EInterchangePipelineConfigurationDialogResult.generated.h"

UENUM(BlueprintType)
enum class EInterchangePipelineConfigurationDialogResult : uint8 {
    Cancel,
    Import,
    ImportAll,
};

