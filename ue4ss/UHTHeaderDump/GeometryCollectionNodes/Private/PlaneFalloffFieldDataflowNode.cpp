#include "PlaneFalloffFieldDataflowNode.h"

FPlaneFalloffFieldDataflowNode::FPlaneFalloffFieldDataflowNode() {
    this->Distance = 0.00f;
    this->Magnitude = 0.00f;
    this->MinRange = 0.00f;
    this->MaxRange = 0.00f;
    this->Default = 0.00f;
    this->FalloffType = EDataflowFieldFalloffType::Dataflow_FieldFalloffType_None;
    this->NumSamplePositions = 0;
}

