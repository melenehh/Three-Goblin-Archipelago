#include "RigUnit_TwistBones.h"

FRigUnit_TwistBones::FRigUnit_TwistBones() {
    this->TwistEaseType = ERigVMAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

