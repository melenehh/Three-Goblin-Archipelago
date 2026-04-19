#include "CollectionTransformSelectionByVolumeDataflowNode.h"

FCollectionTransformSelectionByVolumeDataflowNode::FCollectionTransformSelectionByVolumeDataflowNode() {
    this->VolumeMin = 0.00f;
    this->VolumeMax = 0.00f;
    this->RangeSetting = ERangeSettingEnum::Dataflow_RangeSetting_InsideRange;
    this->bInclusive = false;
}

