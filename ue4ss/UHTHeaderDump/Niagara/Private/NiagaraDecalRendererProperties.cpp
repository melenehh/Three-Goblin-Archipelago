#include "NiagaraDecalRendererProperties.h"

UNiagaraDecalRendererProperties::UNiagaraDecalRendererProperties() {
    this->Material = NULL;
    this->SourceMode = ENiagaraRendererSourceDataMode::Particles;
    this->RendererVisibility = 0;
    this->DecalScreenSizeFade = 0.00f;
}


