#include "RigVMFunction_AccumulateFloatMul.h"

FRigVMFunction_AccumulateFloatMul::FRigVMFunction_AccumulateFloatMul() {
    this->Multiplier = 0.00f;
    this->InitialValue = 0.00f;
    this->bIntegrateDeltaTime = false;
    this->Result = 0.00f;
    this->AccumulatedValue = 0.00f;
    this->bIsInitialized = false;
}

