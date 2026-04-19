#include "RigUnit_PoseGetDelta.h"

FRigUnit_PoseGetDelta::FRigUnit_PoseGetDelta() {
    this->PositionThreshold = 0.00f;
    this->RotationThreshold = 0.00f;
    this->ScaleThreshold = 0.00f;
    this->CurveThreshold = 0.00f;
    this->ElementType = ERigElementType::None;
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->PosesAreEqual = false;
}

