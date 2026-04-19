#include "SimulationStageMetaData.h"

FSimulationStageMetaData::FSimulationStageMetaData() {
    this->IterationSourceType = ENiagaraIterationSource::Particles;
    this->ExecuteBehavior = ENiagaraSimStageExecuteBehavior::Always;
    this->bWritesParticles = false;
    this->bPartialParticleUpdate = false;
    this->bParticleIterationStateEnabled = false;
    this->bGpuIndirectDispatch = false;
    this->NumIterations = 0;
    this->GpuDispatchType = ENiagaraGpuDispatchType::OneD;
    this->GpuDirectDispatchElementType = ENiagaraDirectDispatchElementType::NumThreads;
}

