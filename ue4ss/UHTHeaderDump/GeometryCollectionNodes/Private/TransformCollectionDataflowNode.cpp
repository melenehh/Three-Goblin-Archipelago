#include "TransformCollectionDataflowNode.h"

FTransformCollectionDataflowNode::FTransformCollectionDataflowNode() {
    this->RotationOrder = ERotationOrderEnum::Dataflow_RotationOrder_XYZ;
    this->UniformScale = 0.00f;
    this->bInvertTransformation = false;
}

