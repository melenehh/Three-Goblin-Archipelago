#include "NiagaraSimCacheCaptureParameters.h"

FNiagaraSimCacheCaptureParameters::FNiagaraSimCacheCaptureParameters() {
    this->bAppendToSimCache = false;
    this->bCaptureFixedNumberOfFrames = false;
    this->NumFrames = 0;
    this->CaptureRate = 0;
    this->bUseTimeout = false;
    this->TimeoutFrameCount = 0;
    this->bCaptureAllFramesImmediatly = false;
    this->ImmediateCaptureDeltaTime = 0.00f;
}

