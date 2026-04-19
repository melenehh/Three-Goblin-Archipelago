#include "AddCustomCollectionAttributeDataflowNode.h"

FAddCustomCollectionAttributeDataflowNode::FAddCustomCollectionAttributeDataflowNode() {
    this->GroupName = EStandardGroupNameEnum::Dataflow_EStandardGroupNameEnum_Transform;
    this->CustomAttributeType = ECustomAttributeTypeEnum::Dataflow_CustomAttributeType_UInt8;
    this->NumElements = 0;
}

