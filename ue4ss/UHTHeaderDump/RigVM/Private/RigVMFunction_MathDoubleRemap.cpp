#include "RigVMFunction_MathDoubleRemap.h"

FRigVMFunction_MathDoubleRemap::FRigVMFunction_MathDoubleRemap() {
    this->Value = 0.00f;
    this->SourceMinimum = 0.00f;
    this->SourceMaximum = 0.00f;
    this->TargetMinimum = 0.00f;
    this->TargetMaximum = 0.00f;
    this->bClamp = false;
    this->Result = 0.00f;
}

