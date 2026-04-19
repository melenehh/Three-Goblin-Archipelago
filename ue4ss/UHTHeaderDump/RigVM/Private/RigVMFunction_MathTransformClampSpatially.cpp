#include "RigVMFunction_MathTransformClampSpatially.h"

FRigVMFunction_MathTransformClampSpatially::FRigVMFunction_MathTransformClampSpatially() {
    this->Axis = EAxis::None;
    this->Type = ERigVMClampSpatialMode::Plane;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->bDrawDebug = false;
    this->DebugThickness = 0.00f;
}

