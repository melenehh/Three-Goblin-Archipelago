#include "SumScalarFieldDataflowNode.h"

FSumScalarFieldDataflowNode::FSumScalarFieldDataflowNode() {
    this->Magnitude = 0.00f;
    this->Operation = EDataflowFloatFieldOperationType::Dataflow_FloatFieldOperationType_Multiply;
    this->bSwapInputs = false;
}

