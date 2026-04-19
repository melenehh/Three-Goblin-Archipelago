#include "RigVMFunction_DebugTransformMutableNoSpace.h"

FRigVMFunction_DebugTransformMutableNoSpace::FRigVMFunction_DebugTransformMutableNoSpace() {
    this->Mode = ERigUnitDebugTransformMode::Point;
    this->Thickness = 0.00f;
    this->Scale = 0.00f;
    this->bEnabled = false;
}

