#include "RigVMFunction_AlphaInterpVector.h"

FRigVMFunction_AlphaInterpVector::FRigVMFunction_AlphaInterpVector() {
    this->Scale = 0.00f;
    this->Bias = 0.00f;
    this->bMapRange = false;
    this->bClampResult = false;
    this->ClampMin = 0.00f;
    this->ClampMax = 0.00f;
    this->bInterpResult = false;
    this->InterpSpeedIncreasing = 0.00f;
    this->InterpSpeedDecreasing = 0.00f;
}

