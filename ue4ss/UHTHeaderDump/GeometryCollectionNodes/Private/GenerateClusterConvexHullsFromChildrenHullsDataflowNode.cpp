#include "GenerateClusterConvexHullsFromChildrenHullsDataflowNode.h"

FGenerateClusterConvexHullsFromChildrenHullsDataflowNode::FGenerateClusterConvexHullsFromChildrenHullsDataflowNode() {
    this->ConvexCount = 0;
    this->ErrorTolerance = 0.00f;
    this->bPreferExternalCollisionShapes = false;
    this->bProtectNegativeSpace = false;
    this->TargetNumSamples = 0;
    this->MinSampleSpacing = 0.00f;
    this->NegativeSpaceTolerance = 0.00f;
    this->MinRadius = 0.00f;
}

