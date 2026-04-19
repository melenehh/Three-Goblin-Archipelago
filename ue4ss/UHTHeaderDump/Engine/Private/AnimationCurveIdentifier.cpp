#include "AnimationCurveIdentifier.h"

FAnimationCurveIdentifier::FAnimationCurveIdentifier() {
    this->CurveType = ERawCurveTrackTypes::RCT_Float;
    this->Channel = ETransformCurveChannel::Position;
    this->Axis = EVectorCurveChannel::X;
}

