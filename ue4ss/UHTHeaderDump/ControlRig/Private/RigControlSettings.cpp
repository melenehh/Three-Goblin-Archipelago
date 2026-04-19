#include "RigControlSettings.h"

FRigControlSettings::FRigControlSettings() {
    this->AnimationType = ERigControlAnimationType::AnimationControl;
    this->ControlType = ERigControlType::Bool;
    this->PrimaryAxis = ERigControlAxis::X;
    this->bIsCurve = false;
    this->bDrawLimits = false;
    this->bShapeVisible = false;
    this->ShapeVisibility = ERigControlVisibility::UserDefined;
    this->bIsTransientControl = false;
    this->ControlEnum = NULL;
    this->bGroupWithParentControl = false;
    this->bRestrictSpaceSwitching = false;
    this->PreferredRotationOrder = EEulerRotationOrder::XYZ;
    this->bUsePreferredRotationOrder = false;
}

