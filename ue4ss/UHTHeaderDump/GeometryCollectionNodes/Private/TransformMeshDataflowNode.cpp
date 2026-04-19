#include "TransformMeshDataflowNode.h"

FTransformMeshDataflowNode::FTransformMeshDataflowNode() {
    this->Mesh = NULL;
    this->RotationOrder = ERotationOrderEnum::Dataflow_RotationOrder_XYZ;
    this->UniformScale = 0.00f;
    this->bInvertTransformation = false;
}

