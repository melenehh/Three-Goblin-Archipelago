#include "CollectionTransformSelectionByIntAttrDataflowNode.h"

FCollectionTransformSelectionByIntAttrDataflowNode::FCollectionTransformSelectionByIntAttrDataflowNode() {
    this->Min = 0;
    this->Max = 0;
    this->RangeSetting = ERangeSettingEnum::Dataflow_RangeSetting_InsideRange;
    this->bInclusive = false;
}

