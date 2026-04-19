#include "NiagaraLightRendererProperties.h"

UNiagaraLightRendererProperties::UNiagaraLightRendererProperties() {
    this->SourceMode = ENiagaraRendererSourceDataMode::Particles;
    this->bUseInverseSquaredFalloff = true;
    this->bAffectsTranslucency = false;
    this->bAlphaScalesBrightness = false;
    this->bOverrideInverseExposureBlend = false;
    this->RadiusScale = 1.00f;
    this->DefaultExponent = 1.00f;
    this->InverseExposureBlend = 0.00f;
    this->RendererVisibility = 0;
}


