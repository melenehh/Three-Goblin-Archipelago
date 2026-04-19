#include "ProximityDataflowNode.h"

FProximityDataflowNode::FProximityDataflowNode() {
    this->ProximityMethod = EProximityMethodEnum::Dataflow_ProximityMethod_Precise;
    this->DistanceThreshold = 0.00f;
    this->ContactThreshold = 0.00f;
    this->FilterContactMethod = EProximityContactFilteringMethodEnum::Dataflow_ProximityContactFilteringMethod_ProjectedBoundsOverlap;
    this->bUseAsConnectionGraph = false;
    this->ContactAreaMethod = EConnectionContactAreaMethodEnum::Dataflow_ConnectionContactAreaMethod_None;
}

