#include "NiagaraMeshRendererProperties.h"

UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties() {
    this->Meshes.AddDefaulted(1);
    this->SourceMode = ENiagaraRendererSourceDataMode::Particles;
    this->SortMode = ENiagaraSortMode::None;
    this->SortPrecision = ENiagaraRendererSortPrecision::Default;
    this->GpuTranslucentLatency = ENiagaraRendererGpuTranslucentLatency::ProjectDefault;
    this->bOverrideMaterials = false;
    this->bUseHeterogeneousVolumes = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bSubImageBlend = false;
    this->bEnableFrustumCulling = false;
    this->bEnableCameraDistanceCulling = false;
    this->bEnableMeshFlipbook = false;
    this->bLockedAxisEnable = false;
    this->FacingMode = ENiagaraMeshFacingMode::Default;
    this->LockedAxisSpace = ENiagaraMeshLockedAxisSpace::Simulation;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
    this->MaterialParamValidMask = 0;
}


