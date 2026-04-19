#include "CreateLeafConvexHullsDataflowNode.h"

FCreateLeafConvexHullsDataflowNode::FCreateLeafConvexHullsDataflowNode() {
    this->GenerateMethod = EGenerateConvexMethod::ExternalCollision;
    this->IntersectIfComputedIsSmallerByFactor = 0.00f;
    this->MinExternalVolumeToIntersect = 0.00f;
    this->SimplificationDistanceThreshold = 0.00f;
}

