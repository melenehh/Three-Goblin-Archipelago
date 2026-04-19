#include "HairInterpolationSettings.h"

FHairInterpolationSettings::FHairInterpolationSettings() {
    this->GuideType = EGroomGuideType::Imported;
    this->bOverrideGuides = false;
    this->HairToGuideDensity = 0.00f;
    this->RiggedGuideNumCurves = 0;
    this->RiggedGuideNumPoints = 0;
    this->InterpolationQuality = EHairInterpolationQuality::Low;
    this->InterpolationDistance = EHairInterpolationWeight::Parametric;
    this->bRandomizeGuide = false;
    this->bUseUniqueGuide = false;
}

