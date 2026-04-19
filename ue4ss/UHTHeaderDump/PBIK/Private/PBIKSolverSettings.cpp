#include "PBIKSolverSettings.h"

FPBIKSolverSettings::FPBIKSolverSettings() {
    this->Iterations = 0;
    this->MassMultiplier = 0.00f;
    this->bAllowStretch = false;
    this->RootBehavior = EPBIKRootBehavior::PrePull;
    this->GlobalPullChainAlpha = 0.00f;
    this->MaxAngle = 0.00f;
    this->OverRelaxation = 0.00f;
    this->bStartSolveFromInputPose = false;
}

