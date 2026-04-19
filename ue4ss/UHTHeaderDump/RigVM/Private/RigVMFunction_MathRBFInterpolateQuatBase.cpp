#include "RigVMFunction_MathRBFInterpolateQuatBase.h"

FRigVMFunction_MathRBFInterpolateQuatBase::FRigVMFunction_MathRBFInterpolateQuatBase() {
    this->DistanceFunction = ERBFQuatDistanceType::Euclidean;
    this->SmoothingFunction = ERBFKernelType::Gaussian;
    this->SmoothingAngle = 0.00f;
    this->bNormalizeOutput = false;
}

