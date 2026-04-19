#include "RigVMFunction_VisualDebugVectorNoSpace.h"

FRigVMFunction_VisualDebugVectorNoSpace::FRigVMFunction_VisualDebugVectorNoSpace() {
    this->bEnabled = false;
    this->Mode = ERigUnitVisualDebugPointMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
}

