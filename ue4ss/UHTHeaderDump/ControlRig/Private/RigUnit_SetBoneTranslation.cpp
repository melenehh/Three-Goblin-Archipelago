#include "RigUnit_SetBoneTranslation.h"

FRigUnit_SetBoneTranslation::FRigUnit_SetBoneTranslation() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

