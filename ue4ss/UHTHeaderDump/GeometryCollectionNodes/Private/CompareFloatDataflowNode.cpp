#include "CompareFloatDataflowNode.h"

FCompareFloatDataflowNode::FCompareFloatDataflowNode() {
    this->Operation = ECompareOperationEnum::Dataflow_Compare_Equal;
    this->FloatA = 0.00f;
    this->FloatB = 0.00f;
    this->Result = false;
}

