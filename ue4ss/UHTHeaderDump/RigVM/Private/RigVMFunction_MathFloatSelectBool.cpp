#include "RigVMFunction_MathFloatSelectBool.h"

FRigVMFunction_MathFloatSelectBool::FRigVMFunction_MathFloatSelectBool() {
    this->Condition = false;
    this->IfTrue = 0.00f;
    this->IfFalse = 0.00f;
    this->Result = 0.00f;
}

