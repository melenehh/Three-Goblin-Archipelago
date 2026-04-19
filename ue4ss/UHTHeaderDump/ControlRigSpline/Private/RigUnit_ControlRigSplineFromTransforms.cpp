#include "RigUnit_ControlRigSplineFromTransforms.h"

FRigUnit_ControlRigSplineFromTransforms::FRigUnit_ControlRigSplineFromTransforms() {
    this->SplineMode = ESplineType::BSpline;
    this->bClosed = false;
    this->SamplesPerSegment = 0;
    this->Compression = 0.00f;
    this->Stretch = 0.00f;
}

