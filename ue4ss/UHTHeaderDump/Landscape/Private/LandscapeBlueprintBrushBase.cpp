#include "LandscapeBlueprintBrushBase.h"

ALandscapeBlueprintBrushBase::ALandscapeBlueprintBrushBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void ALandscapeBlueprintBrushBase::RequestLandscapeUpdate(bool bInUserTriggered) {
}

UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::RenderLayer_Implementation(const FLandscapeBrushParameters& InParameters) {
    return NULL;
}

UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render_Implementation(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, const FName& InWeightmapLayerName) {
    return NULL;
}

void ALandscapeBlueprintBrushBase::Initialize_Implementation(const FTransform& InLandscapeTransform, const FIntPoint& InLandscapeSize, const FIntPoint& InLandscapeRenderTargetSize) {
}



