#include "RigUnit_DistributeRotation.h"

FRigUnit_DistributeRotation::FRigUnit_DistributeRotation() {
    this->RotationEaseType = ERigVMAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

