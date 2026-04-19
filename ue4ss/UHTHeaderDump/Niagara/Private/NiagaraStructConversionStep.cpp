#include "NiagaraStructConversionStep.h"

FNiagaraStructConversionStep::FNiagaraStructConversionStep() {
    this->LWCBytes = 0;
    this->LWCOffset = 0;
    this->SimulationBytes = 0;
    this->SimulationOffset = 0;
    this->ConversionType = ENiagaraStructConversionType::CopyOnly;
}

