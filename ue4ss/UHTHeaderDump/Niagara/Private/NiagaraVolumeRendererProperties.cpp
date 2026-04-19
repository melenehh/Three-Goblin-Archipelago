#include "NiagaraVolumeRendererProperties.h"

UNiagaraVolumeRendererProperties::UNiagaraVolumeRendererProperties() {
    this->Material = NULL;
    this->RendererVisibility = 0;
    this->StepFactor = 1.00f;
    this->LightingDownsampleFactor = 2.00f;
    this->ShadowStepFactor = 8.00f;
    this->ShadowBiasFactor = 0.50f;
}


