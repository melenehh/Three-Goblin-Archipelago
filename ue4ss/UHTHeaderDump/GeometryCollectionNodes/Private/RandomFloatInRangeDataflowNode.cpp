#include "RandomFloatInRangeDataflowNode.h"

FRandomFloatInRangeDataflowNode::FRandomFloatInRangeDataflowNode() {
    this->bDeterministic = false;
    this->RandomSeed = 0.00f;
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->ReturnValue = 0.00f;
}

