#include "RigVMFunction_DebugPointMutable.h"

FRigVMFunction_DebugPointMutable::FRigVMFunction_DebugPointMutable() {
    this->Mode = ERigUnitDebugPointMode::Point;
    this->Scale = 0.00f;
    this->Thickness = 0.00f;
    this->bEnabled = false;
}

