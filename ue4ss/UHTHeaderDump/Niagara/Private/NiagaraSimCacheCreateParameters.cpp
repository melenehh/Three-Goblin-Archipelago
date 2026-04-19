#include "NiagaraSimCacheCreateParameters.h"

FNiagaraSimCacheCreateParameters::FNiagaraSimCacheCreateParameters() {
    this->AttributeCaptureMode = ENiagaraSimCacheAttributeCaptureMode::All;
    this->bAllowRebasing = false;
    this->bAllowDataInterfaceCaching = false;
    this->bAllowInterpolation = false;
    this->bAllowVelocityExtrapolation = false;
}

