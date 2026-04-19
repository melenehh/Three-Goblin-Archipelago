#include "AnimNode_DeadBlending.h"

FAnimNode_DeadBlending::FAnimNode_DeadBlending() {
    this->bAlwaysUseDefaultBlendSettings = false;
    this->DefaultBlendDuration = 0.00f;
    this->DefaultBlendProfile = NULL;
    this->DefaultBlendMode = EAlphaBlendOption::Linear;
    this->DefaultCustomBlendCurve = NULL;
    this->BlendTimeMultiplier = 0.00f;
    this->bLinearlyInterpolateScales = false;
    this->ExtrapolationHalfLife = 0.00f;
    this->ExtrapolationHalfLifeMin = 0.00f;
    this->ExtrapolationHalfLifeMax = 0.00f;
    this->MaximumTranslationVelocity = 0.00f;
    this->MaximumRotationVelocity = 0.00f;
    this->MaximumScaleVelocity = 0.00f;
    this->MaximumCurveVelocity = 0.00f;
    this->bPreallocateMemory = false;
    this->InertializationRequestAnimInstance = NULL;
    this->InertializationCustomBlendCurve = NULL;
}

