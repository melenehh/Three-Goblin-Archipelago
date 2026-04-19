#include "RigVMFunction_AccumulateFloatRange.h"

FRigVMFunction_AccumulateFloatRange::FRigVMFunction_AccumulateFloatRange() {
    this->Value = 0.00f;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->AccumulatedMinimum = 0.00f;
    this->AccumulatedMaximum = 0.00f;
    this->bIsInitialized = false;
}

