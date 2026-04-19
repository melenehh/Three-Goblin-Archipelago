#include "RandomFloatDataflowNode.h"

FRandomFloatDataflowNode::FRandomFloatDataflowNode() {
    this->bDeterministic = false;
    this->RandomSeed = 0.00f;
    this->ReturnValue = 0.00f;
}

