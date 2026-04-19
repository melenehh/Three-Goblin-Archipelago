#include "SetAnchorStateDataflowNode.h"

FSetAnchorStateDataflowNode::FSetAnchorStateDataflowNode() {
    this->AnchorState = EAnchorStateEnum::Dataflow_AnchorState_Anchored;
    this->bSetNotSelectedBonesToOppositeState = false;
}

