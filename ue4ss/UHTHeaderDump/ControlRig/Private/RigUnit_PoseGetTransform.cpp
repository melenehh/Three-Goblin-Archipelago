#include "RigUnit_PoseGetTransform.h"

FRigUnit_PoseGetTransform::FRigUnit_PoseGetTransform() {
    this->Space = ERigVMTransformSpace::LocalSpace;
    this->Valid = false;
    this->CurveValue = 0.00f;
    this->CachedPoseElementIndex = 0;
    this->CachedPoseHash = 0;
}

