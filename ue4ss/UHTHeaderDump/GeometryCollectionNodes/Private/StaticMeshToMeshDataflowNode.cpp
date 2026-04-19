#include "StaticMeshToMeshDataflowNode.h"

FStaticMeshToMeshDataflowNode::FStaticMeshToMeshDataflowNode() {
    this->StaticMesh = NULL;
    this->bUseHiRes = false;
    this->LODLevel = 0;
    this->Mesh = NULL;
}

