#include "RigVMFunction_DebugPoint.h"

FRigVMFunction_DebugPoint::FRigVMFunction_DebugPoint() {
    this->Mode = ERigUnitDebugPointMode::Point;
    this->Scale = 0.00f;
    this->Thickness = 0.00f;
    this->bEnabled = false;
}

