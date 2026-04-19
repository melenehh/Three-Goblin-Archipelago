#include "VersionedNiagaraEmitterData.h"

FVersionedNiagaraEmitterData::FVersionedNiagaraEmitterData() {
    this->bDeprecated = false;
    this->bLocalSpace = false;
    this->bDeterminism = false;
    this->RandomSeed = 0;
    this->bInterpolatedSpawning = false;
    this->SimTarget = ENiagaraSimTarget::CPUSim;
    this->CalculateBoundsMode = ENiagaraEmitterCalculateBoundMode::Dynamic;
    this->bRequiresPersistentIDs = false;
    this->MaxGPUParticlesSpawnPerFrame = 0;
    this->AllocationMode = EParticleAllocationMode::AutomaticEstimate;
    this->PreAllocationCount = 0;
    this->GPUComputeScript = NULL;
}

