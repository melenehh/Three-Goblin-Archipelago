#include "RigVMFunction_DeltaFromPreviousFloat.h"

FRigVMFunction_DeltaFromPreviousFloat::FRigVMFunction_DeltaFromPreviousFloat() {
    this->Value = 0.00f;
    this->Delta = 0.00f;
    this->PreviousValue = 0.00f;
    this->Cache = 0.00f;
    this->bIsInitialized = false;
}

