#include "RigUnit_ChainHarmonics_Pendulum.h"

FRigUnit_ChainHarmonics_Pendulum::FRigUnit_ChainHarmonics_Pendulum() {
    this->bEnabled = false;
    this->PendulumStiffness = 0.00f;
    this->PendulumBlend = 0.00f;
    this->PendulumDrag = 0.00f;
    this->PendulumMinimum = 0.00f;
    this->PendulumMaximum = 0.00f;
    this->PendulumEase = ERigVMAnimEasingType::Linear;
    this->UnwindMinimum = 0.00f;
    this->UnwindMaximum = 0.00f;
}

