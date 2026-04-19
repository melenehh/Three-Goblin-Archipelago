#include "CollectionTransformSelectionByFloatAttrDataflowNode.h"

FCollectionTransformSelectionByFloatAttrDataflowNode::FCollectionTransformSelectionByFloatAttrDataflowNode() {
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->RangeSetting = ERangeSettingEnum::Dataflow_RangeSetting_InsideRange;
    this->bInclusive = false;
}

