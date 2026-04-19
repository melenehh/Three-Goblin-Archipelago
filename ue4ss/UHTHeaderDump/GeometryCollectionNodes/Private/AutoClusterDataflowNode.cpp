#include "AutoClusterDataflowNode.h"

FAutoClusterDataflowNode::FAutoClusterDataflowNode() {
    this->ClusterSizeMethod = EClusterSizeMethodEnum::Dataflow_ClusterSizeMethod_ByNumber;
    this->ClusterSites = 0;
    this->ClusterFraction = 0.00f;
    this->SiteSize = 0.00f;
    this->ClusterGridWidth = 0;
    this->ClusterGridDepth = 0;
    this->ClusterGridHeight = 0;
    this->DriftIterations = 0;
    this->MinimumSize = 0.00f;
    this->AutoCluster = false;
    this->EnforceSiteParameters = false;
    this->AvoidIsolated = false;
}

