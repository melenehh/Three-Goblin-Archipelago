#include "MeshBooleanDataflowNode.h"

FMeshBooleanDataflowNode::FMeshBooleanDataflowNode() {
    this->Operation = EMeshBooleanOperationEnum::Dataflow_MeshBoolean_Union;
    this->Mesh1 = NULL;
    this->Mesh2 = NULL;
    this->Mesh = NULL;
}

