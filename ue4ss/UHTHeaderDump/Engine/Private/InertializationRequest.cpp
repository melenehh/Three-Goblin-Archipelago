#include "InertializationRequest.h"

FInertializationRequest::FInertializationRequest() {
    this->Duration = 0.00f;
    this->BlendProfile = NULL;
    this->bUseBlendMode = false;
    this->BlendMode = EAlphaBlendOption::Linear;
    this->CustomBlendCurve = NULL;
    this->NodeId = 0;
    this->AnimInstance = NULL;
}

