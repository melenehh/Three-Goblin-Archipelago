#include "PhysicsPredictionSettings.h"

FPhysicsPredictionSettings::FPhysicsPredictionSettings() {
    this->bEnablePhysicsPrediction = false;
    this->bEnablePhysicsResimulation = false;
    this->ResimulationErrorThreshold = 0.00f;
    this->MaxSupportedLatencyPrediction = 0.00f;
}

