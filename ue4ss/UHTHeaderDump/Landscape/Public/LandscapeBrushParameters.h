#pragma once
#include "CoreMinimal.h"
#include "ELandscapeToolTargetType.h"
#include "LandscapeBrushParameters.generated.h"

class UTextureRenderTarget2D;

USTRUCT(BlueprintType)
struct FLandscapeBrushParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeToolTargetType LayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* CombinedResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeightmapLayerName;
    
    LANDSCAPE_API FLandscapeBrushParameters();
};

