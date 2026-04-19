#include "RigUnit_SetBoneRotation.h"

FRigUnit_SetBoneRotation::FRigUnit_SetBoneRotation() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

