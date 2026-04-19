#include "RigUnit_SetBoneInitialTransform.h"

FRigUnit_SetBoneInitialTransform::FRigUnit_SetBoneInitialTransform() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bPropagateToChildren = false;
}

