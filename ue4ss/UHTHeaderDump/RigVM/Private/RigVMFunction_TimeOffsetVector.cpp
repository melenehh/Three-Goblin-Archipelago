#include "RigVMFunction_TimeOffsetVector.h"

FRigVMFunction_TimeOffsetVector::FRigVMFunction_TimeOffsetVector() {
    this->SecondsAgo = 0.00f;
    this->BufferSize = 0;
    this->TimeRange = 0.00f;
    this->LastInsertIndex = 0;
    this->UpperBound = 0;
}

