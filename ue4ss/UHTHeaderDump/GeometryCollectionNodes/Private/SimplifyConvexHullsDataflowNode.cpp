#include "SimplifyConvexHullsDataflowNode.h"

FSimplifyConvexHullsDataflowNode::FSimplifyConvexHullsDataflowNode() {
    this->SimplifyMethod = EConvexHullSimplifyMethod::MeshQSlim;
    this->SimplificationAngleThreshold = 0.00f;
    this->SimplificationDistanceThreshold = 0.00f;
    this->MinTargetTriangleCount = 0;
    this->bUseExistingVertices = false;
}

