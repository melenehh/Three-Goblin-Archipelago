#include "SelectFloatArrayIndicesInRangeDataflowNode.h"

FSelectFloatArrayIndicesInRangeDataflowNode::FSelectFloatArrayIndicesInRangeDataflowNode() {
    this->Min = 0.00f;
    this->Max = 0.00f;
    this->RangeSetting = ERangeSettingEnum::Dataflow_RangeSetting_InsideRange;
    this->bInclusive = false;
}

