#include "GetConvexHullVolumeDataflowNode.h"

FGetConvexHullVolumeDataflowNode::FGetConvexHullVolumeDataflowNode() {
    this->Volume = 0.00f;
    this->bSumChildrenForClustersWithoutHulls = false;
    this->bVolumeOfUnion = false;
}

