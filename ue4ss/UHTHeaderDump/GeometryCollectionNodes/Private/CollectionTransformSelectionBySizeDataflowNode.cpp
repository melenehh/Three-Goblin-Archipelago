#include "CollectionTransformSelectionBySizeDataflowNode.h"

FCollectionTransformSelectionBySizeDataflowNode::FCollectionTransformSelectionBySizeDataflowNode() {
    this->SizeMin = 0.00f;
    this->SizeMax = 0.00f;
    this->RangeSetting = ERangeSettingEnum::Dataflow_RangeSetting_InsideRange;
    this->bInclusive = false;
    this->bUseRelativeSize = false;
}

