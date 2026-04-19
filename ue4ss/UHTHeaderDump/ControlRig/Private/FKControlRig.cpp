#include "FKControlRig.h"

UFKControlRig::UFKControlRig() {
    this->EventQueue.AddDefaulted(1);
    this->ApplyMode = EControlRigFKRigExecuteMode::Replace;
}


