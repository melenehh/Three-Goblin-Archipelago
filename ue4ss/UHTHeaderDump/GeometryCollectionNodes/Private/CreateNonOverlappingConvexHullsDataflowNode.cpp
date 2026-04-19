#include "CreateNonOverlappingConvexHullsDataflowNode.h"

FCreateNonOverlappingConvexHullsDataflowNode::FCreateNonOverlappingConvexHullsDataflowNode() {
    this->CanExceedFraction = 0.00f;
    this->SimplificationDistanceThreshold = 0.00f;
    this->OverlapRemovalMethod = EConvexOverlapRemovalMethodEnum::Dataflow_EConvexOverlapRemovalMethod_None;
    this->OverlapRemovalShrinkPercent = 0.00f;
    this->CanRemoveFraction = 0.00f;
}

