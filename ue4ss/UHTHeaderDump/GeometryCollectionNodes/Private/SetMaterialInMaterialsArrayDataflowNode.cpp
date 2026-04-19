#include "SetMaterialInMaterialsArrayDataflowNode.h"

FSetMaterialInMaterialsArrayDataflowNode::FSetMaterialInMaterialsArrayDataflowNode() {
    this->Material = NULL;
    this->Operation = ESetMaterialOperationTypeEnum::Dataflow_SetMaterialOperationType_Add;
    this->MaterialIdx = 0;
}

