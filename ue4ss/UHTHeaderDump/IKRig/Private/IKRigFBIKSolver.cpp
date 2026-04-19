#include "IKRigFBIKSolver.h"

UIKRigFBIKSolver::UIKRigFBIKSolver() {
    this->Iterations = 20;
    this->MassMultiplier = 1.00f;
    this->bAllowStretch = false;
    this->RootBehavior = EPBIKRootBehavior::PrePull;
    this->PullChainAlpha = 1.00f;
    this->MaxAngle = 30.00f;
    this->OverRelaxation = 1.30f;
    this->bStartSolveFromInputPose = true;
}


