#include "FloatArrayToVertexSelectionDataflowNode.h"

FFloatArrayToVertexSelectionDataflowNode::FFloatArrayToVertexSelectionDataflowNode() {
    this->Operation = ECompareOperation1Enum::Dataflow_Compare_Equal;
    this->Threshold = 0.00f;
}

