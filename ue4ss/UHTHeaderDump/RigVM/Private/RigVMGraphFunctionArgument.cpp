#include "RigVMGraphFunctionArgument.h"

FRigVMGraphFunctionArgument::FRigVMGraphFunctionArgument() {
    this->bIsArray = false;
    this->Direction = ERigVMPinDirection::Input;
    this->bIsConst = false;
}

