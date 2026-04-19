#include "FloatArrayComputeStatisticsDataflowNode.h"

FFloatArrayComputeStatisticsDataflowNode::FFloatArrayComputeStatisticsDataflowNode() {
    this->OperationName = EStatisticsOperationEnum::Dataflow_EStatisticsOperationEnum_Min;
    this->Value = 0.00f;
}

