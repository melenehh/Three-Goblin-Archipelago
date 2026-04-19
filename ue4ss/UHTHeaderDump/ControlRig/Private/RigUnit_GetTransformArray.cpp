#include "RigUnit_GetTransformArray.h"

FRigUnit_GetTransformArray::FRigUnit_GetTransformArray() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bInitial = false;
}

