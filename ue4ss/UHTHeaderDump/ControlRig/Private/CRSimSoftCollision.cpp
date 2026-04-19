#include "CRSimSoftCollision.h"

FCRSimSoftCollision::FCRSimSoftCollision() {
    this->ShapeType = ECRSimSoftCollisionType::Plane;
    this->MinimumDistance = 0.00f;
    this->MaximumDistance = 0.00f;
    this->FalloffType = ERigVMAnimEasingType::Linear;
    this->Coefficient = 0.00f;
    this->bInverted = false;
}

