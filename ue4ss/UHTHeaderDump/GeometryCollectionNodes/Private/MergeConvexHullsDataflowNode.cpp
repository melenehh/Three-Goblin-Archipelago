#include "MergeConvexHullsDataflowNode.h"

FMergeConvexHullsDataflowNode::FMergeConvexHullsDataflowNode() {
    this->MaxConvexCount = 0;
    this->ErrorTolerance = 0.00f;
    this->bProtectNegativeSpace = false;
    this->TargetNumSamples = 0;
    this->MinSampleSpacing = 0.00f;
    this->NegativeSpaceTolerance = 0.00f;
    this->MinRadius = 0.00f;
}

