#include "CompareIntDataflowNode.h"

FCompareIntDataflowNode::FCompareIntDataflowNode() {
    this->Operation = ECompareOperationEnum::Dataflow_Compare_Equal;
    this->IntA = 0;
    this->IntB = 0;
    this->Result = false;
}

