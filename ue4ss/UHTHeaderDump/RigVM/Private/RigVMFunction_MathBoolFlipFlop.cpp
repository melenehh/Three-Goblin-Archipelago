#include "RigVMFunction_MathBoolFlipFlop.h"

FRigVMFunction_MathBoolFlipFlop::FRigVMFunction_MathBoolFlipFlop() {
    this->StartValue = false;
    this->Duration = 0.00f;
    this->Result = false;
    this->LastValue = false;
    this->TimeLeft = 0.00f;
}

