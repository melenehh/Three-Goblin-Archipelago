#include "RigVMFunction_MathRBFInterpolateVectorBase.h"

FRigVMFunction_MathRBFInterpolateVectorBase::FRigVMFunction_MathRBFInterpolateVectorBase() {
    this->DistanceFunction = ERBFVectorDistanceType::Euclidean;
    this->SmoothingFunction = ERBFKernelType::Gaussian;
    this->SmoothingRadius = 0.00f;
    this->bNormalizeOutput = false;
}

