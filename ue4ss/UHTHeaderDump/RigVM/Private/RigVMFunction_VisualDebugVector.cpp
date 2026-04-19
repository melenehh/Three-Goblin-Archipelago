#include "RigVMFunction_VisualDebugVector.h"

FRigVMFunction_VisualDebugVector::FRigVMFunction_VisualDebugVector() {
    this->bEnabled = false;
    this->Mode = ERigUnitVisualDebugPointMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
}

