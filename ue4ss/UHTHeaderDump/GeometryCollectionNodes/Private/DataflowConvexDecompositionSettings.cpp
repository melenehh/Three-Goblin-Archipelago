#include "DataflowConvexDecompositionSettings.h"

FDataflowConvexDecompositionSettings::FDataflowConvexDecompositionSettings() {
    this->MinSizeToDecompose = 0.00f;
    this->MaxGeoToHullVolumeRatioToDecompose = 0.00f;
    this->ErrorTolerance = 0.00f;
    this->MaxHullsPerGeometry = 0;
    this->MinThicknessTolerance = 0.00f;
    this->NumAdditionalSplits = 0;
}

