#include "NiagaraSimCacheDataBuffersLayout.h"

FNiagaraSimCacheDataBuffersLayout::FNiagaraSimCacheDataBuffersLayout() {
    this->SimTarget = ENiagaraSimTarget::CPUSim;
    this->FloatCount = 0;
    this->HalfCount = 0;
    this->Int32Count = 0;
    this->bLocalSpace = false;
    this->bAllowInterpolation = false;
    this->bAllowVelocityExtrapolation = false;
    this->ComponentVelocity = 0;
}

