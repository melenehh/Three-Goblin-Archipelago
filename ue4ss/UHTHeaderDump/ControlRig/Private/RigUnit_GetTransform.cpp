#include "RigUnit_GetTransform.h"

FRigUnit_GetTransform::FRigUnit_GetTransform() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bInitial = false;
}

