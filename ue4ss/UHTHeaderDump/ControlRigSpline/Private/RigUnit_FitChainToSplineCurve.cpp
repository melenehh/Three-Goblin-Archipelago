#include "RigUnit_FitChainToSplineCurve.h"

FRigUnit_FitChainToSplineCurve::FRigUnit_FitChainToSplineCurve() {
    this->Alignment = EControlRigCurveAlignment::Front;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->SamplingPrecision = 0;
    this->RotationEaseType = ERigVMAnimEasingType::Linear;
    this->Weight = 0.00f;
    this->bPropagateToChildren = false;
}

