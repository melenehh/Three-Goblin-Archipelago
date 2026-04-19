#include "RigVMExtendedExecuteContext.h"

FRigVMExtendedExecuteContext::FRigVMExtendedExecuteContext() {
    this->VMHash = 0;
    this->NumExecutions = 0;
    this->DeferredVMToCopy = NULL;
}

