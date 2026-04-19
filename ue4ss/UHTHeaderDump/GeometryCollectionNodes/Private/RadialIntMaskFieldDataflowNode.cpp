#include "RadialIntMaskFieldDataflowNode.h"

FRadialIntMaskFieldDataflowNode::FRadialIntMaskFieldDataflowNode() {
    this->InteriorValue = 0;
    this->ExteriorValue = 0;
    this->SetMaskConditionType = EDataflowSetMaskConditionType::Dataflow_SetMaskConditionType_Always;
    this->NumSamplePositions = 0;
}

