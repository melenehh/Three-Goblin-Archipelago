#pragma once
#include "CoreMinimal.h"
#include "EInterchangePipelineContext.generated.h"

UENUM(BlueprintType)
enum class EInterchangePipelineContext : uint8 {
    None,
    AssetImport,
    AssetReimport,
    SceneImport,
    SceneReimport,
    AssetCustomLODImport,
    AssetCustomLODReimport,
    AssetAlternateSkinningImport,
    AssetAlternateSkinningReimport,
};

