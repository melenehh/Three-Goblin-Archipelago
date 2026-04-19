#include "RigUnit_SplineConstraint.h"

FRigUnit_SplineConstraint::FRigUnit_SplineConstraint() {
    this->Alignment = EControlRigCurveAlignment::Front;
    this->Minimum = 0.00f;
    this->Maximum = 0.00f;
    this->bPropagateToChildren = false;
}

