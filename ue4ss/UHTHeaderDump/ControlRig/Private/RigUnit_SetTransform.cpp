#include "RigUnit_SetTransform.h"

FRigUnit_SetTransform::FRigUnit_SetTransform() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

