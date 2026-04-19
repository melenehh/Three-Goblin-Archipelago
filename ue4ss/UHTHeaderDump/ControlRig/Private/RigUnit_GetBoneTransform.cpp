#include "RigUnit_GetBoneTransform.h"

FRigUnit_GetBoneTransform::FRigUnit_GetBoneTransform() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bFirstUpdate = false;
}

