#include "RigUnit_SetTranslation.h"

FRigUnit_SetTranslation::FRigUnit_SetTranslation() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->bInitial = false;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

