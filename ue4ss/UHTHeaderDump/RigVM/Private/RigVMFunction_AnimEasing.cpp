#include "RigVMFunction_AnimEasing.h"

FRigVMFunction_AnimEasing::FRigVMFunction_AnimEasing() {
    this->Value = 0.00f;
    this->Type = ERigVMAnimEasingType::Linear;
    this->SourceMinimum = 0.00f;
    this->SourceMaximum = 0.00f;
    this->TargetMinimum = 0.00f;
    this->TargetMaximum = 0.00f;
    this->Result = 0.00f;
}

