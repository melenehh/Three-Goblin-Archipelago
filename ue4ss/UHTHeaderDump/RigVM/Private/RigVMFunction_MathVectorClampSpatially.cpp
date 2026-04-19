#include "RigVMFunction_MathVectorClampSpatially.h"

FRigVMFunction_MathVectorClampSpatially::FRigVMFunction_MathVectorClampSpatially() {
    this->Axis = EAxis::None;
    this->Type = ERigVMClampSpatialMode::Plane;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->bDrawDebug = false;
    this->DebugThickness = 0.00f;
}

