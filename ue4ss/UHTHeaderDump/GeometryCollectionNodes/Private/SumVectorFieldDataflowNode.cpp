#include "SumVectorFieldDataflowNode.h"

FSumVectorFieldDataflowNode::FSumVectorFieldDataflowNode() {
    this->Magnitude = 0.00f;
    this->Operation = EDataflowVectorFieldOperationType::Dataflow_VectorFieldOperationType_Multiply;
    this->bSwapVectorInputs = false;
}

