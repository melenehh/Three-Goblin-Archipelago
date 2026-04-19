#include "NiagaraSpriteRendererProperties.h"

UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties() {
    this->Material = NULL;
    this->SourceMode = ENiagaraRendererSourceDataMode::Particles;
    this->Alignment = ENiagaraSpriteAlignment::Automatic;
    this->FacingMode = ENiagaraSpriteFacingMode::Automatic;
    this->SortMode = ENiagaraSortMode::None;
    this->MacroUVRadius = 0.00f;
    this->bSubImageBlend = false;
    this->bRemoveHMDRollInVR = false;
    this->bSortOnlyWhenTranslucent = true;
    this->bEnableCameraDistanceCulling = false;
    this->SortPrecision = ENiagaraRendererSortPrecision::Default;
    this->GpuTranslucentLatency = ENiagaraRendererGpuTranslucentLatency::ProjectDefault;
    this->PixelCoverageMode = ENiagaraRendererPixelCoverageMode::Automatic;
    this->PixelCoverageBlend = 1.00f;
    this->MinFacingCameraBlendDistance = 0.00f;
    this->MaxFacingCameraBlendDistance = 0.00f;
    this->MinCameraDistance = 0.00f;
    this->MaxCameraDistance = 1000.00f;
    this->RendererVisibility = 0;
    this->MaterialParamValidMask = 0;
}


