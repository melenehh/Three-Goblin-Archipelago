#include "AddMaterialToCollectionDataflowNode.h"

FAddMaterialToCollectionDataflowNode::FAddMaterialToCollectionDataflowNode() {
    this->OutsideMaterial = NULL;
    this->InsideMaterial = NULL;
    this->bAssignOutsideMaterial = false;
    this->bAssignInsideMaterial = false;
}

