#include "NiagaraSimulationStageGeneric.h"

UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric() {
    this->IterationSource = ENiagaraIterationSource::Particles;
    this->ExecuteBehavior = ENiagaraSimStageExecuteBehavior::Always;
    this->bDisablePartialParticleUpdate = false;
    this->bParticleIterationStateEnabled = false;
    this->bGpuDispatchForceLinear = false;
    this->bOverrideGpuDispatchNumThreads = false;
    this->DirectDispatchType = ENiagaraGpuDispatchType::OneD;
    this->DirectDispatchElementType = ENiagaraDirectDispatchElementType::NumThreads;
}


